#pragma once

// Function prototypes for core/charactr.cpp
// Generated from Ghidra function signatures

// Original: core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
// Address: 00423ed0
void __cdecl SDamageInfo::ctor(undefined4 *param_1);

// Original: core_charactr.cpp_CCharacter_ctor_FUN_00423f40
// Address: 00423f40
int __cdecl CCharacter::ctor(undefined4 param_1);

// Original: core_charactr.cpp_CCharacter_setup_FUN_00424260
// Address: 00424260
void __cdecl CCharacter::setup(int param_1);

// Original: core_charactr.cpp_CCharacter_archive_FUN_004244b0
// Address: 004244b0
void __cdecl CCharacter::archive(int param_1);

// Original: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004246e0
// Address: 004246e0
void __cdecl CCharacter::setPositionAndOrientation(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
// Address: 004247f0
undefined4 __cdecl CCharacter::walkToPoint(int param_1,float *param_2,int param_3,float *param_4,float param_5,float param_6);

// Original: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00424e90
// Address: 00424e90
void __cdecl CCharacter::turnTowardPoint(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_CCharacter_kill_FUN_00424f40
// Address: 00424f40
void __cdecl CCharacter::kill(int param_1,undefined4 param_2,undefined4 *param_3,float param_4);

// Original: core_charactr.cpp_CCharacter_applyDamage_FUN_00424ff0
// Address: 00424ff0
void CCharacter::applyDamage(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
// Address: 00425050
void __cdecl CCharacter::moveAndCollide(int param_1,uint *param_2);

// Original: core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
// Address: 00425960
undefined4 __cdecl CCharacter::isOnGround(int param_1);

// Original: core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
// Address: 004259a0
void __cdecl CCharacter::preProcess(int param_1);

// Original: core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
// Address: 00425c20
void __cdecl CCharacter::renderCharacter(int param_1);

// Original: core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0
// Address: 00425cc0
void __cdecl CCharacter::renderCollision(int param_1);

// Original: core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
// Address: 00426440
int __cdecl CCharacter::renderOpaque(int param_1);

// Original: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_00426570
// Address: 00426570
undefined4 CCharacter::getPartDominantBone(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0
// Address: 004265a0
void __cdecl CCharacter::renderAttachedModels(int param_1);

// Original: core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0
// Address: 004266a0
void __cdecl CCharacter::spawnFireOnBone(int param_1,int param_2,int param_3);

// Original: core_charactr.cpp_CCharacter_processFire_FUN_004269b0
// Address: 004269b0
void __cdecl CCharacter::processFire(int param_1,float param_2);

// Original: core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80
// Address: 00426e80
void __cdecl CCharacter::renderBurn(int param_1);

// Original: core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260
// Address: 00427260
undefined4 __cdecl CCharacter::renderTransparent(int param_1);

// Original: core_charactr.cpp_CCharacter_renderFlames_FUN_00427290
// Address: 00427290
void __cdecl CCharacter::renderFlames(int param_1);

// Original: core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310
// Address: 00427310
void __cdecl CCharacter::addDamageDecal(int param_1);

// Original: core_charactr.cpp_CCharacter_processDamageDecals_FUN_004277f0
// Address: 004277f0
void __cdecl CCharacter::processDamageDecals(int param_1);

// Original: core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
// Address: 004278e0
void CCharacter::spawnGoreAtBone(int param_1,int param_2,undefined4 param_3,undefined4 param_4);

// Original: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427990
// Address: 00427990
void __cdecl CCharacter::spawnBloodAtBone(int param_1,int param_2,undefined4 param_3,undefined4 param_4);

// Original: core_charactr.cpp_CCharacter_explode_FUN_00427ab0
// Address: 00427ab0
void __cdecl CCharacter::explode(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_charactr.cpp_CCharacter_dismember_FUN_00427b60
// Address: 00427b60
void __cdecl CCharacter::dismember(int param_1,float *param_2,float param_3,undefined4 param_4);

// Original: core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
// Address: 00427da0
undefined4 __cdecl CCharacter::getCollisionType(int param_1,int *param_2);

// Original: core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40
// Address: 00427e40
void __cdecl CCharacter::detachBodyPart(int param_1,int param_2,undefined4 param_3,undefined4 param_4);

// Original: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
// Address: 00427eb0
void __cdecl CCharacter::dismemberPartInternal(int param_1,int param_2,int param_3,undefined4 param_4);

// Original: core_charactr.cpp_CCharacter_isGrabbable_FUN_004280a0
// Address: 004280a0
undefined4 __cdecl CCharacter::isGrabbable(void);

// Original: core_charactr.cpp_CCharacter_releaseFromGrab_FUN_004280b0
// Address: 004280b0
undefined4 __cdecl CCharacter::releaseFromGrab(int param_1);

// Original: core_charactr.cpp_CCharacter_attractActorToward_FUN_00428160
// Address: 00428160
undefined4 CCharacter::attractActorToward(int param_1,int param_2,undefined4 param_3);

// Original: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260
// Address: 00428260
undefined4 CCharacter::checkCylinderCollisionWorld(int param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: core_charactr.cpp_CCharacter_testDamageLine_FUN_004282d0
// Address: 004282d0
undefined4 CCharacter::testDamageLine(int param_1,float *param_2,float *param_3,int param_4,undefined4 *param_5);

// Original: core_charactr.cpp_CCharacter_processDamage_FUN_00428510
// Address: 00428510
void __cdecl CCharacter::processDamage(int param_1,undefined4 *param_2);

// Original: core_charactr.cpp_CCharacter_getDeathState_FUN_00428710
// Address: 00428710
undefined4 __cdecl CCharacter::getDeathState(int param_1);

// Original: core_charactr.cpp_CCharacter_followActor_FUN_00428780
// Address: 00428780
void __cdecl CCharacter::followActor(int param_1,int param_2,float param_3,float param_4,int *param_5);

// Original: core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0
// Address: 00428ab0
void __cdecl CCharacter::setWalkTarget(int param_1,int param_2,undefined4 param_3,undefined4 param_4);

// Original: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_00428b60
// Address: 00428b60
void CCharacter::setWalkTargetImmediate(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_CCharacter_isWalkComplete_FUN_00428bc0
// Address: 00428bc0
undefined4 CCharacter::isWalkComplete(int param_1);

// Original: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_00428ee0
// Address: 00428ee0
void CCharacter::setWalkTimeout(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
// Address: 00428f40
void __cdecl CCharacter::pickupObjectNow(int param_1,int param_2,int param_3,undefined4 param_4);

// Original: core_charactr.cpp_CCharacter_computePickup_FUN_00429010
// Address: 00429010
void __cdecl CCharacter::computePickup(int param_1,int param_2,float param_3);

// Original: core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00429170
// Address: 00429170
void __cdecl CCharacter::dropCarriedObject(int param_1,int param_2,int param_3);

// Original: core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0
// Address: 004291f0
void __cdecl CCharacter::dropAllCarriedObjects(int param_1);

// Original: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220
// Address: 00429220
void __cdecl CCharacter::updateCarriedObjects(int param_1,float param_2);

// Original: core_charactr.cpp_CCharacter_isCarryingAnything_FUN_004294f0
// Address: 004294f0
undefined4 __cdecl CCharacter::isCarryingAnything(int param_1);

// Original: core_charactr.cpp_CCharacter_initGesture_FUN_00429520
// Address: 00429520
bool __cdecl CCharacter::initGesture(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_CCharacter_applyGesture_FUN_00429560
// Address: 00429560
void __cdecl CCharacter::applyGesture(int param_1);

// Original: core_charactr.cpp_CCharacter_advanceGesture_FUN_00429660
// Address: 00429660
void __cdecl CCharacter::advanceGesture(int param_1,float param_2);

// Original: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0
// Address: 004296c0
void __cdecl CCharacter::computeBoundingBox(int param_1);

// Original: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730
// Address: 00429730
void __cdecl CCharacter::findSomethingToLookAt(int param_1,float param_2,int param_3);

// Original: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429f60
// Address: 00429f60
void __cdecl CCharacter::setLookAtTarget(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_CCharacter_canLookAt_FUN_00429fe0
// Address: 00429fe0
undefined4 CCharacter::canLookAt(int param_1);

// Original: core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060
// Address: 0042a060
void __cdecl CCharacter::setOrientation(int param_1,undefined4 *param_2);

// Original: core_charactr.cpp_CCharacter_spawnFlies_FUN_0042a120
// Address: 0042a120
void CCharacter::spawnFlies(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0
// Address: 0042a1e0
undefined4 __cdecl CCharacter::updateWanderToWaypoint(int param_1,float param_2,char *param_3);

// Original: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500
// Address: 0042a500
int CCharacter::advanceLayerAction(int param_1,float *param_2,int param_3);

// Original: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042a700
// Address: 0042a700
void CCharacter::blendLayerActionMotion(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760
// Address: 0042a760
void __cdecl CCharacter::addLayerAction(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5);

// Original: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800
// Address: 0042a800
void __cdecl CCharacter::buildLayerActionTransitionCosts(int param_1);

// Original: core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
// Address: 0042a9d0
float CCharacter::getLayerActionBlendWeight(int param_1,int param_2);

// Original: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50
// Address: 0042aa50
void __cdecl CCharacter::chooseNextLayerAction(int param_1,int param_2);

// Original: core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0
// Address: 0042abd0
void __cdecl CCharacter::processSmoking(int param_1,float param_2);

// Original: core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
// Address: 0042add0
void __cdecl CCharacter::processMotion(int param_1,uint param_2);

// Original: core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
// Address: 0042b490
void __cdecl CCharacter::playSoundWithCooldown(int param_1,undefined4 param_2);

// Original: core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0
// Address: 0042b5c0
undefined4 getGameDeltaTime(int param_1);

// Original: core_charactr.cpp_CCharacter_dtor_FUN_0042b5d0
// Address: 0042b5d0
int CCharacter::dtor(int param_1,byte param_2);
