#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBloodParticle.h"
#include "types/classes/CBloodPool.h"
#include "types/classes/CBloodSplat.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CFlies.h"
#include "types/classes/CFootstep.h"
#include "types/classes/CGore.h"
#include "types/classes/CGrave.h"
#include "types/classes/CGround.h"
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
#include "types/classes/CLocation.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CNPC.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EDeathState.h"
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
CFlies * __cdecl core_gore_cpp_CGore_spawnFlies_FUN_004b0580(CGore *this_ptr,CVector3f *position,int gather_count,float spawn_rate,CVector3f *box_size);
void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size);
void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004b06b0(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,int blood_type);
int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730(CGore *this_ptr,CVector3f *position,int *out_blood_type);
int __cdecl core_gore_cpp_CGore_load_FUN_004b0820(CGore *this_ptr,_FILE *file_handle);
int __cdecl core_gore_cpp_CGore_save_FUN_004b08d0(CGore *this_ptr,_FILE *file_handle);
CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004b09b0(CFootstep *this_ptr);
CFootstep * __cdecl core_gore_cpp_CFootstep_dtor_FUN_004b09d0(CFootstep *this_ptr,uint flags);
CBloodPool * __cdecl core_gore_cpp_CBloodPool_ctor_FUN_004b09f0(CBloodPool *this_ptr);
CBloodPool * __cdecl core_gore_cpp_CBloodPool_dtor_FUN_004b0a00(CBloodPool *this_ptr,uint flags);
CBloodSplat * __cdecl core_gore_cpp_CBloodSplat_ctor_FUN_004b0a10(CBloodSplat *this_ptr);
CBloodSplat * __cdecl core_gore_cpp_CBloodSplat_dtor_FUN_004b0a20(CBloodSplat *this_ptr,uint flags);
CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004b0a30(CBloodParticle *this_ptr);
CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_dtor_FUN_004b0a50(CBloodParticle *this_ptr,uint flags);
CFootstep * __cdecl core_gore_cpp_CFootstep_arrdtor_FUN_004b0a60(CFootstep *this_ptr,uint flags);
CBloodPool * __cdecl core_gore_cpp_CBloodPool_arrdtor_FUN_004b0a80(CBloodPool *this_ptr,uint flags);
CBloodSplat * __cdecl core_gore_cpp_CBloodSplat_arrdtor_FUN_004b0aa0(CBloodSplat *this_ptr,uint flags);
CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_arrdtor_FUN_004b0ac0(CBloodParticle *this_ptr,uint flags);
void __cdecl core_grave_cpp_staticInit_FUN_004b0ae0(void);
CGrave * __cdecl core_grave_cpp_factoryFuncGrave_FUN_004b0b10(void);
CDemonActorType * __cdecl core_grave_cpp_CGrave_getActorType_FUN_004b0b30(CGrave *this_ptr);
CGrave * __cdecl core_grave_cpp_CGrave_ctor_FUN_004b0b40(CGrave *this_ptr);
void __cdecl core_grave_cpp_CGrave_setup_FUN_004b0bd0(CGrave *this_ptr);
void __cdecl core_grave_cpp_CGrave_process_FUN_004b0bf0(CGrave *this_ptr,float delta_time);
int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004b0cb0(CGrave *this_ptr);
void __cdecl core_grave_cpp_CGrave_renderBackground_FUN_004b0d40(CGrave *this_ptr,int layer_flag);
void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(CGrave *this_ptr);
void __cdecl core_grave_cpp_CGrave_archive_FUN_004b0e20(CGrave *this_ptr);
CBoundingBox3D * __cdecl core_grave_cpp_CGrave_getBoundingBox_FUN_004b0f20(CGrave *this_ptr,CBoundingBox3D *out_box);
ECollisionType __cdecl core_grave_cpp_CGrave_getCollisionType_FUN_004b1000(CGrave *this_ptr,SCollisionInfo *collision_info);
CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004b1010(CGrave *this_ptr,uint flags);
void __cdecl core_ground_cpp_staticInit_FUN_004b1060(void);
_FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004b1090(char *directory,char *filename,char *new_extension,char *open_mode);
char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004b11b0(EGroundType type);
uint __cdecl core_ground_cpp_getGroundTypeColor_FUN_004b12f0(EGroundType type);
CGround * __cdecl core_ground_cpp_CGround_ctor_FUN_004b1350(CGround *this_ptr,int width,int height);
CGround * __cdecl core_ground_cpp_CGround_dtor_FUN_004b13b0(CGround *this_ptr,uint flags);
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
CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004b2430(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal);
void __cdecl core_gun_cpp_staticInit_FUN_004b2700(void);
CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004b2730(void);
CDemonActorType * __cdecl core_gun_cpp_CGun_getActorType_FUN_004b2750(CGun *this_ptr);
CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004b2760(CGun *this_ptr);
int __cdecl core_gun_cpp_CGun_fire_FUN_004b27c0(CGun *this_ptr);
float __cdecl core_gun_cpp_CGun_getDamage_FUN_004b2fc0(CGun *this_ptr);
CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004b2ff0(CGun *this_ptr,uint flags);
void __cdecl core_haystack_cpp_staticInit_FUN_004b3040(void);
CHaystack * __cdecl core_haystack_cpp_factoryFuncHaystack_FUN_004b3070(void);
CDemonActorType * __cdecl core_haystack_cpp_CHaystack_getActorType_FUN_004b3090(CHaystack *this_ptr);
CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004b30a0(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_setup_FUN_004b3110(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_process_FUN_004b32d0(CHaystack *this_ptr,float delta_time);
void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004b3880(CHaystack *this_ptr,float delta_time);
void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004b3e00(CHaystack *this_ptr,float delta_time);
void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004b3f40(CHaystack *this_ptr,int bone_index);
void __cdecl core_haystack_cpp_CHaystack_archive_FUN_004b3fe0(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_renderOpaque_FUN_004b3ff0(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004b4000(CHaystack *this_ptr,SDamageInfo *damage_info);
int __cdecl core_haystack_cpp_CHaystack_isWeaponDrawn_FUN_004b4120(CHaystack *this_ptr);
void __cdecl core_haystack_cpp_CHaystack_drawWeapon_FUN_004b4130(CHaystack *this_ptr,int drawn);
CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004b4140(CHaystack *this_ptr,uint flags);
void __cdecl core_health_cpp_staticInit_FUN_004b4190(void);
CHealthItem * __cdecl core_health_cpp_factoryFuncHealthItem_FUN_004b41c0(void);
CDemonActorType * __cdecl core_health_cpp_CHealthItem_getActorType_FUN_004b41e0(CHealthItem *this_ptr);
CHealthItem * __cdecl core_health_cpp_CHealthItem_ctor_FUN_004b41f0(CHealthItem *this_ptr);
void __cdecl core_health_cpp_CHealthItem_setup_FUN_004b4250(CHealthItem *this_ptr);
void __cdecl core_health_cpp_CHealthItem_process_FUN_004b4270(CHealthItem *this_ptr,float delta_time);
int __cdecl core_health_cpp_CHealthItem_renderOpaque_FUN_004b4280(CHealthItem *this_ptr);
CBoundingBox3D * __cdecl core_health_cpp_CHealthItem_getBoundingBox_FUN_004b42f0(CHealthItem *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_health_cpp_CHealthItem_archive_FUN_004b4340(CHealthItem *this_ptr);
ECollisionType __cdecl core_health_cpp_CHealthItem_getCollisionType_FUN_004b43c0(CHealthItem *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004b43d0(CHealthItem *this_ptr,CDemonActor *picker);
int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004b43f0(CHealthItem *this_ptr,CCharacter *user);
void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004b4440(CHealthItem *this_ptr,CDemonActor *owner);
CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004b4460(CHealthItem *this_ptr,uint flags);
void __cdecl core_hero_cpp_staticInit_FUN_004b44b0(void);
CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004b4500(CLocation *location);
int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(CVector3f *point,float radius);
int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004b4630(CVector3f *point,float horizontal_radius,float vertical_tolerance);
CHero * __cdecl core_hero_cpp_CHero_FUN_004b46d0(CHero *this_ptr);
CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004b4800(CHero *this_ptr,uint flags);
void __cdecl core_hero_cpp_CHero_setup_FUN_004b48d0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004b4910(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance);
int __cdecl core_hero_cpp_CHero_testLineIntersection_FUN_004b4950(CHero *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point);
void __cdecl core_hero_cpp_CHero_archive_FUN_004b49a0(CHero *this_ptr);
CPathMap * __cdecl core_hero_cpp_CHero_getPathMap_FUN_004b4c00(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004b4c10(CHero *this_ptr,CDemonActor *grabber);
int __cdecl core_hero_cpp_CHero_canBeGrabbed_FUN_004b4c20(CHero *this_ptr,CDemonActor *grabber,int grab_type);
int __cdecl core_hero_cpp_CHero_canWalk_FUN_004b4c30(CHero *this_ptr);
int __cdecl core_hero_cpp_CHeroPlaceholder_renderTransparent_FUN_004b4c60(CHeroPlaceholder *this_ptr);
int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004b4c70(CHero *this_ptr,CDemonActor *grabber,int grab_type);
void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004b4d50(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004b4dd0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004b4e90(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004b5110(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryPushNearbyBox_FUN_004b54c0(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004b5750(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004b5950(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_FUN_004b5b00(CHero *this_ptr);
int __cdecl core_hero_cpp_CHero_canLookAt_FUN_004b5b70(CHero *this_ptr);
void __cdecl core_hero_cpp_CHero_executeObjectPickup_FUN_004b5c30(CHero *this_ptr,int hand_index);
void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(CHero *this_ptr,int hand_index);
void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004b5cb0(CHero *this_ptr,uint key_mask);
void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004b5cd0(CHero *this_ptr,int ai_task);
CEnemy * __cdecl core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(CHero *this_ptr,float *out_distance);
void __cdecl core_hero_cpp_CHero_kill_FUN_004b5e90(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force);
void __cdecl core_hero_cpp_CHero_reset_FUN_004b5ec0(CHero *this_ptr);
CHeroPlaceholder * __cdecl core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004b5f60(void);
CDemonActorType * __cdecl core_hero_cpp_CHeroPlaceholder_getActorType_FUN_004b5f80(CHeroPlaceholder *this_ptr);
CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(CHeroPlaceholder *this_ptr);
CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0(CHeroPlaceholder *this_ptr,uint flags);
CBoundingBox3D * __cdecl core_hero_cpp_CHeroPlaceholder_getBoundingBox_FUN_004b6020(CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box);
CHero * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004b6080(CHeroPlaceholder *this_ptr,EHeroType hero_type);
void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004b61f0(CHeroPlaceholder *this_ptr);
void __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004b6220(void);
void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004b6370(void);
void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0(void);
void __cdecl core_hiram_cpp_staticInit_FUN_004b65b0(void);
CHiram * __cdecl core_hiram_cpp_factoryFuncHiram_FUN_004b65e0(void);
CDemonActorType * __cdecl core_hiram_cpp_CHiram_getActorType_FUN_004b6600(CHiram *this_ptr);
CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004b6610(CHiram *this_ptr);
CHiram * __cdecl core_hiram_cpp_CHiram_dtor_FUN_004b6670(CHiram *this_ptr,uint flags);
void __cdecl core_hiram_cpp_CHiram_setup_FUN_004b6750(CHiram *this_ptr);
void __cdecl core_hiram_cpp_CHiram_process_FUN_004b6770(CHiram *this_ptr,float delta_time);
void __cdecl core_hiram_cpp_CHiram_archive_FUN_004b68b0(CHiram *this_ptr);
CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_004b68c0(CNPC *this_ptr,uint flags);
void __cdecl core_hostage_cpp_staticInit_FUN_004b6990(void);
CHostage * __cdecl core_hostage_cpp_factoryFuncHostage_FUN_004b69c0(void);
CDemonActorType * __cdecl core_hostage_cpp_CHostage_getActorType_FUN_004b69e0(CHostage *this_ptr);
CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004b69f0(CHostage *this_ptr);
void __cdecl core_hostage_cpp_CHostage_setup_FUN_004b6b20(CHostage *this_ptr);
int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004b6cf0(CHostage *this_ptr);
void __cdecl core_hostage_cpp_CHostage_process_FUN_004b6d80(CHostage *this_ptr,float delta_time);
int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(CHostage *this_ptr,float delta_time);
void __cdecl core_hostage_cpp_CHostage_renderBackground_FUN_004b82d0(CHostage *this_ptr,int layer_flag);
void __cdecl core_hostage_cpp_CHostage_archive_FUN_004b8320(CHostage *this_ptr);
int __cdecl core_hostage_cpp_CHostage_isGrabbable_FUN_004b8540(CHostage *this_ptr,CDemonActor *grabber);
int __cdecl core_hostage_cpp_CHostage_canBeGrabbed_FUN_004b8580(CHostage *this_ptr,CDemonActor *grabber,int grab_type);
int __cdecl core_hostage_cpp_CHostage_getGrabbed_FUN_004b8590(CHostage *this_ptr,CDemonActor *grabber,int grab_type);
void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004b8600(CHostage *this_ptr,SDamageInfo *damage_info);
CMatrix3x4f * __stack2_esi core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004b8700(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
CHostage * __cdecl core_hostage_cpp_CHostage_dtor_FUN_004b8b70(CHostage *this_ptr,uint flags);
void __cdecl core_hotdemon_cpp_staticInit_FUN_004b8c40(void);
CHotDemon * __cdecl core_hotdemon_cpp_factoryFuncHotDemon_FUN_004b8c70(void);
CDemonActorType * __cdecl core_hotdemon_cpp_CHotDemon_getActorType_FUN_004b8c90(CHotDemon *this_ptr);
CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(CHotDemon *this_ptr);
void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004b8d00(CHotDemon *this_ptr);
void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004b8f20(CHotDemon *this_ptr,float delta_time);
EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004b9680(CHotDemon *this_ptr);
void __cdecl core_hotdemon_cpp_CHotDemon_archive_FUN_004b96c0(CHotDemon *this_ptr);
void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004b9720(CHotDemon *this_ptr,SDamageInfo *damage_info);
int __cdecl core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004b98f0(CHotDemon *this_ptr,CVector3f *out_points_array);
ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004b99b0(CHotDemon *this_ptr,SCollisionInfo *collision_info);
CDemonActor * __cdecl core_hotdemon_cpp_CHotDemon_dtor_FUN_004b99d0(CHotDemon *this_ptr,uint flags);
void __cdecl core_hpriest_cpp_staticInit_FUN_004b9a90(void);
CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004b9ac0(void);
CDemonActorType * __cdecl core_hpriest_cpp_CHighPriestOfGardath_getActorType_FUN_004b9ae0(CHighPriestOfGardath *this_ptr);
CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004b9af0(CHighPriestOfGardath *this_ptr);
void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004b9b50(CHighPriestOfGardath *this_ptr);
void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004b9b80(CHighPriestOfGardath *this_ptr,float delta_time);
void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004b9bd0(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info);
CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004b9bf0(CHighPriestOfGardath *this_ptr,uint flags);
void __cdecl core_icepick_cpp_staticInit_FUN_004b9cc0(void);
CIcePick * __cdecl core_icepick_cpp_factoryFuncIcePick_FUN_004b9cf0(void);
CDemonActorType * __cdecl core_icepick_cpp_CIcePick_getActorType_FUN_004b9d10(CIcePick *this_ptr);
CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004b9d20(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004b9db0(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_process_FUN_004b9fe0(CIcePick *this_ptr,float delta_time);
void __cdecl core_icepick_cpp_CIcePick_FUN_004ba740(CIcePick *this_ptr,float delta_time);
int __cdecl core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(CIcePick *this_ptr);
int __cdecl core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(CIcePick *this_ptr);
void __stack2_esi core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004baa50(CIcePick *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
void __cdecl core_icepick_cpp_CIcePick_FUN_004baba0(CIcePick *this_ptr,float delta_time);
void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(CIcePick *this_ptr,float delta_time);
void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(CIcePick *this_ptr,int bone_index);
void __cdecl core_icepick_cpp_CIcePick_archive_FUN_004bb4c0(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_renderOpaque_FUN_004bb4d0(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_processDamage_FUN_004bb4e0(CIcePick *this_ptr,SDamageInfo *damage_info);
int __cdecl core_icepick_cpp_CIcePick_isWeaponDrawn_FUN_004bb690(CIcePick *this_ptr);
void __cdecl core_icepick_cpp_CIcePick_drawWeapon_FUN_004bb6a0(CIcePick *this_ptr,int drawn);
CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004bb6b0(CIcePick *this_ptr,uint flags);
void __cdecl core_imp_cpp_staticInit_FUN_004bb700(void);
CImp * __cdecl core_imp_cpp_factoryFuncImp_FUN_004bb730(void);
CDemonActorType * __cdecl core_imp_cpp_CImp_getActorType_FUN_004bb750(CImp *this_ptr);
CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004bb760(CImp *this_ptr);
void __cdecl core_imp_cpp_CImp_setup_FUN_004bb7d0(CImp *this_ptr);
void __cdecl core_imp_cpp_CImp_process_FUN_004bbaf0(CImp *this_ptr,float delta_time);
CVector3f * __cdecl core_imp_cpp_setVector_FUN_004bc7c0(CVector3f *out,float x,float y,float z);
void __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004bc7e0(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
int __cdecl core_imp_cpp_CImp_attractActorToward_FUN_004bc9b0(CImp *this_ptr,CDemonActor *actor,CVector3f *target_local_point);
void __cdecl core_imp_cpp_CImp_archive_FUN_004bc9c0(CImp *this_ptr);
void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004bca20(CImp *this_ptr,SDamageInfo *damage_info);
void __cdecl core_imp_cpp_CImp_processDamage_FUN_004bccc0(CImp *this_ptr,SDamageInfo *damage_info);
int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004bce00(CImp *this_ptr,CVector3f *out_points_array);
ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004bcfb0(CImp *this_ptr,SCollisionInfo *collision_info);
CImp * __cdecl core_imp_cpp_CImp_dtor_FUN_004bcfd0(CImp *this_ptr,uint flags);
void __cdecl engine_ini_cpp_staticInit_FUN_004bd090(void);
int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004bd0a0(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename);
int __cdecl engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0(CIni *this_ptr,char *section,char *key,char *value,char *filename);
int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004bd480(CIni *this_ptr,char *section,char *key,char *value,char *filename);
void __cdecl engine_ini_cpp_getProfileString_FUN_004bd750(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename);
int __cdecl engine_ini_cpp_getProfileInteger_FUN_004bd790(char *section,char *key,int default_value,char *filename);
void __cdecl engine_ini_cpp_writeProfileString_FUN_004bd830(char *section,char *key,char *value,char *filename);
CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004bd860(CIniFile *this_ptr,char *filename,char *section);
void __cdecl engine_ini_cpp_initIniFile_FUN_004bd890(char *dest,char *source);
void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(CIniFile *this_ptr,char *section);
void __cdecl engine_ini_cpp_CIniFile_getString_FUN_004bd910(CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size);
void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(CIniFile *this_ptr,char *key,char *value);
void __cdecl engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(CIniFile *this_ptr,char *key_name,int *value_ptr);
void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(CIniFile *this_ptr,char *key,int value);
void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(CIniFile *this_ptr,char *key,float *output);
void __cdecl engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(CIniFile *this_ptr,char *key,float value);
CIni * __cdecl engine_ini_cpp_CIni_ctor_FUN_004bdb60(CIni *this_ptr);
CIni * __cdecl engine_ini_cpp_CIni_dtor_FUN_004bdb70(CIni *this_ptr,uint flags);
void __cdecl core_inivar_cpp_FUN_004bdb80(void);
void __cdecl core_inivar_cpp_writeIniData_FUN_004be2d0(void);
void __cdecl core_inv_cpp_staticInit_FUN_004be9d0(void);
CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004beb40(CDemonActor *actor_ptr);
char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004beca0(CDemonActor *actor_ptr);
char * __cdecl core_inv_cpp_getItemIconName_FUN_004bed10(CDemonActor *actor_ptr);
int __cdecl core_inv_cpp_loadItem_FUN_004bed80(SInventoryItemInfo *item_info,_FILE *file_handle);
CInventory * __cdecl core_inv_cpp_CInventory_ctor_FUN_004bedc0(CInventory *this_ptr);
CInventory * __cdecl core_inv_cpp_CInventory_dtor_FUN_004bee60(CInventory *this_ptr,uint flags);
void __cdecl core_inv_cpp_CInventory_clear_FUN_004bee80(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_initialize_FUN_004bef10(CInventory *this_ptr);
void __cdecl core_inv_cpp_loadAssets_FUN_004befa0(void);
void __cdecl core_inv_cpp_freeInventory_FUN_004bf270(void);
int __cdecl core_inv_cpp_CInventory_addItem_FUN_004bf360(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message);

