#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBodyPart.h"
#include "types/classes/CBride.h"
#include "types/classes/CBugs.h"
#include "types/classes/CChain.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CVector3f.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EDamageType.h"
#include "types/enums/EDeathState.h"
#include "types/funcdefs/OptimizedMemcpyFunc.h"
#include "types/structs/SBug.h"
#include "types/structs/SChainVertex.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SEdgeList.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x420000
// =============================================================================

void core_bride_cpp_CBride_archive_FUN_00420970(CEnemy *param_1);
void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_00420a10(CBride *this_ptr,SDamageInfo *damage_info);
void core_bride_cpp_CBride_processDamage_FUN_00420c40(CBride *param_1,SDamageInfo *param_2);
undefined4 core_bride_cpp_CBride_getTargetPoints_FUN_00420e20(int param_1,CVector3f *param_2);
CVector3f * core_bride_cpp_FUN_00420eb0(int param_1,CVector3f *param_2);
CDemonActor * core_bride_cpp_CBride_dtor_FUN_00420f20(CDemonActor *param_1,byte param_2);
void __cdecl core_bugs_cpp_staticInit_FUN_00420fe0(void);
void core_bugs_cpp_FUN_00421010(void);
CDemonActorType * core_bugs_cpp_FUN_00421030(void);
CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00421040(CBugs *this_ptr);
void core_bugs_cpp_CBugs_setup_FUN_004211e0(CBugs *param_1);
void core_bugs_cpp_FUN_00421480(CBugs *param_1,float param_2);
int core_bugs_cpp_FUN_00421540(CDemonActor *param_1);
void core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_004216d0(int param_1);
undefined4 * core_bugs_cpp_FUN_00421840(int param_1,undefined4 *param_2);
void core_bugs_cpp_CBugs_archive_FUN_00421880(CEnemy *param_1);
undefined4 core_bugs_cpp_FUN_004219a0(void);
undefined4 core_bugs_cpp_CBugs_getDeathState_FUN_004219b0(int param_1);
void core_bugs_cpp_FUN_004219d0(CEnemy *param_1,SDamageInfo *param_2);
void core_bugs_cpp_FUN_004219f0(CBugs *param_1,int param_2,ushort *param_3);
void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data);
void core_bugs_cpp_FUN_00421b80(int param_1);
undefined4 core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00(int param_1,float param_2,float param_3);
void core_bugs_cpp_FUN_00422050(CBugs *param_1,float param_2);
void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422370(CBugs *this_ptr,float delta_time);
void __cdecl core_bugs_cpp_CBugs_updateBoundingBox_FUN_004227a0(CBugs *this_ptr,float delta_time);
undefined4 core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(undefined4 param_1,int *param_2,float param_3,float *param_4);
void core_bugs_cpp_CBugs_updateBugRenderingData_FUN_00422c70(CBugs *param_1,SBug *param_2,float param_3);
void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00423480(CBugs *this_ptr,SBug *bug_data);
void __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(CBugs *this_ptr);
void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00423790(CBugs *this_ptr,CDemonActor *target);
void __cdecl core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00423a50(CBugs *this_ptr,CVector3f *new_position);
void core_bugs_cpp_createVector_FUN_00423b70(void);
void core_bugs_cpp_scaleVector_FUN_00423b90(void);
void core_bugs_cpp_subtractVector_FUN_00423bb0(void);
float * core_bugs_cpp_crossVector_FUN_00423be0(void);
void core_bugs_cpp_normalizeVector_FUN_00423c20(void);
void core_bugs_cpp_convertVector_FUN_00423c90(void);
void core_bugs_cpp_copyVectorToPair_FUN_00423cc0(void);
undefined4 core_bugs_cpp_getBugVertex_FUN_00423d00(void);
undefined4 core_bugs_cpp_FUN_00423d20(void);
char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00423d30(CDeformableModelInstance *model_ptr);
void core_bugs_cpp_swapIntegers_FUN_00423d40(undefined4 *param_1,undefined4 *param_2);
float core_bugs_cpp_maxFloat_FUN_00423d60(float param_1,float param_2);
CDemonActor * core_bugs_cpp_FUN_00423d90(CDemonActor *param_1,byte param_2);
undefined4 core_bugs_cpp_FUN_00423e60(undefined4 param_1);
undefined4 core_bugs_cpp_FUN_00423e70(undefined4 param_1);
void core_bugs_cpp_FUN_00423e80(void *param_1);
void __cdecl core_charactr_cpp_staticInit_FUN_00423ea0(void);
SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo *this_ptr);
CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00423f40(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00424260(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_archive_FUN_004244b0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004246e0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation);
float core_charactr_cpp_clampFloat_FUN_00424730(void);
float core_charactr_cpp_FUN_00424780(void);
int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance);
void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00424e90(CCharacter *this_ptr,CVector3f *target);
void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00424f40(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force);
void core_charactr_cpp_CCharacter_applyDamage_FUN_00424ff0(int param_1,EDamageType param_2,float param_3);
void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter *this_ptr,CVector3f *velocity);
int __cdecl core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(CCharacter *this_ptr);
undefined4 core_charactr_cpp_FUN_004259f0(CCharacter *param_1,float param_2);
void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_renderCollision_FUN_00425cc0(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter *this_ptr);
void core_charactr_cpp_FUN_00426510(CCharacter *param_1);
int core_charactr_cpp_CCharacter_getPartDominantBone_FUN_00426570(int param_1,int param_2);
void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index);
void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_004269b0(CCharacter *this_ptr,float delta_time);
void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_00426e80(CCharacter *this_ptr);
void core_charactr_cpp_FUN_004270e0(int param_1);
int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_00427290(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00427310(CCharacter *this_ptr);
void core_charactr_cpp_FUN_00427730(CCharacter *param_1,CVector3f *param_2,undefined4 param_3,int param_4,float param_5,int param_6);
void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(CCharacter *this_ptr);
void core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(CDemonActor *param_1,int param_2,int param_3,float param_4);
void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990(CCharacter *this_ptr,int part_index,int bone_index,float chance);
undefined4 * core_charactr_cpp_FUN_00427a20(int param_1,undefined4 *param_2);
void core_charactr_cpp_FUN_00427a60(int param_1);
void __cdecl core_charactr_cpp_CCharacter_explode_FUN_00427ab0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force);
void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00427b60(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background);
ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background);
void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background);
int __cdecl core_charactr_cpp_CCharacter_isGrabbable_FUN_004280a0(CCharacter *this_ptr,CDemonActor *grabber);
void __cdecl core_charactr_cpp_CCharacter_releaseFromGrab_FUN_004280b0(CCharacter *this_ptr);
void core_charactr_cpp_FUN_004280e0(void);
undefined4 core_charactr_cpp_FUN_004280f0(int param_1);
void core_charactr_cpp_FUN_00428100(int param_1,int param_2,undefined4 param_3);
undefined4 core_charactr_cpp_CCharacter_attractActorToward_FUN_00428160(int param_1,CDemonActor *param_2,CVector3f *param_3);
undefined4 core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260(CCharacter *param_1,CVector3f *param_2,float param_3);
undefined4 core_charactr_cpp_CCharacter_testDamageLine_FUN_004282d0(CCharacter *param_1,CVector3f *param_2,CVector3f *param_3,CDemonActor *param_4,CVector3f *param_5);
void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00428510(CCharacter *this_ptr,SDamageInfo *damage_info);
void core_charactr_cpp_FUN_004286d0(int param_1,undefined4 param_2);
EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00428710(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_00428780(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state );
void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_00428ab0(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance);
void core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_00428b60(int param_1,undefined4 param_2);
void core_charactr_cpp_FUN_00428bb0(int param_1,undefined4 param_2);
undefined4 core_charactr_cpp_CCharacter_isWalkComplete_FUN_00428bc0(int param_1);
undefined4 core_charactr_cpp_FUN_00428bf0(void);
undefined4 core_charactr_cpp_FUN_00428c00(CCharacter *param_1,float param_2);
void core_charactr_cpp_CCharacter_setWalkTimeout_FUN_00428ee0(int param_1,undefined4 param_2);
void core_charactr_cpp_FUN_00428ef0(int param_1);
bool core_charactr_cpp_FUN_00428f20(int param_1);
void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time);
void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_00429010(CCharacter *this_ptr,int hand_index,float blend_time);
void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00429170(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction);
void __cdecl core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220(CCharacter *this_ptr,float delta_time);
void core_charactr_cpp_FUN_00429490(int param_1,int param_2);
int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_004294f0(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_00429520(CCharacter *this_ptr,char *motion_name);
void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_00429560(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_advanceGesture_FUN_00429660(CCharacter *this_ptr,float delta_time);
void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429730(CCharacter *this_ptr,float delta_time,int disable_search);
void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00429e60(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00429f60(CCharacter *this_ptr,CDemonActor *target);
void core_charactr_cpp_FUN_00429f70(int param_1,uint *param_2);
undefined4 core_charactr_cpp_CCharacter_canLookAt_FUN_00429fe0(int param_1);
void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060(CCharacter *this_ptr,UOrientationVector *orientation);
void core_charactr_cpp_CCharacter_spawnFlies_FUN_0042a120(CDemonActor *param_1,int param_2,float param_3);
void core_charactr_cpp_FUN_0042a150(CCharacter *param_1,float param_2);
int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0(CCharacter *this_ptr,float delta_time,char *pattern);
int core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a500(int param_1,float *param_2,int param_3);
void core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042a700(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction);
void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800(CCharacter *this_ptr);
float core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(int param_1,int param_2);
void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50(CCharacter *this_ptr,int layer_action_index);
void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0(CCharacter *this_ptr,float delta_time);
int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(CCharacter *this_ptr,int bone_index);
undefined4 core_charactr_cpp_FUN_0042af70(CCharacter *param_1,float param_2);
void __cdecl core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(CCharacter *this_ptr,char *sound_name);
void core_charactr_cpp_divideVector_FUN_0042b4d0(void);
void core_charactr_cpp_setActorXPos_FUN_0042b500(void);
void core_charactr_cpp_projectPointToVertex_FUN_0042b510(void);
void core_charactr_cpp_FUN_0042b570(void);
undefined4 core_charactr_cpp_FUN_0042b5a0(void);
int core_charactr_cpp_getActorCreateEvent_FUN_0042b5b0(void);
undefined4 core_charactr_cpp_getGameDeltaTime_FUN_0042b5c0(int param_1);
CDemonActor * core_charactr_cpp_CCharacter_dtor_FUN_0042b5d0(CDemonActor *param_1,byte param_2);
undefined4 core_charactr_cpp_SFire_ctor_FUN_0042b690(undefined4 param_1);
undefined4 core_charactr_cpp_FUN_0042b6a0(undefined4 param_1);
undefined4 core_charactr_cpp_FUN_0042b6b0(undefined4 param_1);
undefined4 * core_charactr_cpp_FUN_0042b6c0(void);
undefined4 * core_charactr_cpp_FUN_0042b6d0(void);
undefined4 * core_charactr_cpp_FUN_0042b6e0(void);
void __cdecl core_chain_cpp_staticInit_FUN_0042b6f0(void);
void core_chain_cpp_FUN_0042b720(void);
CDemonActorType * core_chain_cpp_FUN_0042b740(void);
CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_0042b750(CChain *this_ptr);
CVector3f * __cdecl core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(CChain *this_ptr,CVector3f *out_point);
void core_chain_cpp_CChain_setup_FUN_0042b8f0(CChain *param_1);
void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b);
void core_chain_cpp_CChain_process_FUN_0042bca0(CChain *param_1,float param_2);
undefined4 core_chain_cpp_FUN_0042c4c0(CDemonActor *param_1);
CVector3f * core_chain_cpp_CChain_getBoundingBox_FUN_0042ca90(CDemonActor *param_1,CVector3f *param_2);
void core_chain_cpp_CChain_archive_FUN_0042cbc0(CDemonActor *param_1);
undefined4 core_chain_cpp_FUN_0042ccf0(void);
undefined4 core_chain_cpp_FUN_0042cd00(void);
undefined4 core_chain_cpp_FUN_0042cd10(void);
int core_chain_cpp_fastSqrt_FUN_0042cd20(void);
CDemonActor * core_chain_cpp_FUN_0042cd30(CDemonActor *param_1,byte param_2);
undefined4 core_chain_cpp_FUN_0042cda0(undefined4 param_1);
undefined4 core_chain_cpp_FUN_0042cdb0(undefined4 param_1);
void core_chain_cpp_FUN_0042cdc0(void *param_1);
undefined4 cockpit_ckptutil_c_expandIndexedTo16Bit_FUN_0042cde0(undefined4 *param_1,byte *param_2,int param_3);
undefined4 cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042ceca(undefined4 *param_1,byte *param_2,int param_3);
undefined8 cockpit_ckptutil_c_optimizedMemcpy_FUN_0042cef8(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined8 cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_0042cff2(undefined4 *param_1,undefined4 *param_2,uint param_3);
void cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042d100(undefined2 *param_1,byte *param_2,uint param_3);
code * cockpit_ckptutil_c_FUN_0042d130(void);
OptimizedMemcpyFunc * __cdecl cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_0042d150(void);
code * cockpit_ckptutil_c_FUN_0042d170(void);
void * cockpit_ckptutil_c_FUN_0042d180(void);
void cockpit_ckptutil_c_applyColorPalette_FUN_0042d200(void);
void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(char *filename,void *buffer,int size);
void __cdecl cockpit_ckptutil_c_applyActPalette_FUN_0042d370(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index);
void __cdecl cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(char *filename,uchar *output_palette);
void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_0042d480(char *base_filename,uchar *output_buffer);
void cockpit_ckptutil_c_buildHardwarePalettes_FUN_0042d5c0(byte *param_1);
void cockpit_ckptutil_c_blitSpanBasedSprite_FUN_0042d6c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_0042d900(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height);
int cockpit_ckptutil_c_blitRectangleClipped_FUN_0042db50(int param_1,int param_2,int param_3,int param_4,int param_5);
void cockpit_ckptutil_c_blitUnifiedSprite_FUN_0042dcc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void cockpit_ckptutil_c_blitSimpleSprite_FUN_0042df00(int param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl cockpit_ckptutil_c_blitDualModeSprite_FUN_0042e060(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height);
void cockpit_ckptutil_c_copyBitmapRegion_FUN_0042e220(int param_1,int param_2,undefined4 param_3,void *param_4,int param_5,int param_6,int param_7,int param_8);
undefined8 cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042e290(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
int cockpit_ckptutil_c_blitVerticalColumn_FUN_0042e3d0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6);
void cockpit_ckptutil_c_blitSolidSprite_FUN_0042e4b0(void *param_1,void *param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void cockpit_ckptutil_c_blitFullScreen_FUN_0042e4f0(void *param_1,void *param_2);
void cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520(int param_1,int param_2);
void cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_0042e6c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void cockpit_ckptutil_c_copyScreenRegion_FUN_0042e750(undefined4 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6);
void cockpit_ckptutil_c_FUN_0042e7b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7);
void cockpit_ckptutil_c_rotateCircularBitmap_FUN_0042e9d0(int param_1,int param_2,uint param_3,uint param_4);
void cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_0042eb00(undefined1 *param_1,int param_2,int param_3,int param_4);
void __cdecl cockpit_ckptutil_c_loadEdgeListFile_FUN_0042eb90(char *filename,SEdgeList *edge_lists,int expected_count);
void cockpit_ckptutil_c_loadSingleEdgeList_FUN_0042edc0(void);
void cockpit_ckptutil_c_FUN_0042ee00(char *param_1,int param_2,int param_3);
void cockpit_ckptutil_c_drawClippedEdges_FUN_0042ef60(short *param_1,int param_2,int param_3,int param_4);
void cockpit_ckptutil_c_FUN_0042f050(int param_1,short *param_2,int param_3,int param_4,int param_5);
void cockpit_ckptutil_c_renderEdgeArrayWithBufferLookup_FUN_0042f190(int param_1,short *param_2,int param_3,int param_4,int param_5,int param_6);
void cockpit_ckptutil_c_drawLineListFromBitmap_FUN_0042f260(void);
void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_0042f330(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode);
void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_0042f600(int x0,int y0,int x1,int y1,int color);
void cockpit_ckptutil_c_FUN_0042f8c0(int param_1,int param_2,float param_3,int param_4);
void cockpit_ckptutil_c_FUN_0042fd60(int param_1,int param_2,float param_3,int param_4);

