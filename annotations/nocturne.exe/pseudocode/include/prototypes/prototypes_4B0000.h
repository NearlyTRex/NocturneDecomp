#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBloodPool.h"
#include "types/classes/CBloodSplat.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CGore.h"
#include "types/classes/CGrave.h"
#include "types/classes/CGround.h"
#include "types/classes/CHealthItem.h"
#include "types/classes/CHero.h"
#include "types/classes/CHeroPlaceholder.h"
#include "types/classes/CHostage.h"
#include "types/classes/CHotDemon.h"
#include "types/classes/CImp.h"
#include "types/classes/CIni.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CInventory.h"
#include "types/classes/CLocation.h"
#include "types/classes/CNPC.h"
#include "types/classes/CParticle.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWeapon.h"
#include "types/enums/EGroundType.h"
#include "types/enums/EHeroType.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SInventoryItemInfo.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4B0000
// =============================================================================

void __cdecl core_gore_cpp_CGore_process_FUN_004b0030(CGore *this_ptr);
void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type);
CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004b0140(CGore *this_ptr);
void __cdecl core_gore_cpp_CGore_createGroundBloodSplat_FUN_004b0190(CGore *this_ptr,CVector3f *position,int blood_type);
void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004b01c0(CGore *this_ptr,CVector3f *position,CVector3f *normal,int blood_type);
void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore *this_ptr,CVector3f *position,CVector3f *direction,int count,int blood_type);
CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004b0430(CGore *this_ptr);
void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004b0480(CGore *this_ptr,CVector3f *position,int blood_type);
void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004b04b0(CGore *this_ptr);
CDemonActor * core_gore_cpp_CGore_spawnFlies_FUN_004b0580(undefined4 param_1,float *param_2,undefined4 param_3,float param_4,CDemonActor *param_5);
void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size);
void core_gore_cpp_CGore_createFootstep_FUN_004b06b0(undefined4 param_1,CVector3f *param_2,UOrientationVector *param_3,int param_4,int param_5,int param_6);
int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730(CGore *this_ptr,CVector3f *position,int *out_blood_type);
int __cdecl core_gore_cpp_CGore_load_FUN_004b0820(CGore *this_ptr,_FILE *file_handle);
int __cdecl core_gore_cpp_CGore_save_FUN_004b08d0(CGore *this_ptr,_FILE *file_handle);
int core_gore_cpp_CFootstep_ctor_FUN_004b09b0(int param_1);
float * core_gore_cpp_CFootstep_dtor_FUN_004b09d0(int param_1);
undefined4 core_gore_cpp_FUN_004b09f0(undefined4 param_1);
undefined4 core_gore_cpp_FUN_004b0a00(undefined4 param_1);
undefined4 core_gore_cpp_FUN_004b0a10(undefined4 param_1);
undefined4 core_gore_cpp_FUN_004b0a20(undefined4 param_1);
void core_gore_cpp_FUN_004b0a30(CParticle *param_1);
void core_gore_cpp_FUN_004b0a50(CParticle *param_1);
void core_gore_cpp_FUN_004b0a60(void *param_1);
void core_gore_cpp_FUN_004b0a80(void *param_1);
void core_gore_cpp_FUN_004b0aa0(void *param_1);
void core_gore_cpp_FUN_004b0ac0(void *param_1);
void __cdecl core_grave_cpp_staticInit_FUN_004b0ae0(void);
void core_grave_cpp_FUN_004b0b10(void);
CDemonActorType * core_grave_cpp_FUN_004b0b30(void);
CGrave * __cdecl core_grave_cpp_CGrave_ctor_FUN_004b0b40(CGrave *this_ptr);
void core_grave_cpp_FUN_004b0bd0(CDemonActor *param_1);
void core_grave_cpp_CGrave_process_FUN_004b0bf0(CGrave *param_1,float param_2);
int core_grave_cpp_FUN_004b0cb0(CDemonActor *param_1);
void core_grave_cpp_FUN_004b0d40(CDemonActor *param_1,int param_2);
void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(CGrave *this_ptr);
void core_grave_cpp_CGrave_archive_FUN_004b0e20(CDemonActor *param_1);
int * core_grave_cpp_CGrave_getBoundingBox_FUN_004b0f20(int param_1,int *param_2);
undefined4 core_grave_cpp_FUN_004b1000(void);
CDemonActor * core_grave_cpp_FUN_004b1010(CDemonActor *param_1,byte param_2);
void __cdecl core_ground_cpp_staticInit_FUN_004b1060(void);
_FILE * core_ground_cpp_openFileWithExtension_FUN_004b1090(char *param_1,char *param_2,char *param_3,char *param_4);
char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004b11b0(EGroundType type);
undefined4 core_ground_cpp_getGroundTypeColor_FUN_004b12f0(undefined4 param_1);
CGround * __cdecl core_ground_cpp_CGround_ctor_FUN_004b1350(CGround *this_ptr,int width,int height);
CGround * core_ground_cpp_FUN_004b13b0(CGround *param_1);
void __cdecl core_ground_cpp_CGround_init_FUN_004b13d0(CGround *this_ptr);
void __cdecl core_ground_cpp_CGround_free_FUN_004b1470(CGround *this_ptr);
void __cdecl core_ground_cpp_CGround_load_FUN_004b14d0(CGround *this_ptr,char *filename);
int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004b1800(CGround *this_ptr,int column,int row);
void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004b1820(CGround *this_ptr,int column,int row);
void __cdecl core_ground_cpp_CGround_transformAndStoreVertices_FUN_004b1910(CGround *this_ptr);
void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(CGround *this_ptr,int column,int row);
void __cdecl core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(CGround *this_ptr,SMRGLHeaderPrimitive *primitive);
void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004b1e10(CGround *this_ptr,int world_column,int world_row);
void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004b1ff0(CGround *this_ptr);
void __cdecl core_ground_cpp_CGround_render_FUN_004b2110(CGround *this_ptr);
int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004b21b0(CGround *this_ptr,int world_x,int world_z);
void core_ground_cpp_CGround_getNormalAtPosition_FUN_004b2430(int *param_1,uint param_2,uint param_3);
void __cdecl core_gun_cpp_staticInit_FUN_004b2700(void);
void core_gun_cpp_FUN_004b2730(void);
CDemonActorType * core_gun_cpp_FUN_004b2750(void);
CWeapon * core_gun_cpp_FUN_004b2760(CWeapon *param_1);
undefined4 core_gun_cpp_FUN_004b27c0(CWeapon *param_1);
undefined4 core_gun_cpp_FUN_004b2fc0(void);
CWeapon * core_gun_cpp_FUN_004b2ff0(CWeapon *param_1,byte param_2);
void __cdecl core_haystack_cpp_staticInit_FUN_004b3040(void);
void core_haystack_cpp_FUN_004b3070(void);
CDemonActorType * core_haystack_cpp_FUN_004b3090(void);
int core_haystack_cpp_FUN_004b30a0(undefined4 param_1);
void core_haystack_cpp_FUN_004b3110(int param_1);
void core_haystack_cpp_FUN_004b32d0(CHero *param_1,float param_2);
void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004b3880(int param_1,float param_2);
void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004b3e00(CCharacter *param_1,float param_2);
void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004b3f40(CCharacter *param_1,int param_2);
void core_haystack_cpp_FUN_004b3fe0(undefined4 param_1);
void core_haystack_cpp_FUN_004b3ff0(CCharacter *param_1);
void core_haystack_cpp_CHaystack_processDamage_FUN_004b4000(CCharacter *param_1,SDamageInfo *param_2);
undefined4 core_haystack_cpp_FUN_004b4120(int param_1);
void core_haystack_cpp_FUN_004b4130(int param_1,undefined4 param_2);
CHero * core_haystack_cpp_FUN_004b4140(CHero *param_1,byte param_2);
void __cdecl core_health_cpp_staticInit_FUN_004b4190(void);
void core_health_cpp_FUN_004b41c0(void);
CDemonActorType * core_health_cpp_FUN_004b41e0(void);
int * core_health_cpp_FUN_004b41f0(undefined4 param_1);
void core_health_cpp_FUN_004b4250(CDemonActor *param_1);
void core_health_cpp_FUN_004b4270(void);
int core_health_cpp_FUN_004b4280(CDemonActor *param_1);
undefined4 * core_health_cpp_FUN_004b42f0(int param_1,undefined4 *param_2);
void core_health_cpp_CHealthItem_archive_FUN_004b4340(CDemonActor *param_1);
undefined4 core_health_cpp_FUN_004b43c0(void);
undefined4 core_health_cpp_FUN_004b43d0(undefined4 param_1,CDemonActor *param_2);
int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004b43f0(CHealthItem *this_ptr,CCharacter *user);
void core_health_cpp_FUN_004b4440(undefined4 param_1,undefined4 param_2);
CDemonActor * core_health_cpp_FUN_004b4460(CDemonActor *param_1,byte param_2);
void __cdecl core_hero_cpp_staticInit_FUN_004b44b0(void);
CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004b4500(CLocation *location);
int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(CVector3f *point,float radius);
int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004b4630(CVector3f *point,float horizontal_radius,float vertical_tolerance);
CDemonActor * core_hero_cpp_FUN_004b46d0(CCharacter *param_1);
CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004b4800(CHero *this_ptr,uint flags);
void core_hero_cpp_FUN_004b48d0(CCharacter *param_1);
int core_hero_cpp_CHero_testCylinderCollision_FUN_004b4910(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3);
undefined4 core_hero_cpp_FUN_004b4950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void core_hero_cpp_FUN_004b49a0(CCharacter *param_1);
int core_hero_cpp_FUN_004b4c00(int param_1);
undefined4 core_hero_cpp_FUN_004b4c10(void);
undefined4 core_hero_cpp_FUN_004b4c20(int param_1,undefined4 param_2,int param_3);
undefined4 core_hero_cpp_FUN_004b4c30(void);
undefined4 core_hero_cpp_FUN_004b4c60(void);
int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004b4c70(CHero *this_ptr,CDemonActor *grabber,int grab_type);
void core_hero_cpp_CHero_releaseFromGrab_FUN_004b4d50(CCharacter *param_1);
void core_hero_cpp_CHero_createDefaultWeapon_FUN_004b4dd0(int param_1);
int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004b4e90(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(CHero *this_ptr);
int core_hero_cpp_FUN_004b5110(CDemonActor *param_1);
int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryPushNearbyBox_FUN_004b54c0(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004b5750(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004b5950(CHero *this_ptr);
int core_hero_cpp_FUN_004b5b00(CHero *param_1);
undefined4 core_hero_cpp_CHero_canLookAt_FUN_004b5b70(int param_1);
void __cdecl core_hero_cpp_CHero_executeObjectPickup_FUN_004b5c30(CHero *this_ptr,int hand_index);
void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(CHero *this_ptr,int hand_index);
void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004b5cb0(CHero *this_ptr,uint key_mask);
void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004b5cd0(CHero *this_ptr,int ai_task);
CCharacter * core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(int param_1,float *param_2);
void core_hero_cpp_CHero_kill_FUN_004b5e90(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4);
void core_hero_cpp_CHero_reset_FUN_004b5ec0(int param_1);
void core_hero_cpp_FUN_004b5f60(void);
CDemonActorType * core_hero_cpp_FUN_004b5f80(void);
CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(CHeroPlaceholder *this_ptr);
CDemonActor * core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0(CDemonActor *param_1,byte param_2);
void core_hero_cpp_CHeroPlaceholder_getBoundingBox_FUN_004b6020(undefined4 param_1,undefined4 *param_2);
CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004b6080(CHeroPlaceholder *this_ptr,EHeroType hero_type);
void core_hero_cpp_FUN_004b61f0(CDemonActor *param_1);
undefined8 wincore_wddvmem_cpp_initializeColorMasks_FUN_004b6220(void);
undefined8 wincore_wddvmem_cpp_populateColorTable_FUN_004b6370(void);
void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0(void);
void __cdecl core_hiram_cpp_staticInit_FUN_004b65b0(void);
void core_hiram_cpp_FUN_004b65e0(void);
CDemonActorType * core_hiram_cpp_FUN_004b6600(void);
int core_hiram_cpp_FUN_004b6610(undefined4 param_1);
CDemonActor * core_hiram_cpp_CHiram_dtor_FUN_004b6670(CDemonActor *param_1,byte param_2);
void core_hiram_cpp_FUN_004b6750(CNPC *param_1);
void core_hiram_cpp_CHiram_process_FUN_004b6770(CCharacter *param_1,float param_2);
void core_hiram_cpp_FUN_004b68b0(undefined4 param_1);
CDemonActor * core_npc_cpp_CNPC_dtor_FUN_004b68c0(CDemonActor *param_1,byte param_2);
void __cdecl core_hostage_cpp_staticInit_FUN_004b6990(void);
void core_hostage_cpp_FUN_004b69c0(void);
CDemonActorType * core_hostage_cpp_FUN_004b69e0(void);
CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004b69f0(CHostage *this_ptr);
void core_hostage_cpp_CHostage_setup_FUN_004b6b20(CNPC *param_1);
int core_hostage_cpp_CHostage_renderOpaque_FUN_004b6cf0(CCharacter *param_1);
void core_hostage_cpp_FUN_004b6d80(CHostage *param_1,float param_2);
int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(CHostage *this_ptr,float delta_time);
void core_hostage_cpp_CHostage_renderBackground_FUN_004b82d0(char *param_1,int param_2);
void core_hostage_cpp_CHostage_archive_FUN_004b8320(int param_1);
undefined4 core_hostage_cpp_CHostage_isGrabbable_FUN_004b8540(int param_1);
undefined4 core_hostage_cpp_FUN_004b8580(void);
undefined4 core_hostage_cpp_CHostage_getGrabbed_FUN_004b8590(int param_1,undefined4 param_2,int param_3);
void core_hostage_cpp_FUN_004b8600(int param_1,int param_2);
void core_hostage_cpp_FUN_004b8700(int param_1,int param_2);
CDemonActor * core_hostage_cpp_CHostage_dtor_FUN_004b8b70(CDemonActor *param_1,byte param_2);
void __cdecl core_hotdemon_cpp_staticInit_FUN_004b8c40(void);
void core_hotdemon_cpp_FUN_004b8c70(void);
CDemonActorType * core_hotdemon_cpp_FUN_004b8c90(void);
CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(CHotDemon *this_ptr);
void core_hotdemon_cpp_CHotDemon_setup_FUN_004b8d00(CEnemy *param_1);
void core_hotdemon_cpp_CHotDemon_process_FUN_004b8f20(CEnemy *param_1,float param_2);
undefined4 core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004b9680(int param_1);
void core_hotdemon_cpp_CHotDemon_archive_FUN_004b96c0(CEnemy *param_1);
void core_hotdemon_cpp_CHotDemon_processDamage_FUN_004b9720(CEnemy *param_1,SDamageInfo *param_2);
undefined4 core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004b98f0(int param_1,CVector3f *param_2);
void core_hotdemon_cpp_FUN_004b99b0(CCharacter *param_1,SCollisionInfo *param_2);
CDemonActor * core_hotdemon_cpp_CHotDemon_dtor_FUN_004b99d0(CDemonActor *param_1,byte param_2);
void __cdecl core_hpriest_cpp_staticInit_FUN_004b9a90(void);
void core_hpriest_cpp_FUN_004b9ac0(void);
CDemonActorType * core_hpriest_cpp_FUN_004b9ae0(void);
int core_hpriest_cpp_FUN_004b9af0(undefined4 param_1);
void core_hpriest_cpp_FUN_004b9b50(int param_1);
void core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004b9b80(CNPC *param_1,float param_2);
void core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004b9bd0(undefined4 param_1,int param_2);
CDemonActor * core_hpriest_cpp_FUN_004b9bf0(CDemonActor *param_1,byte param_2);
void __cdecl core_icepick_cpp_staticInit_FUN_004b9cc0(void);
void core_icepick_cpp_FUN_004b9cf0(void);
CDemonActorType * core_icepick_cpp_FUN_004b9d10(void);
int __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004b9d20(undefined4 param_1);
void core_icepick_cpp_CIcePick_setup_FUN_004b9db0(int param_1);
void core_icepick_cpp_FUN_004b9fe0(CHero *param_1,float param_2);
void core_icepick_cpp_FUN_004ba740(int param_1,float param_2);
undefined4 __cdecl core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(CDemonActor *param_1);
undefined4 __cdecl core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(int param_1);
void core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004baa50(int param_1,int param_2);
void core_icepick_cpp_FUN_004baba0(int param_1,float param_2);
void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(CCharacter *param_1,float param_2);
void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(CCharacter *param_1,int param_2);
void core_icepick_cpp_FUN_004bb4c0(undefined4 param_1);
void core_icepick_cpp_FUN_004bb4d0(CCharacter *param_1);
void core_icepick_cpp_CIcePick_processDamage_FUN_004bb4e0(CCharacter *param_1,SDamageInfo *param_2);
undefined4 core_icepick_cpp_FUN_004bb690(int param_1);
void core_icepick_cpp_FUN_004bb6a0(int param_1,undefined4 param_2);
CHero * core_icepick_cpp_FUN_004bb6b0(CHero *param_1,byte param_2);
void __cdecl core_imp_cpp_staticInit_FUN_004bb700(void);
void core_imp_cpp_FUN_004bb730(void);
CDemonActorType * core_imp_cpp_FUN_004bb750(void);
CEnemy * core_imp_cpp_FUN_004bb760(CEnemy *param_1);
void core_imp_cpp_CImp_setup_FUN_004bb7d0(CEnemy *param_1);
void core_imp_cpp_CImp_process_FUN_004bbaf0(CEnemy *param_1,float param_2);
void core_imp_cpp_FUN_004bc7c0(void);
void core_imp_cpp_FUN_004bc7e0(int param_1,int param_2);
bool core_imp_cpp_CImp_attractActorToward_FUN_004bc9b0(undefined4 param_1,int param_2);
void core_imp_cpp_FUN_004bc9c0(CEnemy *param_1);
void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004bca20(CImp *this_ptr,SDamageInfo *damage_info);
void core_imp_cpp_CImp_processDamage_FUN_004bccc0(CImp *param_1,SDamageInfo *param_2);
int core_imp_cpp_CImp_getTargetPoints_FUN_004bce00(int param_1,CVector3f *param_2);
void core_imp_cpp_FUN_004bcfb0(CCharacter *param_1,SCollisionInfo *param_2);
CDemonActor * core_imp_cpp_FUN_004bcfd0(CDemonActor *param_1,byte param_2);
void __cdecl engine_ini_cpp_staticInit_FUN_004bd090(void);
int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004bd0a0(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename);
int engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5);
int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004bd480(CIni *this_ptr,char *section,char *key,char *value,char *filename);
void __cdecl engine_ini_cpp_getProfileString_FUN_004bd750(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename);
void engine_ini_cpp_getProfileInteger_FUN_004bd790(char *param_1,char *param_2,undefined4 param_3,char *param_4);
void __cdecl engine_ini_cpp_writeProfileString_FUN_004bd830(char *section,char *key,char *value,char *filename);
CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004bd860(CIniFile *this_ptr,char *filename,char *section);
void __cdecl engine_ini_cpp_CIniFile_init_FUN_004bd890(char *dest,char *source);
void engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(int param_1,char *param_2);
void engine_ini_cpp_CIniFile_getString_FUN_004bd910(char *param_1,char *param_2,char *param_3,int param_4);
void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(CIniFile *this_ptr,char *key,char *value);
void engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(CIniFile *param_1,char *param_2,undefined4 param_3);
void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(CIniFile *this_ptr,char *key,float *output);
void engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(CIniFile *param_1,char *param_2,float param_3);
undefined4 engine_ini_cpp_FUN_004bdb60(undefined4 param_1);
undefined4 engine_ini_cpp_FUN_004bdb70(undefined4 param_1);
void core_inivar_cpp_FUN_004bdb80(void);
void __cdecl core_inivar_cpp_writeIniData_FUN_004be2d0(void);
void __cdecl core_inv_cpp_staticInit_FUN_004be9d0(void);
CDemonActor * core_inv_cpp_getItemModel_FUN_004beb40(CDemonActor *param_1);
char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004beca0(CDemonActor *actor_ptr);
char * __cdecl core_inv_cpp_getItemIconName_FUN_004bed10(CDemonActor *actor_ptr);
int __cdecl core_inv_cpp_loadItem_FUN_004bed80(SInventoryItemInfo *item_info,_FILE *file_handle);
CInventory * __cdecl core_inv_cpp_CInventory_ctor_FUN_004bedc0(CInventory *this_ptr);
CInventory * core_inv_cpp_FUN_004bee60(CInventory *param_1);
void __cdecl core_inv_cpp_CInventory_clear_FUN_004bee80(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_initialize_FUN_004bef10(CInventory *this_ptr);
void __cdecl core_inv_cpp_loadAssets_FUN_004befa0(void);
void __cdecl core_inv_cpp_freeInventory_FUN_004bf270(void);
int __cdecl core_inv_cpp_CInventory_addItem_FUN_004bf360(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message);

