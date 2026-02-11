#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CGun.h"
#include "types/classes/CHaystack.h"
#include "types/classes/CHealthItem.h"
#include "types/classes/CHero.h"
#include "types/classes/CHeroPlaceholder.h"
#include "types/classes/CHighPriestOfGardath.h"
#include "types/classes/CHiram.h"
#include "types/classes/CHostage.h"
#include "types/classes/CHotDemon.h"
#include "types/classes/CIcePick.h"
#include "types/classes/CImp.h"
#include "types/classes/CIni.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CInventory.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CLightGun.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CNPC.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWeapon.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SInventoryItemInfo.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4F0000
// =============================================================================

void __cdecl core_gun_cpp_staticInit_FUN_004f0280(void);
CGun * __cdecl core_gun_cpp_factoryFunc_FUN_004f02b0(void);
CDemonActorType * __cdecl core_gun_cpp_CGun_getActorType_FUN_004f02e0(CGun *this_ptr);
CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004f02f0(CGun *this_ptr);
int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr);
float __cdecl core_gun_cpp_CGun_getDamage_FUN_004f0b20(CGun *this_ptr);
CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004f0b50(CGun *this_ptr,uint flags);
void __cdecl core_haystack_cpp_staticInit_FUN_004f0ba0(void);
CHaystack * __cdecl core_haystack_cpp_factoryFunc_FUN_004f0bd0(void);
CDemonActorType * __cdecl core_haystack_cpp_CHaystack_getActorType_FUN_004f0c00(CHaystack *this_ptr);
CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004f0c10(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_setup_FUN_004f0c80(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_process_FUN_004f0e40(CHaystack *this_ptr,float delta_time);
void __cdecl core_haystack_cpp_CHaystack_FUN_004f13f0(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_FUN_004f1970(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_FUN_004f1ab0(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_archive_FUN_004f1b50(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_renderOpaque_FUN_004f1b60(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004f1b70(CHaystack *this_ptr,SDamageInfo *damage_info);
int __cdecl core_haystack_cpp_CHaystack_areGunsDrawn_FUN_004f1c90(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_drawGun_FUN_004f1ca0(CHaystack *this_ptr,int drawn);
void __cdecl core_haystack_cpp_CHaystack_onActorDeleted_FUN_004f1cb0 (CHaystack *this_ptr,CDemonActor *deleted_actor);
void __cdecl core_haystack_cpp_CHaystack_getPropertyList_FUN_004f1cd0 (CHaystack *this_ptr,CActorPropertyList *property_list);
void __cdecl core_haystack_cpp_CHaystack_addFilesToExtract_FUN_004f1cf0(CHaystack *this_ptr,_FILE *file_handle);
CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004f1d10(CHaystack *this_ptr,uint flags);
void __cdecl core_health_cpp_staticInit_FUN_004f1d60(void);
CHealthItem * __cdecl core_health_cpp_factoryFunc_FUN_004f1d90(void);
CDemonActorType * __cdecl core_health_cpp_CHealthItem_getActorType_FUN_004f1dc0(CHealthItem *this_ptr);
CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004f1dd0(CHealthItem *this_ptr);
void __cdecl core_health_cpp_CHealthItem_setup_FUN_004f1e30(CHealthItem *this_ptr);
void __cdecl core_health_cpp_CHealthItem_process_FUN_004f1e50(CHealthItem *this_ptr,float delta_time);
int __cdecl core_health_cpp_CHealthItem_renderOpaque_FUN_004f1e60(CHealthItem *this_ptr);
CBoundingBox3D * __cdecl core_health_cpp_CHealthItem_getBoundingBox_FUN_004f1ed0 (CHealthItem *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_health_cpp_CHealthItem_archive_FUN_004f1f20(CHealthItem *this_ptr);
int __cdecl core_health_cpp_CHealthItem_hasCollision_FUN_004f1fa0 (CHealthItem *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004f1fb0(CHealthItem *this_ptr,CDemonActor *picker);
int __cdecl core_health_cpp_CHealthItem_FUN_004f1fd0(CHealthItem *this_ptr);
void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004f2020(CHealthItem *this_ptr,CDemonActor *owner);
void __cdecl core_health_cpp_CHealthItem_getPropertyList_FUN_004f2040 (CHealthItem *this_ptr,CActorPropertyList *property_list);
void __cdecl core_health_cpp_CHealthItem_addFilesToExtract_FUN_004f20b0(CHealthItem *this_ptr,_FILE *file_handle);
CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004f20d0(CHealthItem *this_ptr,uint flags);
void __cdecl core_hero_cpp_staticInit_FUN_004f2120(void);
int __cdecl core_hero_cpp_closestHeroToPoint_FUN_004f2170(CLocation *location);
int __cdecl core_hero_cpp_FUN_004f2220(void);
int __cdecl core_hero_cpp_FUN_004f22a0(void);
CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004f2340(CHero *this_ptr);
CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004f2470(CHero *this_ptr,uint flags);
void __cdecl core_hero_cpp_CHero_setup_FUN_004f2540(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580 (CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance);
int __cdecl core_hero_cpp_CHero_testLineIntersection_FUN_004f25c0 (CHero *this_ptr,CVector3f *line_start,CVector3f *line_end, CVector3f *out_intersection_point);
void __cdecl core_hero_cpp_CHero_archive_FUN_004f2610(CHero *this_ptr);
CPathMap * __cdecl core_hero_cpp_CHero_getPathMap_FUN_004f2870(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004f2880(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004f2890(CHero *this_ptr,CDemonActor *grabber,int grab_type);
int __cdecl core_hero_cpp_CHero_canWalk_FUN_004f28a0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004f28d0(CHero *this_ptr,CDemonActor *grabber,int grab_type);
void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004f29b0(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_createDefaultGun_FUN_004f2a30(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f2af0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f2c40(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f2d70(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f2ed0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f2f50(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f30f0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f3120(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f3350(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f33b0(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f3580(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f35b0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004f3760(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_canLookAt_FUN_004f37d0(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f3890(CHero *this_ptr,int hand_index);
void __cdecl core_hero_cpp_CHero_FUN_004f38d0(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f3910(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_FUN_004f3930(CHero *this_ptr);
float __cdecl core_hero_cpp_CHero_FUN_004f3960(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_kill_FUN_004f3af0 (CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force);
void __cdecl core_hero_cpp_CHero_reset_FUN_004f3b20(CHero *this_ptr);
CHeroPlaceholder * __cdecl core_hero_cpp_factoryFunc_FUN_004f3bc0(void);
CDemonActorType * __cdecl core_hero_cpp_CHeroPlaceholder_getActorType_FUN_004f3bf0(CHeroPlaceholder *this_ptr);
CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004f3c00(CHeroPlaceholder *this_ptr);
CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004f3c30(CHeroPlaceholder *this_ptr,uint flags);
int __cdecl core_hero_cpp_CHeroPlaceholder_renderTransparent_FUN_004f3c90(CHeroPlaceholder *this_ptr);
CBoundingBox3D * __cdecl core_hero_cpp_CHeroPlaceholder_getBoundingBox_FUN_004f3d20 (CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box);
CDemonActor * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder *this_ptr,int param_2);
void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004f3ef0(CHeroPlaceholder *this_ptr);
void __cdecl core_hero_cpp_CHero_getPropertyList_FUN_004f3f20(CHero *this_ptr,CActorPropertyList *property_list);
void __cdecl core_hero_cpp_CHeroPlaceholder_getPropertyList_FUN_004f3f60 (CHeroPlaceholder *this_ptr,CActorPropertyList *property_list);
void __cdecl core_hero_cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero *this_ptr,_FILE *file_handle);
ulonglong __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004f3ff0(void);
ulonglong __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004f4140(void);
void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0(void);
void __cdecl core_hiram_cpp_staticInit_FUN_004f4380(void);
CHiram * __cdecl core_hiram_cpp_getFactoryFunc_FUN_004f43b0(void);
CDemonActorType * __cdecl core_hiram_cpp_CHiram_getActorType_FUN_004f43e0(CHiram *this_ptr);
CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004f43f0(CHiram *this_ptr);
CHiram * __cdecl core_hiram_cpp_CHiram_dtor_FUN_004f4450(CHiram *this_ptr,uint flags);
void __cdecl core_hiram_cpp_CHiram_setup_FUN_004f4530(CHiram *this_ptr);
void __cdecl core_hiram_cpp_CHiram_process_FUN_004f4550(CHiram *this_ptr,float delta_time);
void __cdecl core_hiram_cpp_CHiram_archive_FUN_004f4690(CHiram *this_ptr);
void __cdecl core_hiram_cpp_CHiram_getPropertyList_FUN_004f46a0 (CHiram *this_ptr,CActorPropertyList *property_list);
void __cdecl core_hiram_cpp_CHiram_addFilesToExtract_FUN_004f46e0(CHiram *this_ptr,_FILE *file_handle);
CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_004f4700(CNPC *this_ptr,uint flags);
void __cdecl core_hostage_cpp_staticInit_FUN_004f47d0(void);
CHostage * __cdecl core_hostage_cpp_factoryFunc_FUN_004f4800(void);
CDemonActorType * __cdecl core_hostage_cpp_CHostage_getActorType_FUN_004f4830(CHostage *this_ptr);
CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004f4840(CHostage *this_ptr);
void __cdecl core_hostage_cpp_CHostage_setup_FUN_004f4970(CHostage *this_ptr);
int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004f4b40(CHostage *this_ptr);
void __cdecl core_hostage_cpp_CHostage_process_FUN_004f4bd0(CHostage *this_ptr,float delta_time);
int __cdecl core_hostage_cpp_CHostage_FUN_004f5ff0(CHostage *this_ptr,float delta_time);
void __cdecl core_hostage_cpp_CHostage_renderBackground_FUN_004f6120(CHostage *this_ptr,int layer_flag);
void __cdecl core_hostage_cpp_CHostage_archive_FUN_004f6170(CHostage *this_ptr);
int __cdecl core_hostage_cpp_CHostage_isGrabbable_FUN_004f6390(CHostage *this_ptr);
int __cdecl core_hostage_cpp_CHostage_canBeGrabbed_FUN_004f63d0 (CHostage *this_ptr,CDemonActor *grabber,int grab_type);
int __cdecl core_hostage_cpp_CHostage_getGrabbed_FUN_004f63e0 (CHostage *this_ptr,CDemonActor *grabber,int grab_type);
void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004f6450(CHostage *this_ptr,SDamageInfo *damage_info);
void __cdecl core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004f6550 (CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
void __cdecl core_hostage_cpp_CHostage_getPropertyList_FUN_004f69c0 (CHostage *this_ptr,CActorPropertyList *property_list);
void __cdecl core_hostage_cpp_CHostage_addFilesToExtract_FUN_004f6b30(CHostage *this_ptr,_FILE *file_handle);
CHostage * __cdecl core_hostage_cpp_CHostage_dtor_FUN_004f6b60(CHostage *this_ptr,uint flags);
void __cdecl core_hotdemon_cpp_staticInit_FUN_004f6c30(void);
CHotDemon * __cdecl core_hotdemon_cpp_factoryFunc_FUN_004f6c60(void);
CDemonActorType * __cdecl core_hotdemon_cpp_CHotDemon_getActorType_FUN_004f6c90(CHotDemon *this_ptr);
CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon *this_ptr);
void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004f6d00(CHotDemon *this_ptr);
void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004f6f20(CHotDemon *this_ptr,float delta_time);
int __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004f7680(CHotDemon *this_ptr);
void __cdecl core_hotdemon_cpp_CHotDemon_archive_FUN_004f76c0(CHotDemon *this_ptr);
void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004f7720(CHotDemon *this_ptr,SDamageInfo *damage_info);
int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004f78f0 (CHotDemon *this_ptr,CVector3f *out_points_array);
void __cdecl core_hotdemon_cpp_CHotDemon_hasCollision_FUN_004f79b0 (CHotDemon *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_hotdemon_cpp_CHotDemon_getPropertyList_FUN_004f79d0 (CHotDemon *this_ptr,CActorPropertyList *property_list);
void __cdecl core_hotdemon_cpp_CHotDemon_addFilesToExtract_FUN_004f7a10(CHotDemon *this_ptr,_FILE *file_handle);
CDemonActor * __cdecl core_hotdemon_cpp_CHotDemon_dtor_FUN_004f7a40(CHotDemon *this_ptr,uint flags);
void __cdecl core_hpriest_cpp_staticInit_FUN_004f7b00(void);
CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFunc_FUN_004f7b30(void);
CDemonActorType * __cdecl core_hpriest_cpp_CHighPriestOfGardath_getActorType_FUN_004f7b60(CHighPriestOfGardath *this_ptr);
CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f7b70(CHighPriestOfGardath *this_ptr);
void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004f7bd0(CHighPriestOfGardath *this_ptr);
void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004f7c00 (CHighPriestOfGardath *this_ptr,float delta_time);
void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004f7c50 (CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info);
void __cdecl core_hpriest_cpp_CHighPriestOfGardath_getPropertyList_FUN_004f7c70 (CHighPriestOfGardath *this_ptr,CActorPropertyList *property_list);
CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004f7cb0(CHighPriestOfGardath *this_ptr,uint flags);
void __cdecl core_icepick_cpp_staticInit_FUN_004f7d80(void);
CIcePick * __cdecl core_icepick_cpp_factoryFunc_FUN_004f7db0(void);
CDemonActorType * __cdecl core_icepick_cpp_CIcePick_getActorType_FUN_004f7de0(CIcePick *this_ptr);
CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f7df0(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004f7e80(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time);
void __cdecl core_icepick_cpp_CIcePick_FUN_004f8810(CIcePick *this_ptr);
int __cdecl core_icepick_cpp_CIcePick_FUN_004f8970(CIcePick *this_ptr);
int __cdecl core_icepick_cpp_CIcePick_FUN_004f8ad0(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_FUN_004f8b00(void);
void __stack2_esi core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004f8b20 (CIcePick *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
void __cdecl core_icepick_cpp_CIcePick_FUN_004f8c70(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_FUN_004f93a0(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_FUN_004f9490(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_archive_FUN_004f9590(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_renderOpaque_FUN_004f95a0(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_processDamage_FUN_004f95b0(CIcePick *this_ptr,SDamageInfo *damage_info);
int __cdecl core_icepick_cpp_CIcePick_areGunsDrawn_FUN_004f9760(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_drawGuns_FUN_004f9770(CIcePick *this_ptr,int drawn);
void __cdecl core_icepick_cpp_CIcePick_onActorDeleted_FUN_004f9780(CIcePick *this_ptr,CDemonActor *deleted_actor);
void __cdecl core_icepick_cpp_CIcePick_getPropertyList_FUN_004f97a0 (CIcePick *this_ptr,CActorPropertyList *property_list);
void __cdecl core_icepick_cpp_CIcePick_addFilesToExtract_FUN_004f97c0(CIcePick *this_ptr,_FILE *file_handle);
CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004f97e0(CIcePick *this_ptr,uint flags);
void __cdecl core_imp_cpp_staticInit_FUN_004f9830(void);
CImp * __cdecl core_imp_cpp_factoryFunc_FUN_004f9860(void);
CDemonActorType * __cdecl core_imp_cpp_CImp_getActorType_FUN_004f9890(CImp *this_ptr);
CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004f98a0(CImp *this_ptr);
void __cdecl core_imp_cpp_CImp_setup_FUN_004f9910(CImp *this_ptr);
void __cdecl core_imp_cpp_CImp_process_FUN_004f9c30(CImp *this_ptr,float delta_time);
void __cdecl core_imp_cpp_FUN_004fa900(void);
void __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004fa920 (CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
int __cdecl core_imp_cpp_CImp_attractActorToward_FUN_004faaf0 (CImp *this_ptr,CDemonActor *actor,CVector3f *target_local_point);
void __cdecl core_imp_cpp_CImp_archive_FUN_004fab00(CImp *this_ptr);
void __cdecl core_imp_cpp_CImp_FUN_004fab60(CImp *this_ptr);
void __cdecl core_imp_cpp_CImp_processDamage_FUN_004fae00(CImp *this_ptr,SDamageInfo *damage_info);
int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004faf40(CImp *this_ptr,CVector3f *out_points_array);
void __cdecl core_imp_cpp_CImp_hasCollision_FUN_004fb0f0(CImp *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_imp_cpp_CImp_getPropertyList_FUN_004fb110(CImp *this_ptr,CActorPropertyList *property_list);
void __cdecl core_imp_cpp_CImp_addFilesToExtract_FUN_004fb150(CImp *this_ptr,_FILE *file_handle);
CImp * __cdecl core_imp_cpp_CImp_dtor_FUN_004fb180(CImp *this_ptr,uint flags);
void __cdecl engine_ini_cpp_staticInit_FUN_004fb240(void);
int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004fb250 (CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer, int buffer_size,char *filename);
int __cdecl engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470 (CIni *this_ptr,char *section,char *key,char *value,char *filename);
int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004fb660 (CIni *this_ptr,char *section,char *key,char *value,char *filename);
void __cdecl engine_ini_cpp_getProfileString_FUN_004fb960 (char *section,char *key,char *default_value,char *output_buffer,int buffer_size, char *filename);
int __cdecl engine_ini_cpp_getProfileInteger_FUN_004fb9a0 (char *section,char *key,char *default_value,char *filename);
void __cdecl engine_ini_cpp_writeProfileString_FUN_004fba40(char *section,char *key,char *value,char *filename);
CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004fba70(CIniFile *this_ptr,char *filename,int read_mode);
void __cdecl engine_ini_cpp_CIniFile_init_FUN_004fbaa0(char *dest,char *source);
void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile *this_ptr,char *section);
void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004fbb20 (CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size,char *default_value);
void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(CIniFile *this_ptr,char *key,char *value);
void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile *this_ptr,char *key_name,int *value_ptr);
void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile *this_ptr,char *key,int value);
void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile *this_ptr,char *key,float *output);
void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(CIniFile *this_ptr,char *key,float value);
CIni * __cdecl engine_ini_cpp_CIni_ctor_FUN_004fbd70(CIni *this_ptr);
CIni * __cdecl engine_ini_cpp_CIni_dtor_FUN_004fbd80(CIni *this_ptr);
void __cdecl core_inivar_cpp_readIniData_FUN_004fbd90(void);
void __cdecl core_inivar_cpp_writeIniData_FUN_004fc510(void);
void __cdecl core_inv_cpp_staticInit_FUN_004fcc30(void);
CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004fcda0(CDemonActor *actor_ptr);
char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004fcf00(CDemonActor *actor_ptr);
char * __cdecl core_inv_cpp_getItemIconName_FUN_004fcf70(CDemonActor *actor_ptr);
int __cdecl core_inv_cpp_loadItem_FUN_004fcfe0(SInventoryItemInfo *item_info,_FILE *file_handle);
CInventory * __cdecl core_inv_cpp_CInventory_ctor_FUN_004fd020(CInventory *this_ptr);
CInventory * __cdecl core_inv_cpp_CInventory_dtor_FUN_004fd0c0(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_clear_FUN_004fd0e0(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_initialize_FUN_004fd190(CInventory *this_ptr);
void __cdecl core_inv_cpp_loadAssets_FUN_004fd220(void);
void __cdecl core_inv_cpp_freeInventory_FUN_004fd510(void);
void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004fd5d0(CDemonActor *actor_ptr);
int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600 (CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message);
void __cdecl core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004fe900(CInventory *this_ptr,CWeapon *weapon);
CDemonActor * __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory *this_ptr,char *item_name);
int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004fe9d0(CInventory *this_ptr,char *class_name);
void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004fea70 (CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor);
void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004feb10 (CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction);
void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004fec10(CInventory *this_ptr,int direction);
void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory *this_ptr,int direction);
void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004fee00 (CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size, int rotation_y,int alpha);
void __cdecl core_inv_cpp_CInventory_save_FUN_004ff210(CInventory *this_ptr,_FILE *file_handle);
void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(CInventory *this_ptr,_FILE *file_handle);
void __cdecl core_inv_cpp_CInventory_load_FUN_004ff400(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004ff740(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_setupItems_FUN_004ff780(CInventory *this_ptr);
int __cdecl core_inv_cpp_CInventory_select_FUN_004ff800(CInventory *this_ptr,CDemonActor *actor_ptr);
CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(CInventory *this_ptr);
float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0 (CInventory *inventory_ptr,float max_charge);
void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory *this_ptr);
int __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70 (CInventory *this_ptr,CDemonActor *weapon_actor,int weapon_category);
void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory *this_ptr,int reset_both);
void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(CInventory *this_ptr);

