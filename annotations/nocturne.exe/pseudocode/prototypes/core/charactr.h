#pragma once

// Function prototypes for core/charactr.cpp
// Generated from Ghidra function signatures

// Original: core_charactr.cpp_staticInit_FUN_00423ea0
// Address: 00423ea0
void __cdecl staticInit(void);

// Original: core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
// Address: 00423ed0
SDamageInfo * __cdecl SDamageInfo::ctor(SDamageInfo *this_ptr);

// Original: core_charactr.cpp_CCharacter_ctor_FUN_00423f40
// Address: 00423f40
CCharacter * __cdecl CCharacter::ctor(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_setup_FUN_00424260
// Address: 00424260
void __cdecl CCharacter::setup(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_archive_FUN_004244b0
// Address: 004244b0
void __cdecl CCharacter::archive(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004246e0
// Address: 004246e0
void __cdecl CCharacter::setPositionAndOrientation(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation);

// Original: core_charactr.cpp_clampFloat_FUN_00424730
// Address: 00424730
float __cdecl clampFloat(float value,float limit);

// Original: core_charactr.cpp_FUN_00424780
// Address: 00424780
float FUN_00424780(void);

// Original: core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
// Address: 004247f0
int __cdecl CCharacter::walkToPoint(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance);

// Original: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00424e90
// Address: 00424e90
void __cdecl CCharacter::turnTowardPoint(CCharacter *this_ptr,CVector3f *target);

// Original: core_charactr.cpp_CCharacter_kill_FUN_00424f40
// Address: 00424f40
void __cdecl CCharacter::kill(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force);

// Original: core_charactr.cpp_CCharacter_applyDamage_FUN_00424ff0
// Address: 00424ff0
void CCharacter::applyDamage(int param_1,EDamageType param_2,float param_3);

// Original: core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
// Address: 00425050
void __cdecl CCharacter::moveAndCollide(CCharacter *this_ptr,CVector3f *velocity);

// Original: core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
// Address: 00425960
int __cdecl CCharacter::isOnGround(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
// Address: 004259a0
void __cdecl CCharacter::preProcess(CCharacter *this_ptr);

// Original: core_charactr.cpp_FUN_004259f0
// Address: 004259f0
int __cdecl FUN_004259f0(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
// Address: 00425c20
void __cdecl CCharacter::renderCharacter(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0
// Address: 00425cc0
void __cdecl CCharacter::renderCollision(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
// Address: 00426440
int __cdecl CCharacter::renderOpaque(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderBackground_FUN_00426510
// Address: 00426510
void __cdecl CCharacter::renderBackground(CCharacter *this_ptr,int layer_flag);

// Original: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_00426570
// Address: 00426570
int CCharacter::getPartDominantBone(int param_1,int param_2);

// Original: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0
// Address: 004265a0
void __cdecl CCharacter::renderAttachedModels(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0
// Address: 004266a0
void __cdecl CCharacter::spawnFireOnBone(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index);

// Original: core_charactr.cpp_CCharacter_processFire_FUN_004269b0
// Address: 004269b0
void __cdecl CCharacter::processFire(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80
// Address: 00426e80
void __cdecl CCharacter::renderBurn(CCharacter *this_ptr);

// Original: core_charactr.cpp_FUN_004270e0
// Address: 004270e0
void __cdecl FUN_004270e0(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260
// Address: 00427260
int __cdecl CCharacter::renderTransparent(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderFlames_FUN_00427290
// Address: 00427290
void __cdecl CCharacter::renderFlames(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310
// Address: 00427310
void __cdecl CCharacter::addDamageDecal(CCharacter *this_ptr);

// Original: core_charactr.cpp_FUN_00427730
// Address: 00427730
void __cdecl FUN_00427730(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero);

// Original: core_charactr.cpp_CCharacter_processDamageDecals_FUN_004277f0
// Address: 004277f0
void __cdecl CCharacter::processDamageDecals(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
// Address: 004278e0
void __cdecl CCharacter::spawnGoreAtBone(CCharacter *this_ptr,int part_index,int bone_index,float chance);

// Original: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427990
// Address: 00427990
void __cdecl CCharacter::spawnBloodAtBone(CCharacter *this_ptr,int part_index,int bone_index,float chance);

// Original: core_charactr.cpp_CCharacter_getBoundingBox_FUN_00427a20
// Address: 00427a20
undefined4 * CCharacter::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_charactr.cpp_FUN_00427a60
// Address: 00427a60
void __cdecl FUN_00427a60(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_explode_FUN_00427ab0
// Address: 00427ab0
void __cdecl CCharacter::explode(CCharacter *this_ptr,CVector3f *impact_point,float impact_force);

// Original: core_charactr.cpp_CCharacter_dismember_FUN_00427b60
// Address: 00427b60
void __cdecl CCharacter::dismember(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background);

// Original: core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
// Address: 00427da0
ECollisionType __cdecl CCharacter::getCollisionType(CCharacter *this_ptr,SCollisionInfo *collision_info);

// Original: core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40
// Address: 00427e40
void __cdecl CCharacter::detachBodyPart(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background);

// Original: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
// Address: 00427eb0
void __cdecl CCharacter::dismemberPartInternal(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background);

// Original: core_charactr.cpp_CCharacter_isGrabbable_FUN_004280a0
// Address: 004280a0
int __cdecl CCharacter::isGrabbable(CCharacter *this_ptr,CDemonActor *grabber);

// Original: core_charactr.cpp_CCharacter_releaseFromGrab_FUN_004280b0
// Address: 004280b0
void __cdecl CCharacter::releaseFromGrab(CCharacter *this_ptr);

// Original: core_charactr.cpp_FUN_004280e0
// Address: 004280e0
void FUN_004280e0(void);

// Original: core_charactr.cpp_CCharacter_getGrabber_FUN_004280f0
// Address: 004280f0
undefined4 CCharacter::getGrabber(int param_1);

// Original: core_charactr.cpp_CCharacter_drop_FUN_00428100
// Address: 00428100
void __cdecl CCharacter::drop(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position);

// Original: core_charactr.cpp_CCharacter_attractActorToward_FUN_00428160
// Address: 00428160
undefined4 CCharacter::attractActorToward(int param_1,CDemonActor *param_2,CVector3f *param_3);

// Original: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260
// Address: 00428260
undefined4 CCharacter::checkCylinderCollisionWorld(CCharacter *param_1,CVector3f *param_2,float param_3,SDamageInfo *param_4);

// Original: core_charactr.cpp_CCharacter_testDamageLine_FUN_004282d0
// Address: 004282d0
undefined4 CCharacter::testDamageLine(CCharacter *param_1,CVector3f *param_2,CVector3f *param_3,SDamageInfo *param_4,CVector3f *param_5);

// Original: core_charactr.cpp_CCharacter_processDamage_FUN_00428510
// Address: 00428510
void __cdecl CCharacter::processDamage(CCharacter *this_ptr,SDamageInfo *damage_info);

// Original: core_charactr.cpp_FUN_004286d0
// Address: 004286d0
void FUN_004286d0(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_CCharacter_getDeathState_FUN_00428710
// Address: 00428710
EDeathState __cdecl CCharacter::getDeathState(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_followActor_FUN_00428780
// Address: 00428780
void __cdecl CCharacter::followActor(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state);

// Original: core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0
// Address: 00428ab0
void __cdecl CCharacter::setWalkTarget(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance);

// Original: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_00428b60
// Address: 00428b60
void CCharacter::setWalkTargetImmediate(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_00428bb0
// Address: 00428bb0
void CCharacter::setWalkTimeout(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_CCharacter_isWalkComplete_FUN_00428bc0
// Address: 00428bc0
undefined4 CCharacter::isWalkComplete(int param_1);

// Original: core_charactr.cpp_CCharacter_canWalk_FUN_00428bf0
// Address: 00428bf0
undefined4 CCharacter::canWalk(void);

// Original: core_charactr.cpp_FUN_00428c00
// Address: 00428c00
int __cdecl FUN_00428c00(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_00428ee0
// Address: 00428ee0
void __cdecl CCharacter::setWalkTimeout(CCharacter *this_ptr,float timeout);

// Original: core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00428ef0
// Address: 00428ef0
void CCharacter::clearDoorTarget(int param_1);

// Original: core_charactr.cpp_CCharacter_hasDoorTarget_FUN_00428f20
// Address: 00428f20
bool CCharacter::hasDoorTarget(int param_1);

// Original: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
// Address: 00428f40
void __cdecl CCharacter::pickupObjectNow(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time);

// Original: core_charactr.cpp_CCharacter_computePickup_FUN_00429010
// Address: 00429010
void __cdecl CCharacter::computePickup(CCharacter *this_ptr,int hand_index,float blend_time);

// Original: core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00429170
// Address: 00429170
void __cdecl CCharacter::dropCarriedObject(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction);

// Original: core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0
// Address: 004291f0
void __cdecl CCharacter::dropAllCarriedObjects(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220
// Address: 00429220
void __cdecl CCharacter::updateCarriedObjects(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490
// Address: 00429490
void CCharacter::getCarryObjToBodyXForm(int param_1,int param_2);

// Original: core_charactr.cpp_CCharacter_isCarryingAnything_FUN_004294f0
// Address: 004294f0
int __cdecl CCharacter::isCarryingAnything(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_initGesture_FUN_00429520
// Address: 00429520
int __cdecl CCharacter::initGesture(CCharacter *this_ptr,char *motion_name);

// Original: core_charactr.cpp_CCharacter_applyGesture_FUN_00429560
// Address: 00429560
void __cdecl CCharacter::applyGesture(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_advanceGesture_FUN_00429660
// Address: 00429660
void __cdecl CCharacter::advanceGesture(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0
// Address: 004296c0
void __cdecl CCharacter::computeBoundingBox(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730
// Address: 00429730
void __cdecl CCharacter::findSomethingToLookAt(CCharacter *this_ptr,float delta_time,int disable_search);

// Original: core_charactr.cpp_CCharacter_applyLookAt_FUN_00429e60
// Address: 00429e60
void __cdecl CCharacter::applyLookAt(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429f60
// Address: 00429f60
void __cdecl CCharacter::setLookAtTarget(CCharacter *this_ptr,CDemonActor *target);

// Original: core_charactr.cpp_CCharacter_calculateChecksum_FUN_00429f70
// Address: 00429f70
void CCharacter::calculateChecksum(CDemonActor *param_1,uint *param_2);

// Original: core_charactr.cpp_CCharacter_canLookAt_FUN_00429fe0
// Address: 00429fe0
undefined4 CCharacter::canLookAt(int param_1);

// Original: core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060
// Address: 0042a060
void __cdecl CCharacter::setOrientation(CCharacter *this_ptr,UOrientationVector *orientation);

// Original: core_charactr.cpp_CCharacter_spawnFlies_FUN_0042a120
// Address: 0042a120
void CCharacter::spawnFlies(CDemonActor *param_1,int param_2,float param_3);

// Original: core_charactr.cpp_FUN_0042a150
// Address: 0042a150
void __cdecl FUN_0042a150(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0
// Address: 0042a1e0
int __cdecl CCharacter::updateWanderToWaypoint(CCharacter *this_ptr,float delta_time,char *pattern);

// Original: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500
// Address: 0042a500
int __cdecl CCharacter::advanceLayerAction(CCharacter *this_ptr,float *remaining_time,int target_bone_index);

// Original: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042a700
// Address: 0042a700
void CCharacter::blendLayerActionMotion(int param_1,float param_2,int param_3);

// Original: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760
// Address: 0042a760
void __cdecl CCharacter::addLayerAction(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction);

// Original: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800
// Address: 0042a800
void __cdecl CCharacter::buildLayerActionTransitionCosts(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
// Address: 0042a9d0
float __cdecl CCharacter::getLayerActionBlendWeight(CCharacter *this_ptr,int state_index);

// Original: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50
// Address: 0042aa50
void __cdecl CCharacter::chooseNextLayerAction(CCharacter *this_ptr,int layer_action_index);

// Original: core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0
// Address: 0042abd0
void __cdecl CCharacter::processSmoking(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
// Address: 0042add0
int __cdecl CCharacter::processMotion(CCharacter *this_ptr,int bone_index);

// Original: core_charactr.cpp_FUN_0042af70
// Address: 0042af70
int __cdecl FUN_0042af70(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
// Address: 0042b490
void __cdecl CCharacter::playSoundWithCooldown(CCharacter *this_ptr,char *sound_name);

// Original: core_charactr.cpp_divideVector_FUN_0042b4d0
// Address: 0042b4d0
CVector3f * __cdecl divideVector(CVector3f *src,CVector3f *dst,float *scalar);

// Original: core_charactr.cpp_setActorXPos_FUN_0042b500
// Address: 0042b500
void __cdecl setActorXPos(CDemonActor *actor,float x);

// Original: core_charactr.cpp_projectPointToVertex_FUN_0042b510
// Address: 0042b510
void __cdecl projectPointToVertex(SProjectedVertex **vertex_array,int vertex_index,CVector3f *world_position);

// Original: core_charactr.cpp_FUN_0042b570
// Address: 0042b570
void FUN_0042b570(void);

// Original: core_charactr.cpp_FUN_0042b5a0
// Address: 0042b5a0
undefined4 FUN_0042b5a0(void);

// Original: core_charactr.cpp_getActorCreateEvent_FUN_0042b5b0
// Address: 0042b5b0
char * __cdecl getActorCreateEvent(CDemonActor *actor);

// Original: core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0
// Address: 0042b5c0
float __cdecl getGameDeltaTime(CGame *game_ptr);

// Original: core_charactr.cpp_CCharacter_dtor_FUN_0042b5d0
// Address: 0042b5d0
CCharacter * __cdecl CCharacter::dtor(CCharacter *this_ptr,uint flags);

// Original: core_charactr.cpp_SFire_ctor_FUN_0042b690
// Address: 0042b690
undefined4 SFire::ctor(undefined4 param_1);

// Original: core_charactr.cpp_SPose_ctor_FUN_0042b6a0
// Address: 0042b6a0
SPose * __cdecl SPose::ctor(SPose *this_ptr);

// Original: core_charactr.cpp_SPose_dtor_FUN_0042b6b0
// Address: 0042b6b0
SPose * __cdecl SPose::dtor(SPose *this_ptr,uint flags);

// Original: core_charactr.cpp_FUN_0042b6c0
// Address: 0042b6c0
undefined4 * FUN_0042b6c0(void);

// Original: core_charactr.cpp_FUN_0042b6d0
// Address: 0042b6d0
undefined4 * FUN_0042b6d0(void);

// Original: core_charactr.cpp_FUN_0042b6e0
// Address: 0042b6e0
undefined4 * FUN_0042b6e0(void);
