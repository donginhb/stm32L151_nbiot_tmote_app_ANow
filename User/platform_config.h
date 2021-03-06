#ifndef __PLATFORM_CONFIG_H
#define   __PLATFORM_CONFIG_H

#include "sys.h"
#include "net_coap_app.h"
#include "net_mqttsn_app.h"

//#define	MVB_SUBSN						0x81010001						//设备号
//#define	MVB_BRAND						"mvb"							//厂牌

#define	MVB_STATICMAGNETIC_MODEL			51
#define	MVB_FLOWMAGNETIC_MODEL			52
#define	MVB_SPOT_LOCKER				53
#define	MVB_MODEL_TYPE					MVB_STATICMAGNETIC_MODEL				//设备类型

#define	SYSTEMCLOCKMSI					4194000
#define	SYSTEMCLOCKHSI					32000000
#define	SYSTEMCLOCK					SYSTEMCLOCKMSI						//系统时钟

#define	NETCOAP						0
#define	NETMQTTSN						1
#define	NETPROTOCAL					NETMQTTSN							//网络模式

#define	RADIO_SI4438													//无线开启

#define	SOFTWAREMAJOR					2								//主固件版本
#define	SOFTWARESUB					16								//从固件版本
#define	HARDWAREMAJOR					2								//主硬件版本

#define	IDLE_WORK						4								//休眠
#define	NOTACTIVE_WORK					3								//不工作

#define	DEBUG_WORK					1								//调试工作模式
#define	NORMAL_WORK					0								//正常工作模式

extern bool BootUp;														//BootUp
extern bool DeviceIdleMode;												//IDLE MODE
extern bool DeviceActivedMode;											//ACTIVED MODE

extern COAP_PacketShortTypeDef			CoapShortStructure;					//Coap Short Packet
extern COAP_PacketLongTypeDef				CoapLongStructure;					//Coap Long Packet
extern COAP_PacketInfoTypeDef				CoapInfoStructure;					//Coap Info Packet

extern MQTTSN_StatusBasicTypeDef			MqttSNStatusBasicStructure;			//MqttSN Basic Status Packet
extern MQTTSN_StatusExtendTypeDef			MqttSNStatusExtendStructure;			//MqttSN Extend Status Packet
extern MQTTSN_InfoWorkTypeDef				MqttSNInfoWorkStructure;				//MqttSN Work Info Packet
extern MQTTSN_InfoBasicTypeDef			MqttSNInfoBasicStructure;			//MqttSN Basic Info Packet
extern MQTTSN_InfoDynamicTypeDef			MqttSNInfoDynamicStructure;			//MqttSN Dynamic Info Packet

extern NBIOT_ATCmdTypeDef				NbiotATCmdHandler;					//NBIOT AT Cmd Handler
extern NBIOT_ClientsTypeDef				NbiotClientHandler;					//Coap Clinet Handler
extern MQTTSN_SocketNetTypeDef			MqttSNSocketNetHandler;				//MqttSN Net Handler
extern MQTTSN_ClientsTypeDef				MqttSNClientHandler;				//MqttSN Clinet Handler











#endif
