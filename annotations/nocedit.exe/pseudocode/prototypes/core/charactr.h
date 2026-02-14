#pragma once

// Function prototypes for core/charactr.cpp
// Generated from Ghidra function signatures

// Original: core_charactr.cpp_staticInit_FUN_00427d80
// Address: 00427d80
void __cdecl staticInit(void);

// Original: core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
// Address: 00427db0
SDamageInfo * __cdecl SDamageInfo::ctor(SDamageInfo *this_ptr);

// Original: core_charactr.cpp_CCharacter_ctor_FUN_00427e20
// Address: 00427e20
CCharacter * __cdecl CCharacter::ctor(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_setup_FUN_00428140
// Address: 00428140
void __cdecl CCharacter::setup(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_archive_FUN_004283a0
// Address: 004283a0
void __cdecl CCharacter::archive(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
// Address: 004285d0
void __cdecl CCharacter::setPositionAndOrientation(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation);

// Original: core_charactr.cpp_clampFloat_FUN_00428620
// Address: 00428620
float __cdecl clampFloat(float value,float limit);

// Original: core_charactr.cpp_clampNormalizedAngle_FUN_00428670
// Address: 00428670
float __cdecl clampNormalizedAngle(float angle,float limit);

// Original: core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
// Address: 004286e0
int __cdecl CCharacter::walkToPoint(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance);

// Original: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00428d80
// Address: 00428d80
void __cdecl CCharacter::turnTowardPoint(CCharacter *this_ptr,CVector3f *target);

// Original: core_charactr.cpp_CCharacter_kill_FUN_00428e30
// Address: 00428e30
void __cdecl CCharacter::kill(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force);

// Original: core_charactr.cpp_CCharacter_applyDamage_FUN_00428ee0
// Address: 00428ee0
void __cdecl CCharacter::applyDamage(CCharacter *this_ptr,int damage_type,float damage_amount);

// Original: core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
// Address: 00428f40
void __cdecl CCharacter::moveAndCollide(CCharacter *this_ptr,CVector3f *velocity);

// Original: core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
// Address: 004297e0
int __cdecl CCharacter::isOnGround(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_preProcess_FUN_00429820
// Address: 00429820
void __cdecl CCharacter::preProcess(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_process_FUN_00429870
// Address: 00429870
int __cdecl CCharacter::process(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0
// Address: 00429aa0
void __cdecl CCharacter::renderCharacter(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderCollision_FUN_00429b40
// Address: 00429b40
void __cdecl CCharacter::renderCollision(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
// Address: 0042a2c0
int __cdecl CCharacter::renderOpaque(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderBackground_FUN_0042a390
// Address: 0042a390
void __cdecl CCharacter::renderBackground(CCharacter *this_ptr,int layer_flag);

// Original: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_0042a3f0
// Address: 0042a3f0
int __cdecl CCharacter::getPartDominantBone(CCharacter *this_ptr,int part_index);

// Original: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042a420
// Address: 0042a420
void __cdecl CCharacter::renderAttachedModels(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520
// Address: 0042a520
void __cdecl CCharacter::spawnFireOnBone(CCharacter *this_ptr,int bone_index,int target_bone_index);

// Original: core_charactr.cpp_CCharacter_processFire_FUN_0042a830
// Address: 0042a830
void __cdecl CCharacter::processFire(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_renderBurn_FUN_0042ad00
// Address: 0042ad00
void __cdecl CCharacter::renderBurn(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderEthereal_FUN_0042af60
// Address: 0042af60
void __cdecl CCharacter::renderEthereal(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0
// Address: 0042b0e0
int __cdecl CCharacter::renderTransparent(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_renderFlames_FUN_0042b110
// Address: 0042b110
void __cdecl CCharacter::renderFlames(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_addDamageDecal_FUN_0042b190
// Address: 0042b190
void __cdecl CCharacter::addDamageDecal(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0
// Address: 0042b5b0
void __cdecl CCharacter::igniteBone(CCharacter *this_ptr,CVector3f *position,int fire_type,float spread_rate,int allow_hero,int param_6);

// Original: core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670
// Address: 0042b670
void __cdecl CCharacter::processDamageDecals(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
// Address: 0042b760
void __cdecl CCharacter::spawnGoreAtBone(CCharacter *this_ptr,int part_index,int bone_index,float chance);

// Original: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
// Address: 0042b810
void __cdecl CCharacter::spawnBloodAtBone(CCharacter *this_ptr,int part_index,int bone_index,float chance);

// Original: core_charactr.cpp_CCharacter_getBoundingBox_FUN_0042b8a0
// Address: 0042b8a0
CBoundingBox3D * __cdecl CCharacter::getBoundingBox(CCharacter *this_ptr,CBoundingBox3D *out_box);

// Original: core_charactr.cpp_CCharacter_shatter_FUN_0042b8e0
// Address: 0042b8e0
void __cdecl CCharacter::shatter(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_explode_FUN_0042b930
// Address: 0042b930
void __cdecl CCharacter::explode(CCharacter *this_ptr,CVector3f *impact_point,float impact_force);

// Original: core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0
// Address: 0042b9e0
void __cdecl CCharacter::dismember(CCharacter *this_ptr,CVector3f *impact_point,float impact_force);

// Original: core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
// Address: 0042bc20
int __cdecl CCharacter::hasCollision(CCharacter *this_ptr,SCollisionInfo *collision_info);

// Original: core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0
// Address: 0042bcc0
void __cdecl CCharacter::detachBodyPart(CCharacter *this_ptr,int part_index);

// Original: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
// Address: 0042bd30
void __cdecl CCharacter::dismemberPartInternal(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background);

// Original: core_charactr.cpp_CCharacter_isGrabbable_FUN_0042bf30
// Address: 0042bf30
int __cdecl CCharacter::isGrabbable(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_releaseFromGrab_FUN_0042bf40
// Address: 0042bf40
void __cdecl CCharacter::releaseFromGrab(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_releaseVictim_FUN_0042bf70
// Address: 0042bf70
void __cdecl CCharacter::releaseVictim(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_getGrabber_FUN_0042bf80
// Address: 0042bf80
CDemonActor * __cdecl CCharacter::getGrabber(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_drop_FUN_0042bf90
// Address: 0042bf90
void __cdecl CCharacter::drop(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position);

// Original: core_charactr.cpp_CCharacter_attractActorToward_FUN_0042c010
// Address: 0042c010
int __cdecl CCharacter::attractActorToward(CCharacter *this_ptr,CDemonActor *actor,CVector3f *target_local_point);

// Original: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110
// Address: 0042c110
int __cdecl CCharacter::checkCylinderCollisionWorld(CCharacter *this_ptr,CVector3f *world_point,float tolerance,SDamageInfo *damage_info);

// Original: core_charactr.cpp_CCharacter_testDamageLine_FUN_0042c180
// Address: 0042c180
int __cdecl CCharacter::testDamageLine(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit);

// Original: core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
// Address: 0042c3c0
void __cdecl CCharacter::processDamage(CCharacter *this_ptr,SDamageInfo *damage_info);

// Original: core_charactr.cpp_CCharacter_getDeathState_FUN_0042c580
// Address: 0042c580
int __cdecl CCharacter::getDeathState(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0
// Address: 0042c5f0
void __cdecl CCharacter::followActor(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state);

// Original: core_charactr.cpp_CCharacter_setWalkTarget_FUN_0042c920
// Address: 0042c920
void __cdecl CCharacter::setWalkTarget(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance);

// Original: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0
// Address: 0042c9d0
void __cdecl CCharacter::setWalkTargetImmediate(CCharacter *this_ptr,CDemonActor *target);

// Original: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_0042ca20
// Address: 0042ca20
void __cdecl CCharacter::setWalkTimeout(CCharacter *this_ptr,float timeout);

// Original: core_charactr.cpp_CCharacter_isWalkComplete_FUN_0042ca30
// Address: 0042ca30
int __cdecl CCharacter::isWalkComplete(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_canWalk_FUN_0042ca60
// Address: 0042ca60
int __cdecl CCharacter::canWalk(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
// Address: 0042ca70
int __cdecl CCharacter::processWalking(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_setDoorTarget_FUN_0042cd50
// Address: 0042cd50
void __cdecl CCharacter::setDoorTarget(CCharacter *this_ptr,CDoor *door_target);

// Original: core_charactr.cpp_CCharacter_clearDoorTarget_FUN_0042cd60
// Address: 0042cd60
void __cdecl CCharacter::clearDoorTarget(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_hasDoorTarget_FUN_0042cd90
// Address: 0042cd90
int __cdecl CCharacter::hasDoorTarget(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
// Address: 0042cdb0
void __cdecl CCharacter::pickupObjectNow(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time);

// Original: core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
// Address: 0042ce80
void __cdecl CCharacter::computePickup(CCharacter *this_ptr,int hand_index,float blend_time);

// Original: core_charactr.cpp_CCharacter_dropCarriedObject_FUN_0042cfe0
// Address: 0042cfe0
void __cdecl CCharacter::dropCarriedObject(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction);

// Original: core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060
// Address: 0042d060
void __cdecl CCharacter::dropAllCarriedObjects(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090
// Address: 0042d090
void __cdecl CCharacter::updateCarriedObjects(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300
// Address: 0042d300
void __stack2_esi CCharacter::getCarryObjToBodyXForm(CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_charactr.cpp_CCharacter_isCarryingAnything_FUN_0042d360
// Address: 0042d360
int __cdecl CCharacter::isCarryingAnything(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_initGesture_FUN_0042d390
// Address: 0042d390
int __cdecl CCharacter::initGesture(CCharacter *this_ptr,char *motion_name);

// Original: core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0
// Address: 0042d3d0
void __cdecl CCharacter::applyGesture(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_advanceGesture_FUN_0042d4d0
// Address: 0042d4d0
void __cdecl CCharacter::advanceGesture(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_0042d530
// Address: 0042d530
void __cdecl CCharacter::computeBoundingBox(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
// Address: 0042d5a0
void __cdecl CCharacter::findSomethingToLookAt(CCharacter *this_ptr,float delta_time,int param_3);

// Original: core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
// Address: 0042dcd0
void __cdecl CCharacter::applyLookAt(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_0042ddd0
// Address: 0042ddd0
void __cdecl CCharacter::setLookAtTarget(CCharacter *this_ptr,CDemonActor *target);

// Original: core_charactr.cpp_CCharacter_calculateChecksum_FUN_0042dde0
// Address: 0042dde0
void __cdecl CCharacter::calculateChecksum(CCharacter *this_ptr,uint *out_crc);

// Original: core_charactr.cpp_CCharacter_canLookAt_FUN_0042de50
// Address: 0042de50
int __cdecl CCharacter::canLookAt(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0
// Address: 0042ded0
void __cdecl CCharacter::setOrientation(CCharacter *this_ptr,UOrientationVector *orientation);

// Original: core_charactr.cpp_CCharacter_spawnFlies_FUN_0042df90
// Address: 0042df90
void __cdecl CCharacter::spawnFlies(CCharacter *this_ptr,int fly_count,float spawn_radius);

// Original: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
// Address: 0042dfc0
void __cdecl CCharacter::applyGestureLookAt(CCharacter *this_ptr,float delta_time,float param_3);

// Original: core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050
// Address: 0042e050
int __cdecl CCharacter::updateWanderToWaypoint(CCharacter *this_ptr,float delta_time,char *pattern);

// Original: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
// Address: 0042e370
int __cdecl CCharacter::advanceLayerAction(CCharacter *this_ptr,float *remaining_time,int target_bone_index);

// Original: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042e570
// Address: 0042e570
void __cdecl CCharacter::blendLayerActionMotion(CCharacter *this_ptr,float blend_weight,int blend_mode);

// Original: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
// Address: 0042e5d0
void __cdecl CCharacter::addLayerAction(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction);

// Original: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670
// Address: 0042e670
void __cdecl CCharacter::buildLayerActionTransitionCosts(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
// Address: 0042e840
float __cdecl CCharacter::getLayerActionBlendWeight(CCharacter *this_ptr,int state_index);

// Original: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
// Address: 0042e8c0
void __cdecl CCharacter::chooseNextLayerAction(CCharacter *this_ptr,int layer_action_index);

// Original: core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40
// Address: 0042ea40
void __cdecl CCharacter::processSmoking(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
// Address: 0042ec40
int __cdecl CCharacter::processMotion(CCharacter *this_ptr,uint event_id);

// Original: core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
// Address: 0042ede0
int __cdecl CCharacter::moveOutOfHeroWay(CCharacter *this_ptr,float delta_time);

// Original: core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
// Address: 0042f300
void __cdecl CCharacter::playSoundWithCooldown(CCharacter *this_ptr,char *sound_name);

// Original: core_charactr.cpp_CCharacter_propertyDisplayCallback_FUN_0042f340
// Address: 0042f340
void __cdecl CCharacter::propertyDisplayCallback(CCharacter *this_ptr,CActorProperty *property,char *output_buffer);

// Original: core_charactr.cpp_CCharacter_propertyActionCallback_FUN_0042f3e0
// Address: 0042f3e0
int __cdecl CCharacter::propertyActionCallback(CCharacter *this_ptr,CActorProperty *property);

// Original: core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730
// Address: 0042f730
void __cdecl CCharacter::getPropertyList(CCharacter *this_ptr,CActorPropertyList *property_list);

// Original: core_charactr.cpp_CCharacter_processInEditor_FUN_0042f800
// Address: 0042f800
void __cdecl CCharacter::processInEditor(CCharacter *this_ptr);

// Original: core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0
// Address: 0042f8a0
void __cdecl CCharacter::onActorDeleted(CCharacter *this_ptr,CDemonActor *deleted_actor);

// Original: core_charactr.cpp_divideVector_FUN_0042f8f0
// Address: 0042f8f0
CVector3f * __cdecl divideVector(CVector3f *src,CVector3f *dst,float *scalar);

// Original: core_charactr.cpp_FUN_0042f920
// Address: 0042f920
void __cdecl FUN_0042f920(void);

// Original: core_charactr.cpp_FUN_0042f930
// Address: 0042f930
void __cdecl FUN_0042f930(void);

// Original: core_charactr.cpp_FUN_0042f990
// Address: 0042f990
void __cdecl FUN_0042f990(void);

// Original: core_charactr.cpp_FUN_0042f9c0
// Address: 0042f9c0
int __cdecl FUN_0042f9c0(void);

// Original: core_charactr.cpp_FUN_0042f9d0
// Address: 0042f9d0
int __cdecl FUN_0042f9d0(void);

// Original: core_charactr.cpp_getGameDeltaTime_FUN_0042f9e0
// Address: 0042f9e0
float __cdecl getGameDeltaTime(CGame *game_ptr);

// Original: core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0
// Address: 0042f9f0
CDemonActor * __cdecl CCharacter::dtor(CCharacter *this_ptr,uint flags);

// Original: core_charactr.cpp_SFire_ctor_FUN_0042fab0
// Address: 0042fab0
SFire * __cdecl SFire::ctor(SFire *this_ptr);

// Original: core_charactr.cpp_SPose_ctor_FUN_0042fac0
// Address: 0042fac0
SPose * __cdecl SPose::ctor(SPose *this_ptr);

// Original: core_charactr.cpp_SPose_dtor_FUN_0042fad0
// Address: 0042fad0
SPose * __cdecl SPose::dtor(SPose *this_ptr,uint flags);

// Original: core_charactr.cpp_copyFloat_FUN_0042fae0
// Address: 0042fae0
float * __cdecl copyFloat(float *dst,float *src);

// Original: core_charactr.cpp_copyFloat_FUN_0042faf0
// Address: 0042faf0
float * __cdecl copyFloat(float *dst,float *src);

// Original: core_charactr.cpp_copyFloat_FUN_0042fb00
// Address: 0042fb00
float * __cdecl copyFloat(float *dst,float *src);
