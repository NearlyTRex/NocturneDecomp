#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdint.h"
#include "system/winsock.h"
#include "types/classes/CBassPlayer.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CCloth.h"
#include "types/classes/CCryptVessel.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDrummer.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CStranger.h"
#include "types/classes/CSuccubus.h"
#include "types/classes/CSvetlana.h"
#include "types/classes/CTVBat.h"
#include "types/classes/CTeleport.h"
#include "types/classes/CTeleportDest.h"
#include "types/classes/CTentacle.h"
#include "types/classes/CTerrain.h"
#include "types/classes/CTextureCache.h"
#include "types/classes/CTextureList.h"
#include "types/classes/CTire.h"
#include "types/classes/CTommyGun.h"
#include "types/classes/CTrap.h"
#include "types/classes/CTrash.h"
#include "types/classes/CTrigger.h"
#include "types/classes/CTurret.h"
#include "types/classes/CVampireBoss.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVehicle.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EDeathState.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SInteractionInfo.h"
#include "types/structs/SLaserInfo.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SNetworkAddr.h"
#include "types/structs/SPlayerInput.h"
#include "types/structs/SRGBColorPalette.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x540000
// =============================================================================

void __cdecl core_stranger_cpp_CStranger_FUN_005402f0(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_00540660(CStranger *this_ptr,float delta_time);
int __cdecl core_stranger_cpp_CStranger_isWeaponDrawn_FUN_00540720(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_00540730(CStranger *this_ptr,int drawn);
int __cdecl core_stranger_cpp_CStranger_getGrabbed_FUN_00540770(CStranger *this_ptr,CDemonActor *grabber,int grab_type);
void __cdecl core_stranger_cpp_CStranger_reset_FUN_00540820(CStranger *this_ptr);
EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_00540890(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_005408c0(CStranger *this_ptr,int hand_index,CVector3f *drop_direction);
void __cdecl core_stranger_cpp_CStranger_drop_FUN_00540920(CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position);
float core_stranger_cpp_FUN_00540970(void);
void __cdecl core_stranger_cpp_divideVectorByScalar_FUN_005409a0(CVector3f *vector,float *divisor);
float core_stranger_cpp_FUN_005409c0(float *param_1,float *param_2);
void __cdecl core_stranger_cpp_setMatrixTranslation_FUN_005409f0(CMatrix3x4f *matrix,CVector3f *translation);
void * __cdecl core_stranger_cpp_FUN_00540a10(void *ptr);
int __cdecl core_stranger_cpp_isProcessDisabled_FUN_00540a20(CDemonActor *actor);
int __cdecl core_stranger_cpp_getScaleY_FUN_00540a30(CDemonActor *actor);
void __cdecl core_stranger_cpp_setWindVelocity_FUN_00540a40(CCloth *cloth_ptr,CVector3f *velocity);
int __cdecl core_stranger_cpp_getCurrentMotionStateIndex_FUN_00540a70(CCharacter *this_ptr);
CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_00540a90(CStranger *this_ptr,uint flags);
void __cdecl core_succubus_cpp_staticInit_FUN_00540ae0(void);
CSuccubus * __cdecl core_succubus_cpp_factoryFuncSuccubus_FUN_00540b10(void);
CDemonActorType * __cdecl core_succubus_cpp_CSuccubus_getActorType_FUN_00540b30(CSuccubus *this_ptr);
CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_00540b40(CSuccubus *this_ptr);
void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_00540c20(CSuccubus *this_ptr);
void __cdecl core_succubus_cpp_CSuccubus_process_FUN_00540f50(CSuccubus *this_ptr,float delta_time);
int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_00541640(CSuccubus *this_ptr);
void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_005417c0(CSuccubus *this_ptr);
void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_00541810(CSuccubus *this_ptr,SDamageInfo *damage_info);
int __cdecl core_succubus_cpp_CSuccubus_getTargetPoints_FUN_00541830(CSuccubus *this_ptr,CVector3f *out_points_array);
ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_00541840(CSuccubus *this_ptr,SCollisionInfo *collision_info);
CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_00541860(CSuccubus *this_ptr,uint flags);
void __cdecl core_svetlana_cpp_staticInit_FUN_00541950(void);
CSvetlana * __cdecl core_svetlana_cpp_factoryFuncSvetlana_FUN_00541980(void);
CDemonActorType * __cdecl core_svetlana_cpp_CSvetlana_getActorType_FUN_005419a0(CSvetlana *this_ptr);
CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0(CSvetlana *this_ptr);
void __cdecl core_svetlana_cpp_CSvetlana_setup_FUN_00541a40(CSvetlana *this_ptr);
void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00541d00(CSvetlana *this_ptr,float delta_time);
void __cdecl core_svetlana_cpp_CSvetlana_FUN_005423c0(CSvetlana *this_ptr,float delta_time);
void __cdecl core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00542ad0(CSvetlana *this_ptr,float delta_time);
void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00542b70(CSvetlana *this_ptr,int bone_index);
void __cdecl core_svetlana_cpp_CSvetlana_archive_FUN_00542d10(CSvetlana *this_ptr);
int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00542d20(CSvetlana *this_ptr);
void __cdecl core_svetlana_cpp_CSvetlana_processDamage_FUN_00542e90(CSvetlana *this_ptr,SDamageInfo *damage_info);
int __cdecl core_svetlana_cpp_CSvetlana_getGrabbed_FUN_00543020(CSvetlana *this_ptr,CDemonActor *grabber,int grab_type);
int __cdecl core_svetlana_cpp_CSvetlana_isWeaponDrawn_FUN_00543030(CSvetlana *this_ptr);
void __cdecl core_svetlana_cpp_CSvetlana_drawWeapon_FUN_00543040(CSvetlana *this_ptr,int drawn);
CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00543050(CSvetlana *this_ptr,uint flags);
void __cdecl core_tbplayer_cpp_staticInit_FUN_005430d0(void);
CBassPlayer * __cdecl core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00543120(void);
CDemonActorType * __cdecl core_tbplayer_cpp_CBassPlayer_getActorType_FUN_00543140(CBassPlayer *this_ptr);
CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_00543150(CBassPlayer *this_ptr);
void __cdecl core_tbplayer_cpp_CBassPlayer_setup_FUN_00543180(CBassPlayer *this_ptr);
CVector3f * __cdecl core_tbplayer_cpp_setVector_FUN_005431f0(CVector3f *out,float x,float y,float z);
void __stack2_esi core_tbplayer_cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_00543210(CBassPlayer *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
void __cdecl core_tbplayer_cpp_CBassPlayer_processDamage_FUN_00543330(CBassPlayer *this_ptr,SDamageInfo *damage_info);
CDrummer * __cdecl core_tbplayer_cpp_factoryFuncDrummer_FUN_00543370(void);
CDemonActorType * __cdecl core_tbplayer_cpp_CDrummer_getActorType_FUN_00543390(CDrummer *this_ptr);
CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_005433a0(CDrummer *this_ptr);
void __cdecl core_tbplayer_cpp_CDrummer_setup_FUN_005433d0(CDrummer *this_ptr);
void __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_00543450(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
void __cdecl core_tbplayer_cpp_CDrummer_processDamage_FUN_005435f0(CDrummer *this_ptr,SDamageInfo *damage_info);
CDrummer * __cdecl core_tbplayer_cpp_CDrummer_dtor_FUN_00543620(CDrummer *this_ptr,uint flags);
CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_dtor_FUN_005436f0(CBassPlayer *this_ptr,uint flags);
void __cdecl core_teleport_cpp_staticInit_FUN_005437c0(void);
CTeleportDest * __cdecl core_teleport_cpp_factoryFuncTeleportDest_FUN_00543810(void);
CDemonActorType * __cdecl core_teleport_cpp_CTeleportDest_getActorType_FUN_00543830(CTeleportDest *this_ptr);
CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00543840(CTeleportDest *this_ptr);
CBoundingBox3D * __cdecl core_teleport_cpp_CTeleportDest_getBoundingBox_FUN_00543860(CTeleportDest *this_ptr,CBoundingBox3D *out_box);
ECollisionType __cdecl core_teleport_cpp_CTeleportDest_FUN_00543890(CDemonActor *this_ptr,SCollisionInfo *collision_info);
CTeleport * __cdecl core_teleport_cpp_factoryFuncTeleport_FUN_005438a0(void);
CDemonActorType * __cdecl core_teleport_cpp_CTeleport_getActorType_FUN_005438c0(CTeleport *this_ptr);
CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005438d0(CTeleport *this_ptr);
void __cdecl core_teleport_cpp_CTeleport_process_FUN_00543910(CTeleport *this_ptr,float delta_time);
CBoundingBox3D * __cdecl core_teleport_cpp_CTeleport_getBoundingBox_FUN_005439c0(CTeleport *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00543a20(CTeleport *this_ptr);
CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00543a60(CTeleport *this_ptr,uint flags);
CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00543ab0(CTeleportDest *this_ptr,uint flags);
void __cdecl core_tentacle_cpp_staticInit_FUN_00543b00(void);
CTentacle * __cdecl core_tentacle_cpp_factoryFuncTentacle_FUN_00543b30(void);
CDemonActorType * __cdecl core_tentacle_cpp_CTentacle_getActorType_FUN_00543b50(CTentacle *this_ptr);
CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_00543b60(CTentacle *this_ptr);
void __cdecl core_tentacle_cpp_CTentacle_setup_FUN_00543bc0(CTentacle *this_ptr);
void __cdecl core_tentacle_cpp_CTentacle_process_FUN_00543c50(CTentacle *this_ptr,float delta_time);
int __cdecl core_tentacle_cpp_CTentacle_renderOpaque_FUN_00544440(CTentacle *this_ptr);
void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00544470(CTentacle *this_ptr);
int __cdecl core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_005444f0(CTentacle *this_ptr,char *class_name);
int __cdecl core_tentacle_cpp_CTentacle_attractActorToward_FUN_005445c0(CTentacle *this_ptr,CCharacter *character);
int __cdecl core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720(CTentacle *this_ptr);
CMatrix3x4f * __stack_esi core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_00544760(CTentacle *this_ptr,CMatrix3x4f *out_matrix);
CTentacle * __cdecl core_tentacle_cpp_CTentacle_dtor_FUN_00544850(CTentacle *this_ptr,uint flags);
void __cdecl core_texlist_cpp_staticInit_FUN_00544910(void);
CTextureList * __cdecl core_texlist_cpp_CTextureList_ctor_FUN_00544930(CTextureList *this_ptr);
CTextureList * __cdecl core_texlist_cpp_CTextureList_dtor_FUN_00544940(CTextureList *this_ptr,uint flags);
void __cdecl core_texlist_cpp_CTextureList_load_FUN_00544950(CTextureList *this_ptr,char *filename);
void __cdecl core_texlist_cpp_CTextureList_save_FUN_00544c10(CTextureList *this_ptr,char *filename);
void __cdecl core_texlist_cpp_CTextureList_captureAllTextures_FUN_00544d70(CTextureList *this_ptr);
void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00544db0(CTextureList *this_ptr,uint texture_index);
CTextureCache * __cdecl engine_texture_cpp_CTextureCache_FUN_00544de0(CTextureCache *this_ptr,int max_texture_count);
int __cdecl engine_texture_cpp_CTextureCache_free_FUN_00544e30(CTextureCache *this_ptr);
void __cdecl engine_texture_cpp_CTextureCache_FUN_00544e50(CTextureCache *this_ptr);
void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_00544e60(CTextureCache *this_ptr);
int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00544ef0(CTextureCache *this_ptr,char *texture_name);
int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_00545390(CTextureCache *this_ptr,int hint_index,char *texture_name);
void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00545410(CTextureCache *this_ptr,int texture_index);
void __cdecl engine_texture_cpp_CTextureCache_FUN_00545700(CTextureCache *this_ptr);
int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_00545810(CTextureCache *this_ptr,char *output_buffer);
CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_005458a0(void);
void __cdecl engine_texture_cpp_freeTextureCache_FUN_005458d0(void);
SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic *texture);
SMRGLHeaderExtended * __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_005459d0(SMRGLTextureBasic *texture_info);
void __cdecl engine_texture_cpp_clearTextureCache_FUN_005459f0(void);
void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_00545a10(SMRGLTextureBasic *texture);
void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00545a40(SMRGLTextureBasic *texture,SRGBColorPalette *palette);
void __cdecl engine_texture_cpp_getTextureCacheStats_FUN_00545a80(char *output_buffer);
void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_00545aa0(void);
SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_00545ad0(void);
void __cdecl core_tommygun_cpp_staticInit_FUN_00545b30(void);
CTommyGun * __cdecl core_tommygun_cpp_factoryFuncTommyGun_FUN_00545b60(void);
CDemonActorType * __cdecl core_tommygun_cpp_CTommyGun_getActorType_FUN_00545b80(CTommyGun *this_ptr);
CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(CTommyGun *this_ptr);
int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_00545c30(CTommyGun *this_ptr);
float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_00546470(CTommyGun *this_ptr);
void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005464a0(CTommyGun *this_ptr,float delta_time);
void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00546740(CTommyGun *this_ptr,int weapon_state);
CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_00546770(CTommyGun *this_ptr,uint flags);
void __cdecl core_trap_cpp_staticInit_FUN_005467c0(void);
CTrap * __cdecl core_trap_cpp_factoryFuncTrap_FUN_005467f0(void);
CDemonActorType * __cdecl core_trap_cpp_CTrap_getActorType_FUN_00546810(CTrap *this_ptr);
CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_00546820(CTrap *this_ptr);
void __cdecl core_trap_cpp_CTrap_setup_FUN_00546870(CTrap *this_ptr);
int __cdecl core_trap_cpp_CTrap_canPickup_FUN_005468a0(CTrap *this_ptr,CDemonActor *picker);
ECollisionType __cdecl core_trap_cpp_CTrap_getCollisionType_FUN_005468b0(CTrap *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_trap_cpp_CTrap_pickup_FUN_005468d0(CTrap *this_ptr,CDemonActor *carrier);
void __cdecl core_trap_cpp_CTrap_onDropped_FUN_005468e0(CTrap *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_trap_cpp_CTrap_getCarrier_FUN_005468f0(CTrap *this_ptr);
void __cdecl core_trap_cpp_CTrap_process_FUN_00546900(CTrap *this_ptr,float delta_time);
int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_00546ab0(CTrap *this_ptr);
void __cdecl core_trap_cpp_CTrap_archive_FUN_00546b50(CTrap *this_ptr);
CBoundingBox3D * __cdecl core_trap_cpp_CTrap_getBoundingBox_FUN_00546b90(CTrap *this_ptr,CBoundingBox3D *out_box);
CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00546be0(CTrap *this_ptr,uint flags);
void __cdecl core_trash_cpp_staticInit_FUN_00546c30(void);
CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_00546c60(void);
CDemonActorType * __cdecl core_trash_cpp_CTrash_getActorType_FUN_00546c80(CTrash *this_ptr);
CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_00546c90(CTrash *this_ptr);
void __cdecl core_trash_cpp_CTrash_setup_FUN_00546ce0(CTrash *this_ptr);
void __cdecl core_trash_cpp_CTrash_archive_FUN_00546da0(CTrash *this_ptr);
void __cdecl core_trash_cpp_CTrash_process_FUN_00546e10(CTrash *this_ptr,float delta_time);
int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_00547670(CTrash *this_ptr);
CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_00547730(CTrash *this_ptr,CBoundingBox3D *out_box);
ECollisionType __cdecl core_trash_cpp_CTrash_getCollisionType_FUN_005477f0(CTrash *this_ptr,SCollisionInfo *collision_info);
CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_00547800(CTrash *this_ptr,uint flags);
void __cdecl core_trigger_cpp_staticInit_FUN_00547850(void);
CTrigger * __cdecl core_trigger_cpp_factoryFuncTrigger_FUN_00547880(void);
CDemonActorType * __cdecl core_trigger_cpp_CTrigger_getActorType_FUN_005478a0(CTrigger *this_ptr);
CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005478b0(CTrigger *this_ptr);
void __cdecl core_trigger_cpp_CTrigger_setup_FUN_00547a00(CTrigger *this_ptr);
void __cdecl core_trigger_cpp_CTrigger_process_FUN_00547b30(CTrigger *this_ptr,float delta_time);
int __cdecl core_trigger_cpp_CTrigger_renderTransparent_FUN_00548100(CTrigger *this_ptr);
CBoundingBox3D * __cdecl core_trigger_cpp_CTrigger_getBoundingBox_FUN_00548110(CTrigger *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_trigger_cpp_CTrigger_archive_FUN_00548170(CTrigger *this_ptr);
ECollisionType __cdecl core_trigger_cpp_CTrigger_getCollisionType_FUN_00548410(CTrigger *this_ptr,SCollisionInfo *collision_info);
float __cdecl core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_00548460(CTrigger *this_ptr,CDemonActor *querying_actor,CVector3f *query_position);
int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_00548500(CTrigger *this_ptr);
void __cdecl core_trigger_cpp_CTrigger_onLaserHit_FUN_00548530(CTrigger *this_ptr,SLaserInfo *laser_info);
void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(CTrigger *this_ptr);
int __cdecl core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(CTrigger *this_ptr,CDemonActor *actor);
void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(CTrigger *this_ptr,float hit_points);
void __cdecl core_trigger_cpp_CTrigger_calculateTestRadius_FUN_00548680(CTrigger *this_ptr);
int __cdecl core_trigger_cpp_CTrigger_getTargetPoints_FUN_00548710(CTrigger *this_ptr,CVector3f *out_points_array);
int __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(CTrigger *this_ptr,CDemonActor *actor);
CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_00548a50(CTrigger *this_ptr,uint flags);
void __cdecl support_trisock_cpp_staticInit_FUN_00548aa0(void);
uint * __cdecl support_trisock_cpp_copyIPAddress_FUN_00548ae0(uint *dest_ip,uint *src_ip);
uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_00548af0(uint *result_ptr,char *dotted_decimal_string);
uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_00548b40(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4);
void __cdecl support_trisock_cpp_formatIPAddress_FUN_00548bb0(char *output_buffer,uchar *ip_bytes);
int __cdecl support_trisock_cpp_parseIPComponents_FUN_00548bf0(uint *result_ptr,char *dotted_decimal_string);
int __cdecl support_trisock_cpp_buildIPAddress_FUN_00548c60(uint8_t *dest_ip,int octet1,int octet2,int octet3,int octet4);
void __cdecl support_trisock_cpp_extractIPOctets_FUN_00548cd0(uchar *ip_bytes,uint *octet1_ptr,uint *octet2_ptr,uint *octet3_ptr,uint *octet4_ptr);
uint __cdecl support_trisock_cpp_getIPAddress_FUN_00548d20(SNetworkAddr *net_addr);
void __cdecl support_trisock_cpp_createNetworkAddr_FUN_00548d30(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port);
SOCKADDR_IN * __cdecl support_trisock_cpp_convertSockAddr_FUN_00548d50(SNetworkAddr *dest_addr,SOCKADDR *src_addr);
SOCKADDR_IN * __stack_esi support_trisock_cpp_buildSockaddrIn_FUN_00548dc0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer);
void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00548e20(char *output_buffer,SNetworkAddr *network_addr);
int __cdecl support_trisock_cpp_shouldNeverBeCalled1_FUN_00548e70(int unknown1,int unknown2);
int __cdecl support_trisock_cpp_shouldNeverBeCalled2_FUN_00548ea0(int unknown1,int unknown2);
_SOCKET * __cdecl support_trisock_cpp_invalidateSocket_FUN_00548ed0(_SOCKET *socket_handle);
_SOCKET * __cdecl support_trisock_cpp_bindSocketWrapper_FUN_00548ee0(_SOCKET *socket_handle,int flags);
int __cdecl support_trisock_cpp_createSocket_FUN_00548f00(_SOCKET *socket_handle);
int __cdecl support_trisock_cpp_createUDPSocket_FUN_00548f30(_SOCKET *socket_handle);
int __cdecl support_trisock_cpp_isSocketValid_FUN_00548f60(_SOCKET *socket_handle);
int __cdecl support_trisock_cpp_bindSocket_FUN_00548f70(_SOCKET *socket_handle,uint16_t port);
int __cdecl support_trisock_cpp_connectSocket_FUN_00548fc0(_SOCKET *socket_handle,SNetworkAddr *dest_addr);
int __cdecl support_trisock_cpp_receiveSocketData_FUN_00549010(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr);
int __cdecl support_trisock_cpp_performSocketOperation_FUN_00549090(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *dest_addr);
int __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(_SOCKET *socket_handle);
int __cdecl support_trisock_cpp_listenSocket_FUN_00549150(_SOCKET *socket_handle);
int __cdecl support_trisock_cpp_acceptConnection_FUN_00549170(_SOCKET *listen_socket,SNetworkAddr *client_addr,_SOCKET *new_socket);
int __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(_SOCKET *socket_handle,SNetworkAddr *out_address);
int __cdecl support_trisock_cpp_setSocketBlocking_FUN_00549240(_SOCKET *socket_handle,int blocking_mode);
int __cdecl support_trisock_cpp_startupWinsock_FUN_00549280(void);
void __cdecl core_terrain_cpp_CTerrain_init_FUN_005492b0(CTerrain *this_ptr);
void __cdecl core_terrain_cpp_CTerrain_free_FUN_005492f0(CTerrain *this_ptr);
void __cdecl core_terrain_cpp_CTerrain_render_FUN_00549310(CTerrain *this_ptr,int render_pass);
void __cdecl core_terrain_cpp_CTerrain_process_FUN_00549410(CTerrain *this_ptr);
void __cdecl core_turret_cpp_staticInit_FUN_00549440(void);
CTurret * __cdecl core_turret_cpp_factoryFuncTurret_FUN_00549470(void);
CDemonActorType * __cdecl core_turret_cpp_CTurret_getActorType_FUN_00549490(CTurret *this_ptr);
CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005494a0(CTurret *this_ptr);
void __cdecl core_turret_cpp_CTurret_setup_FUN_005495f0(CTurret *this_ptr);
int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_005496d0(CTurret *this_ptr);
void __cdecl core_turret_cpp_CTurret_process_FUN_005497f0(CTurret *this_ptr,float delta_time);
CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_00549cd0(CTurret *this_ptr,CBoundingBox3D *out_box);
float __cdecl core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(CTurret *this_ptr,int model_index);
void __cdecl core_turret_cpp_CTurret_archive_FUN_0054a000(CTurret *this_ptr);
void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(CTurret *this_ptr,float delta_time);
int __cdecl core_turret_cpp_CTurret_aimAtTarget_FUN_0054a640(CTurret *this_ptr,CVector3f *target_pos,float delta_time);
void __cdecl core_turret_cpp_CTurret_getInteractionInfo_FUN_0054a800(CTurret *this_ptr,SInteractionInfo *interaction_info);
int __cdecl core_turret_cpp_CTurret_startInteraction_FUN_0054a870(CTurret *this_ptr,CDemonActor *user);
int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_0054a890(CTurret *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control);
void __cdecl core_turret_cpp_CTurret_stopUsing_FUN_0054a900(CTurret *this_ptr,CDemonActor *user);
void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_0054a920(CTurret *this_ptr,float delta_time);
float __cdecl core_turret_cpp_CTurret_getDamage_FUN_0054aab0(CTurret *this_ptr);
CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_0054aae0(CTurret *this_ptr,CVector3f *out_point);
int __cdecl core_turret_cpp_CTurret_fire_FUN_0054ab10(CTurret *this_ptr);
int __cdecl core_turret_cpp_CTurret_canPickup_FUN_0054b030(CTurret *this_ptr,CDemonActor *picker);
CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_0054b060(CTurret *this_ptr,uint flags);
void __cdecl core_tvbat_cpp_staticInit_FUN_0054b0b0(void);
CTVBat * __cdecl core_tvbat_cpp_factoryFuncTVBat_FUN_0054b0e0(void);
CDemonActorType * __cdecl core_tvbat_cpp_CTVBat_getActorType_FUN_0054b100(CTVBat *this_ptr);
float __cdecl core_tvbat_cpp_jitterValue_FUN_0054b110(float value);
CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_0054b140(CTVBat *this_ptr);
void __cdecl core_tvbat_cpp_CTVBat_setup_FUN_0054b2a0(CTVBat *this_ptr);
void __cdecl core_tvbat_cpp_CTVBat_archive_FUN_0054b310(CTVBat *this_ptr);
void __cdecl core_tvbat_cpp_CTVBat_process_FUN_0054b460(CTVBat *this_ptr,float delta_time);
void __cdecl core_tvbat_cpp_CTVBat_FUN_0054bfc0(CTVBat *this_ptr);
int __cdecl core_tvbat_cpp_CTVBat_renderOpaque_FUN_0054bfd0(CTVBat *this_ptr);
CBoundingBox3D * __cdecl core_tvbat_cpp_CTVBat_getBoundingBox_FUN_0054c040(CTVBat *this_ptr,CBoundingBox3D *out_box);
ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_0054c0c0(CTVBat *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_tvbat_cpp_CTVBat_getTargetPoints_FUN_0054c0e0(CTVBat *this_ptr,CVector3f *out_points_array);
EDeathState __cdecl core_tvbat_cpp_CTVBat_getDeathState_FUN_0054c0f0(CTVBat *this_ptr);
void __cdecl core_tvbat_cpp_CTVBat_processDamage_FUN_0054c120(CTVBat *this_ptr,SDamageInfo *damage_info);
CTVBat * __cdecl core_tvbat_cpp_CTVBat_dtor_FUN_0054c190(CTVBat *this_ptr,uint flags);
void __cdecl core_vampboss_cpp_staticInit_FUN_0054c250(void);
CVampireBoss * __cdecl core_vampboss_cpp_factoryFuncVampireBoss_FUN_0054c280(void);
CDemonActorType * __cdecl core_vampboss_cpp_CVampireBoss_getActorType_FUN_0054c2a0(CVampireBoss *this_ptr);
CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0(CVampireBoss *this_ptr);
void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_0054c3e0(CVampireBoss *this_ptr);
float __cdecl core_vampboss_cpp_clampAngle_FUN_0054c5f0(float angle,float max_angle);
void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_0054c690(CVampireBoss *this_ptr,float delta_time);
void __stack2_esi core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_0054d8a0(CVampireBoss *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
void __cdecl core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(CVampireBoss *this_ptr,float delta_time);
int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_0054dac0(CVampireBoss *this_ptr);
void __cdecl core_vampboss_cpp_CVampireBoss_archive_FUN_0054dc70(CVampireBoss *this_ptr);
void __cdecl core_vampboss_cpp_CVampireBoss_processDamage_FUN_0054dd50(CVampireBoss *this_ptr,SDamageInfo *damage_info);
EDeathState __cdecl core_vampboss_cpp_CVampireBoss_getDeathState_FUN_0054df90(CVampireBoss *this_ptr);
int __cdecl core_vampboss_cpp_CVampireBoss_getTargetPoints_FUN_0054dfa0(CVampireBoss *this_ptr,CVector3f *out_points_array);
void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(CVampireBoss *this_ptr);
void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(CVampireBoss *this_ptr);
void __cdecl core_vampboss_cpp_CVampireBoss_FUN_0054e130(CVampireBoss *this_ptr);
void __cdecl core_vampboss_cpp_CVampireBoss_transformToBat_FUN_0054e1a0(CVampireBoss *this_ptr);
void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_0054e1e0(CVampireBoss *this_ptr);
void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230(CVampireBoss *this_ptr);
ECollisionType __cdecl core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_0054e310(CVampireBoss *this_ptr,SCollisionInfo *collision_info);
CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_0054e370(CVampireBoss *this_ptr,uint flags);
void __cdecl core_vecdir_cpp_staticInit_FUN_0054e480(void);
CVector3f * __cdecl core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f *out_euler_angles,CVector3f *in_direction_vector);
void __cdecl core_vehicle_cpp_staticInit_FUN_0054e540(void);
CVehicle * __cdecl core_vehicle_cpp_factoryFuncVehicle_FUN_0054e570(void);
CDemonActorType * __cdecl core_vehicle_cpp_CVehicle_getActorType_FUN_0054e590(CVehicle *this_ptr);
CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_0054e5a0(CVehicle *this_ptr);
void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_0054e7f0(CVehicle *this_ptr);
void __cdecl core_vehicle_cpp_CVehicle_process_FUN_0054eae0(CVehicle *this_ptr,float delta_time);
CBoundingBox3D * __cdecl core_vehicle_cpp_CVehicle_getBoundingBox_FUN_0054f320(CVehicle *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_0054f370(CVehicle *this_ptr);
ECollisionType __cdecl core_vehicle_cpp_CVehicle_getCollisionType_FUN_0054f500(CVehicle *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_0054f510(CVehicle *this_ptr);
int __cdecl core_vehicle_cpp_CVehicle_renderTransparent_FUN_0054f780(CVehicle *this_ptr);
void __cdecl core_vehicle_cpp_CVehicle_renderBackground_FUN_0054f790(CVehicle *this_ptr,int layer_flag);
uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0(CVehicle *this_ptr,char *sound_name);
CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_0054f7f0(CVehicle *this_ptr,uint flags);
CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_0054f870(CTire *this_ptr);
CTire * __cdecl core_vehicle_cpp_CTire_dtor_FUN_0054f890(CTire *this_ptr,uint flags);
CTire * __cdecl core_vehicle_cpp_CTire_arrdtor4_FUN_0054f8a0(CTire *this_ptr,uint flags);
void __cdecl core_vessel_cpp_staticInit_FUN_0054f8c0(void);
CCryptVessel * __cdecl core_vessel_cpp_factoryFuncCryptVessel_FUN_0054f8f0(void);
CDemonActorType * __cdecl core_vessel_cpp_CCryptVessel_getActorType_FUN_0054f910(CCryptVessel *this_ptr);
CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_0054f920(CCryptVessel *this_ptr);
void __cdecl core_vessel_cpp_CCryptVessel_setup_FUN_0054fa80(CCryptVessel *this_ptr);
int __cdecl core_vessel_cpp_CCryptVessel_canPickup_FUN_0054fbc0(CCryptVessel *this_ptr,CDemonActor *picker);
void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_0054fc00(CCryptVessel *this_ptr,CDemonActor *carrier);
void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_0054fc10(CCryptVessel *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_vessel_cpp_CCryptVessel_getCarrier_FUN_0054fc30(CCryptVessel *this_ptr);
int __cdecl core_vessel_cpp_CCryptVessel_FUN_0054fc40(CCryptVessel *actor);
void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_0054fc60(CCryptVessel *this_ptr,float delta_time);

