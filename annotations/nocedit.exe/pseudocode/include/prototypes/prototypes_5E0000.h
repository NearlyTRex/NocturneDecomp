#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdint.h"
#include "system/windef.h"
#include "system/winnt.h"
#include "system/winsock.h"
#include "types/classes/CCryptVessel.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CTVBat.h"
#include "types/classes/CTerrain.h"
#include "types/classes/CTire.h"
#include "types/classes/CTrigger.h"
#include "types/classes/CTurret.h"
#include "types/classes/CVampireBoss.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVehicle.h"
#include "types/classes/CWater.h"
#include "types/classes/CWaterActor.h"
#include "types/classes/CWayPoint.h"
#include "types/classes/CWeapon.h"
#include "types/classes/CWeather.h"
#include "types/classes/CWerewolf.h"
#include "types/structs/SNetworkAddr.h"
#include "types/structs/SSocketContext.h"
#include "types/structs/SWaterVertex.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x5E0000
// =============================================================================

int core_trigger_cpp_CTrigger_FUN_005e00d0(CTrigger * this_ptr);
void core_trigger_cpp_CTrigger_FUN_005e0630(CTrigger * this_ptr);
void core_trigger_cpp_CTrigger_serialize_FUN_005e0690(CTrigger * this_ptr);
int core_trigger_cpp_CTrigger_FUN_005e0930(CTrigger * this_ptr);
int core_trigger_cpp_CTrigger_FUN_005e0980(CTrigger * this_ptr);
int core_trigger_cpp_CTrigger_processActionButton_FUN_005e0a20(CTrigger * this_ptr);
void core_trigger_cpp_CTrigger_FUN_005e0a50(CTrigger * this_ptr);
undefined core_trigger_cpp_FUN_005e0aa0();
undefined core_trigger_cpp_FUN_005e0ac0();
undefined core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
undefined core_trigger_cpp_FUN_005e0ba0();
int core_trigger_cpp_CTrigger_FUN_005e0c30(CTrigger * this_ptr);
undefined core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0();
void core_trigger_cpp_CTrigger_FUN_005e0f70(CTrigger * this_ptr);
void core_trigger_cpp_CTrigger_FUN_005e1180(CTrigger * this_ptr);
void core_trigger_cpp_CTrigger_FUN_005e1350(CTrigger * this_ptr);
CTrigger * core_trigger_cpp_CTrigger_dtor_FUN_005e1660(CTrigger * this_ptr, uint d1, uint d2);
void support_trisock_cpp_staticInit_FUN_005e16b0(void);
uint * support_trisock_cpp_copyIPAddress_FUN_005e16f0(uint * dest_ip, uint * src_ip);
uint support_trisock_cpp_parseIPAddress_FUN_005e1700(uint * result_ptr, char * dotted_decimal_string);
uint8_t * support_trisock_cpp_buildIPAddressOrDie_FUN_005e1750(uchar * dest_ip, int octet1, int octet2, int octet3, int octet4);
void support_trisock_cpp_formatIPAddress_FUN_005e17c0(char * output_buffer, uchar * ip_bytes);
int support_trisock_cpp_parseIPComponents_FUN_005e1800(uint * result_ptr, char * dotted_decimal_string);
int support_trisock_cpp_buildIPAddress_FUN_005e1870(uint8_t * dest_ip, int octet1, int octet2, int octet3, int octet4);
void support_trisock_cpp_extractIPOctets_FUN_005e18e0(uchar * ip_bytes, uint * octet1_ptr, uint * octet2_ptr, uint * octet3_ptr, uint * octet4_ptr);
uint support_trisock_cpp_getIPAddress_FUN_005e1930(SNetworkAddr * net_addr);
void support_trisock_cpp_createNetworkAddr_FUN_005e1940(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port);
SOCKADDR_IN * support_trisock_cpp_convertSockAddr_FUN_005e1960(SOCKADDR_IN * dest_addr, SOCKADDR * src_addr);
SOCKADDR_IN * support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr * net_addr, SOCKADDR_IN * dest_buffer);
void support_trisock_cpp_formatSocketAddress_FUN_005e1a30(char * output_buffer, SNetworkAddr * network_addr);
int support_trisock_cpp_shouldNeverBeCalled_FUN_005e1a80(int unknown1, int unknown2);
int support_trisock_cpp_shouldNeverBeCalled_FUN_005e1ab0(int unknown1, int unknown2);
void support_trisock_cpp_invalidateSocket_FUN_005e1ae0(SSocketContext * socket_ctx);
SSocketContext * support_trisock_cpp_bindSocketWrapper_FUN_005e1af0(SSocketContext * socket_ctx);
int support_trisock_cpp_createSocket_FUN_005e1b10(SSocketContext * socket_ctx);
int support_trisock_cpp_createUDPSocket_FUN_005e1b40(SSocketContext * socket_ctx);
int support_trisock_cpp_isSocketValid_FUN_005e1b70(SSocketContext * socket_ctx);
int support_trisock_cpp_bindSocket_FUN_005e1b80(uint16_t port, SOCKET * socket_handle);
int support_trisock_cpp_connectSocket_FUN_005e1bd0(SOCKET * socket_handle, SNetworkAddr * dest_addr);
int support_trisock_cpp_receiveSocketData_FUN_005e1c20(SSocketContext * socket_ctx, char * buffer, int length, SNetworkAddr * source_addr);
int support_trisock_cpp_performSocketOperation_FUN_005e1ca0(SSocketContext * socket_ctx, char * buffer, int length, SNetworkAddr * dest_addr);
int support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(SSocketContext * socket_ctx);
int support_trisock_cpp_listenSocket_FUN_005e1d60(SOCKET * socket_handle);
int support_trisock_cpp_acceptConnection_FUN_005e1d80(SOCKET * listen_socket, SNetworkAddr * client_addr, SOCKET * new_socket);
int support_trisock_cpp_getSocketName_FUN_005e1df0(SOCKET * socket_handle, SNetworkAddr * param_2);
int support_trisock_cpp_setSocketBlocking_FUN_005e1e50(SOCKET * socket_handle, int blocking_mode);
int support_trisock_cpp_setSocketBroadcast_FUN_005e1e90(SOCKET * socket_handle, int broadcast_flag);
int support_trisock_cpp_startupWinsock_FUN_005e1ec0(void);
int support_trisock_cpp_cleanupWinsock_FUN_005e1ee0(WORD wVersionRequested, LPWSADATA lpWSAData);
CTerrain * core_terrain_cpp_CTerrain_ctor_FUN_005e1ef0(CTerrain * this_ptr);
CTerrain * core_terrain_cpp_CTerrain_dtor_FUN_005e1f30(CTerrain * this_ptr);
void core_terrain_cpp_CTerrain_render_FUN_005e1f50(CTerrain * this_ptr);
void core_terrain_cpp_CTerrain_process_FUN_005e2050(CTerrain * this_ptr);
CDemonActorType * core_turret_cpp_staticInit_FUN_005e2080(void);
undefined core_turret_cpp_FUN_005e20b0();
CDemonActorType * core_turret_cpp_CTurret_getActorType_FUN_005e20e0(CTurret * this_ptr);
CTurret * core_turret_cpp_CTurret_ctor_FUN_005e20f0(CTurret * this_ptr);
void core_turret_cpp_CTurret_FUN_005e2240(CTurret * this_ptr);
int core_turret_cpp_CTurret_FUN_005e2320(CTurret * this_ptr);
void core_turret_cpp_CTurret_process_FUN_005e2430(CTurret * this_ptr);
int * core_turret_cpp_CTurret_FUN_005e2910(CTurret * this_ptr);
undefined core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
void core_turret_cpp_CTurret_serialize_FUN_005e2c40(CTurret * this_ptr);
undefined core_turret_cpp_FUN_005e2d50();
undefined core_turret_cpp_FUN_005e3280();
void core_turret_cpp_CTurret_FUN_005e3440(CTurret * this_ptr);
int core_turret_cpp_CTurret_FUN_005e34b0(CTurret * this_ptr);
int core_turret_cpp_CTurret_FUN_005e34d0(CTurret * this_ptr);
void core_turret_cpp_CTurret_FUN_005e3540(CTurret * this_ptr);
undefined core_turret_cpp_FUN_005e3560();
undefined core_turret_cpp_FUN_005e36f0();
undefined core_turret_cpp_FUN_005e3720();
undefined core_turret_cpp_FUN_005e3750();
int core_turret_cpp_CTurret_FUN_005e3c70(CTurret * this_ptr);
void core_turret_cpp_CTurret_FUN_005e3ca0(CTurret * this_ptr);
void core_turret_cpp_CTurret_FUN_005e3dd0(CTurret * this_ptr);
CTurret * core_turret_cpp_CTurret_dtor_FUN_005e3e00(CTurret * this_ptr, uint d1, uint d2);
CDemonActorType * core_tvbat_cpp_staticInit_FUN_005e3e50(void);
undefined core_tvbat_cpp_FUN_005e3e80();
CDemonActorType * core_tvbat_cpp_CTVBat_getActorType_FUN_005e3eb0(CTVBat * this_ptr);
undefined core_tvbat_cpp_FUN_005e3ec0();
CTVBat * core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat * this_ptr);
void core_tvbat_cpp_CTVBat_FUN_005e4050(CTVBat * this_ptr);
void core_tvbat_cpp_CTVBat_serialize_FUN_005e40c0(CTVBat * this_ptr);
void core_tvbat_cpp_CTVBat_process_FUN_005e4210(CTVBat * this_ptr);
undefined core_tvbat_cpp_FUN_005e4d70();
int core_tvbat_cpp_CTVBat_FUN_005e4d80(CTVBat * this_ptr);
int * core_tvbat_cpp_CTVBat_FUN_005e5050(CTVBat * this_ptr);
int core_tvbat_cpp_CTVBat_FUN_005e50d0(CTVBat * this_ptr);
int core_tvbat_cpp_CTVBat_FUN_005e50f0(CTVBat * this_ptr);
undefined core_tvbat_cpp_FUN_005e5100();
undefined core_tvbat_cpp_FUN_005e5130();
void core_tvbat_cpp_CTVBat_FUN_005e51a0(CTVBat * this_ptr);
void core_tvbat_cpp_CTVBat_FUN_005e5260(CTVBat * this_ptr);
void core_tvbat_cpp_CTVBat_FUN_005e5400(CTVBat * this_ptr);
void core_tvbat_cpp_CTVBat_FUN_005e5440(CTVBat * this_ptr);
CTVBat * core_tvbat_cpp_CTVBat_dtor_FUN_005e5460(CTVBat * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
CDemonActorType * core_vampboss_cpp_staticInit_FUN_005e5520(void);
undefined core_vampboss_cpp_FUN_005e5550();
CDemonActorType * core_vampboss_cpp_CVampireBoss_getActorType_FUN_005e5580(CVampireBoss * this_ptr);
CVampireBoss * core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss * this_ptr);
void core_vampboss_cpp_CVampireBoss_FUN_005e56c0(CVampireBoss * this_ptr);
undefined core_vampboss_cpp_FUN_005e58d0();
void core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss * this_ptr);
undefined core_vampboss_cpp_FUN_005e6b80();
undefined core_vampboss_cpp_FUN_005e6ca0();
int core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005e6da0(CVampireBoss * this_ptr);
void core_vampboss_cpp_CVampireBoss_serialize_FUN_005e6f50(CVampireBoss * this_ptr);
undefined core_vampboss_cpp_FUN_005e7030();
undefined core_vampboss_cpp_FUN_005e7270();
int core_vampboss_cpp_CVampireBoss_FUN_005e7280(CVampireBoss * this_ptr);
undefined core_vampboss_cpp_VoicuSummonWavFile_FUN_005e7320();
undefined core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390();
undefined core_vampboss_cpp_VoicuSummonWavFile2_FUN_005e7410();
undefined core_vampboss_cpp_CallToCountVoicuBatWav_FUN_005e7480();
undefined core_vampboss_cpp_SomethingVoicuHumanWav_FUN_005e74c0();
undefined core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510();
int core_vampboss_cpp_CVampireBoss_FUN_005e75f0(CVampireBoss * this_ptr);
void core_vampboss_cpp_CVampireBoss_FUN_005e7650(CVampireBoss * this_ptr);
CVampireBoss * core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9, uint d10, uint d11, uint d12, uint d13);
undefined core_vehicle_cpp_staticInit_FUN_005e7810();
CVector3f * core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector);
CDemonActorType * core_vehicle_cpp_staticInit_FUN_005e78d0(void);
undefined core_vehicle_cpp_FUN_005e7900();
CDemonActorType * core_vehicle_cpp_CVehicle_getActorType_FUN_005e7930(CVehicle * this_ptr);
CVehicle * core_vehicle_cpp_CVehicle_ctor_FUN_005e7940(CVehicle * this_ptr);
void core_vehicle_cpp_CVehicle_FUN_005e7b90(CVehicle * this_ptr);
void core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle * this_ptr);
int * core_vehicle_cpp_CVehicle_FUN_005e86d0(CVehicle * this_ptr);
void core_vehicle_cpp_CVehicle_serialize_FUN_005e8720(CVehicle * this_ptr);
int core_vehicle_cpp_CVehicle_FUN_005e88b0(CVehicle * this_ptr);
int core_vehicle_cpp_CVehicle_FUN_005e88c0(CVehicle * this_ptr);
int core_vehicle_cpp_CVehicle_FUN_005e8b30(CVehicle * this_ptr);
void core_vehicle_cpp_CVehicle_FUN_005e8b40(CVehicle * this_ptr);
undefined core_vehicle_cpp_FUN_005e8b50();
void core_vehicle_cpp_CVehicle_FUN_005e8ba0(CVehicle * this_ptr);
void core_vehicle_cpp_CVehicle_FUN_005e8cf0(CVehicle * this_ptr);
void core_vehicle_cpp_CVehicle_FUN_005e8d00(CVehicle * this_ptr);
CVehicle * core_vehicle_cpp_CVehicle_dtor_FUN_005e8d20(CVehicle * this_ptr, uint d1, uint d2, uint d3, uint d4);
CTire * core_vehicle_cpp_CTire_ctor_FUN_005e8da0(CTire * this_ptr);
CTire * core_vehicle_cpp_CTire_dtor_FUN_005e8dc0(CTire * this_ptr);
undefined core_vehicle_cpp_FUN_005e8dd0();
CDemonActorType * core_vessel_cpp_staticInit_FUN_005e8df0(void);
undefined core_vessel_cpp_FUN_005e8e20();
CDemonActorType * core_vessel_cpp_CCryptVessel_getActorType_FUN_005e8e50(CCryptVessel * this_ptr);
CCryptVessel * core_vessel_cpp_CCryptVessel_ctor_FUN_005e8e60(CCryptVessel * this_ptr);
void core_vessel_cpp_CCryptVessel_FUN_005e8fc0(CCryptVessel * this_ptr);
int core_vessel_cpp_CCryptVessel_FUN_005e9100(CCryptVessel * this_ptr);
void core_vessel_cpp_CCryptVessel_FUN_005e9140(CCryptVessel * this_ptr);
void core_vessel_cpp_CCryptVessel_FUN_005e9150(CCryptVessel * this_ptr);
int core_vessel_cpp_CCryptVessel_FUN_005e9170(CCryptVessel * this_ptr);
undefined core_vessel_cpp_FUN_005e9180();
void core_vessel_cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel * this_ptr);
int core_vessel_cpp_CCryptVessel_FUN_005e9750(CCryptVessel * this_ptr);
int core_vessel_cpp_FUN_005e98b0(CCryptVessel * this_ptr);
void core_vessel_cpp_CCryptVessel_FUN_005e9a00(CCryptVessel * this_ptr);
void core_vessel_cpp_CCryptVessel_serialize_FUN_005e9a80(CCryptVessel * this_ptr);
int core_vessel_cpp_CCryptVessel_FUN_005e9b90(CCryptVessel * this_ptr);
int * core_vessel_cpp_CCryptVessel_FUN_005e9bb0(CCryptVessel * this_ptr);
void core_vessel_cpp_CCryptVessel_FUN_005e9c00(CCryptVessel * this_ptr);
void core_vessel_cpp_CCryptVessel_FUN_005e9d10(CCryptVessel * this_ptr);
CCryptVessel * core_vessel_cpp_CCryptVessel_dtor_FUN_005e9d30(CCryptVessel * this_ptr, uint d1, uint d2, uint d3);
void core_water_cpp_staticInit_FUN_005e9da0(void);
float core_water_cpp_calculateWaveHeight_FUN_005e9dc0(int x, int y);
CWater * core_water_cpp_CWater_ctor_FUN_005e9e10(CWater * this_ptr);
CWater * core_water_cpp_CWater_dtor_FUN_005e9e30(CWater * this_ptr);
void core_water_cpp_CWater_captureTextures_FUN_005e9e40(CWater * this_ptr);
int core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater * this_ptr);
void core_water_cpp_CWater_process_FUN_005e9ed0(void);
void core_water_cpp_CWater_render_FUN_005ea320(CWater * this_ptr, int render_mode);
CDemonActorType * core_wateract_cpp_staticInit_FUN_005ea810(void);
undefined core_wateract_cpp_FUN_005ea860();
CDemonActorType * core_wateract_cpp_CWaterActor_getActorType_FUN_005ea890(CWaterActor * this_ptr);
CWaterActor * core_wateract_cpp_CWaterActor_ctor_FUN_005ea8a0(CWaterActor * this_ptr);
void core_wateract_cpp_CWaterActor_FUN_005ea9f0(CWaterActor * this_ptr);
undefined core_wateract_cpp_FUN_005eafa0();
undefined core_wateract_cpp_FUN_005eb040();
void core_wateract_cpp_CWaterActor_process_FUN_005eb100(CWaterActor * this_ptr);
int core_wateract_cpp_CWaterActor_FUN_005eb280(CWaterActor * this_ptr);
void core_wateract_cpp_CWaterActor_FUN_005eb4b0(CWaterActor * this_ptr);
void core_wateract_cpp_CWaterActor_serialize_FUN_005eb510(CWaterActor * this_ptr);
int core_wateract_cpp_CWaterActor_FUN_005eb710(CWaterActor * this_ptr);
int core_wateract_cpp_CWaterActor_FUN_005eb730(CWaterActor * this_ptr);
float core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor * this_ptr);
void core_wateract_cpp_CWaterActor_FUN_005eb910(CWaterActor * this_ptr);
void core_wateract_cpp_CWaterActor_FUN_005eb940(CWaterActor * this_ptr);
void core_wateract_cpp_CWaterActor_FUN_005ebab0(CWaterActor * this_ptr);
void core_wateract_cpp_CWaterActor_FUN_005ebc10(CWaterActor * this_ptr);
void core_wateract_cpp_CWaterActor_FUN_005ebc50(CWaterActor * this_ptr);
CWaterActor * core_wateract_cpp_CWaterActor_dtor_FUN_005ebc60(CWaterActor * this_ptr, uint d1, uint d2, uint d3);
SWaterVertex * core_wateract_cpp_SWaterVertex_ctor_FUN_005ebcd0(SWaterVertex * this_ptr);
SWaterVertex * core_wateract_cpp_SWaterVertex_dtor_FUN_005ebce0(SWaterVertex * this_ptr);
undefined core_wateract_cpp_FUN_005ebcf0();
CDemonActorType * core_waypoint_cpp_staticInit_FUN_005ebd10(void);
undefined core_waypoint_cpp_FUN_005ebd40();
undefined core_waypoint_cpp_FUN_005ebe30();
CDemonActorType * core_waypoint_cpp_CWayPoint_getActorType_FUN_005ebe60(CWayPoint * this_ptr);
CWayPoint * core_waypoint_cpp_CWayPoint_ctor_FUN_005ebe70(CWayPoint * this_ptr);
void core_waypoint_cpp_CWaypoint_FUN_005ebeb0(CWayPoint * this_ptr);
int core_waypoint_cpp_CWaypoint_FUN_005ebf70(CWayPoint * this_ptr);
void core_waypoint_cpp_CWayPoint_FUN_005ec280(CWayPoint * this_ptr);
undefined core_waypoint_cpp_FUN_005ec320();
void core_waypoint_cpp_CWayPoint_FUN_005ec4d0(CWayPoint * this_ptr);
undefined core_waypoint_cpp_FUN_005ec4f0();
void core_waypoint_cpp_CWayPoint_FUN_005ec5e0(CWayPoint * this_ptr);
void core_waypoint_cpp_CWayPoint_FUN_005ec610(CWayPoint * this_ptr);
undefined core_waypoint_cpp_CallWayPoint_removeAdj_FUN_005ec640();
void core_waypoint_cpp_CWayPoint_FUN_005ec690(CWayPoint * this_ptr);
undefined core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700();
undefined core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0();
undefined core_waypoint_cpp_FUN_005ec830();
CWayPoint * core_waypoint_cpp_CWayPoint_dtor_FUN_005ec8d0(CWayPoint * this_ptr, uint d1, uint d2);
void wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005ec920(void);
int wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005ec980(void);
int wincore_wddvmem_cpp_shutdownDirectDraw_FUN_005eca30(void);
void wincore_wddvmem_cpp_allocateRenderBuffers_FUN_005ecac0(void);
void wincore_wddvmem_cpp_freeRenderBuffers_FUN_005ecba0(void);
int wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005ecc10(void);
void wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_005ecd90(void);
void wincore_wddvmem_cpp_initializeScanlinePointers_FUN_005ece60(void);
int wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel);
void wincore_wddvmem_cpp_resetGraphicsSystem_FUN_005ed2a0(void);
void wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005ed4b0(void);
void wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580(void);
void wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630(void);
int wincore_wddvmem_cpp_findMostSignificantBit_FUN_005ed710(uint value);
void wincore_wddvmem_cpp_analyzePixelFormat_FUN_005ed730(void);
void wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0(void);
void wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void);
void wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005edc50(void);
void wincore_wddvmem_cpp_videoRestore_FUN_005edc80(void);
void wincore_wddvmem_cpp_stubFunction_FUN_005edd80(void);
BOOL wincore_wddvmem_cpp_freeLibrary_FUN_005ede00(HMODULE hLibModule);
HMODULE wincore_wddvmem_cpp_loadLibrary_FUN_005ede10(LPCSTR lpLibFileName);
FARPROC wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName);
CDemonActorType * core_weapon_cpp_staticInit_FUN_005ede40(void);
CWeapon * core_weapon_cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr);
CWeapon * core_weapon_cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3);
void core_weapon_cpp_CWeapon_FUN_005edff0(CWeapon * this_ptr);
int core_weapon_cpp_CWeapon_FUN_005ee030(CWeapon * this_ptr);
int * core_weapon_cpp_CWeapon_FUN_005ee0c0(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_serialize_FUN_005ee250(CWeapon * this_ptr);
int core_weapon_cpp_CWeapon_FUN_005ee330(CWeapon * this_ptr);
int core_weapon_cpp_CWeapon_FUN_005ee340(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_FUN_005ee3e0(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_FUN_005ee3f0(CWeapon * this_ptr);
int core_weapon_cpp_CWeapon_FUN_005ee490(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_FUN_005ee4a0(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_FUN_005ee640(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_FUN_005ee650(CWeapon * this_ptr);
int * core_weapon_cpp_CWeapon_FUN_005ee670(CWeapon * this_ptr);
undefined core_weapon_cpp_FUN_005ee6e0();
int core_weapon_cpp_CWeapon_FUN_005ee710(CWeapon * this_ptr);
int core_weapon_cpp_CWeapon_FUN_005ee730(CWeapon * this_ptr);
undefined core_weapon_cpp_FUN_005ee740();
void core_weapon_cpp_CWeapon_FUN_005ee830(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_FUN_005ee860(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_FUN_005ee9f0(CWeapon * this_ptr);
void core_weapon_cpp_CWeapon_FUN_005eea60(CWeapon * this_ptr);
CDemonGlobe * core_weapon_cpp_CDemonGlobe_ctor_FUN_005eea80(CDemonGlobe * this_ptr);
CDemonGlobe * core_weapon_cpp_CDemonGlobe_dtor_FUN_005eea90(CDemonGlobe * this_ptr);
undefined core_weather_cpp_staticInit_FUN_005eeaa0();
CWeather * core_weather_cpp_CWeather_ctor_FUN_005eead0(CWeather * this_ptr);
undefined core_weather_cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0();
undefined core_weather_cpp_CWeather_AnotherLightningThunderThing_FUN_005eeeb0();
undefined core_weather_cpp_CWeather_SomethingWithThunder_FUN_005ef140();
undefined core_weather_cpp_CWeather_FUN_005ef190();
undefined core_weather_cpp_CWeather_FUN_005ef8c0();
undefined core_weather_cpp_CWeather_FUN_005ef940();
CWeather * core_weather_cpp_CWeather_dtor_FUN_005efb40(CWeather * this_ptr);
undefined core_weather_cpp_FUN_005efb50();
CDemonActorType * core_werewolf_cpp_staticInit_FUN_005efb70(void);
undefined core_werewolf_cpp_FUN_005efbd0();
CDemonActorType * core_werewolf_cpp_CWerewolf_getActorType_FUN_005efc00(CWerewolf * this_ptr);
CWerewolf * core_werewolf_cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf * this_ptr);
void core_werewolf_cpp_CWerewolf_FUN_005efcc0(CWerewolf * this_ptr);
void core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf * this_ptr);

