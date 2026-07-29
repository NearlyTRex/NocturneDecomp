#pragma once

// Function prototypes for core/hero.cpp
// Generated from Ghidra function signatures

// Original: core_hero.cpp_staticInit_FUN_004b44b0
// Address: 004b44b0
void __cdecl staticInit(void);

// Original: core_hero.cpp_closestHeroToPoint_FUN_004b4500
// Address: 004b4500
CHero * __cdecl closestHeroToPoint(CLocation *location);

// Original: core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0
// Address: 004b45b0
int __cdecl isAnyHeroWithinRadius(CVector3f *point,float radius);

// Original: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004b4630
// Address: 004b4630
int __cdecl isAnyHeroWithinCylinder(CVector3f *point,float horizontal_radius,float vertical_tolerance);

// Original: core_hero.cpp_FUN_004b46d0
// Address: 004b46d0
CHero * __cdecl FUN_004b46d0(CHero *this_ptr);

// Original: core_hero.cpp_CHero_dtor_FUN_004b4800
// Address: 004b4800
CHero * __cdecl CHero::dtor(CHero *this_ptr,uint flags);

// Original: core_hero.cpp_FUN_004b48d0
// Address: 004b48d0
void __cdecl FUN_004b48d0(CHero *this_ptr);

// Original: core_hero.cpp_CHero_testCylinderCollision_FUN_004b4910
// Address: 004b4910
int CHero::testCylinderCollision(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3);

// Original: core_hero.cpp_FUN_004b4950
// Address: 004b4950
int FUN_004b4950(CDemonActor *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4);

// Original: core_hero.cpp_FUN_004b49a0
// Address: 004b49a0
void __cdecl FUN_004b49a0(CHero *this_ptr);

// Original: core_hero.cpp_CHero_getPathMap_FUN_004b4c00
// Address: 004b4c00
CPathMap * __cdecl CHero::getPathMap(CHero *this_ptr);

// Original: core_hero.cpp_FUN_004b4c10
// Address: 004b4c10
undefined4 FUN_004b4c10(void);

// Original: core_hero.cpp_FUN_004b4c20
// Address: 004b4c20
undefined4 FUN_004b4c20(int param_1,undefined4 param_2,int param_3);

// Original: core_hero.cpp_FUN_004b4c30
// Address: 004b4c30
undefined4 FUN_004b4c30(void);

// Original: core_hero.cpp_FUN_004b4c60
// Address: 004b4c60
undefined4 FUN_004b4c60(void);

// Original: core_hero.cpp_CHero_getGrabbed_FUN_004b4c70
// Address: 004b4c70
int __cdecl CHero::getGrabbed(CHero *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_hero.cpp_CHero_releaseFromGrab_FUN_004b4d50
// Address: 004b4d50
void __cdecl CHero::releaseFromGrab(CHero *this_ptr);

// Original: core_hero.cpp_CHero_createDefaultWeapon_FUN_004b4dd0
// Address: 004b4dd0
void CHero::createDefaultWeapon(int param_1);

// Original: core_hero.cpp_CHero_tryInteract_FUN_004b4e90
// Address: 004b4e90
int __cdecl CHero::tryInteract(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
// Address: 004b4fe0
int __cdecl CHero::tryTalkToNearbyCharacter(CHero *this_ptr);

// Original: core_hero.cpp_FUN_004b5110
// Address: 004b5110
int __cdecl FUN_004b5110(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270
// Address: 004b5270
int __cdecl CHero::tryOpenDoor(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryPullLever_FUN_004b52f0
// Address: 004b52f0
int __cdecl CHero::tryPullLever(CHero *this_ptr);

// Original: core_hero.cpp_CHero_executeLeverPull_FUN_004b5490
// Address: 004b5490
int __cdecl CHero::executeLeverPull(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryPushNearbyBox_FUN_004b54c0
// Address: 004b54c0
int __cdecl CHero::tryPushNearbyBox(CHero *this_ptr);

// Original: core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0
// Address: 004b56f0
void __cdecl CHero::stopPushingBox(CHero *this_ptr);

// Original: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004b5750
// Address: 004b5750
int __cdecl CHero::tryApproachNearbyActor(CHero *this_ptr);

// Original: core_hero.cpp_CHero_stopNearbyInteraction_FUN_004b5920
// Address: 004b5920
void __cdecl CHero::stopNearbyInteraction(CHero *this_ptr);

// Original: core_hero.cpp_CHero_findItemUseTarget_FUN_004b5950
// Address: 004b5950
int __cdecl CHero::findItemUseTarget(CHero *this_ptr);

// Original: core_hero.cpp_FUN_004b5b00
// Address: 004b5b00
int __cdecl FUN_004b5b00(CHero *this_ptr);

// Original: core_hero.cpp_CHero_canLookAt_FUN_004b5b70
// Address: 004b5b70
undefined4 CHero::canLookAt(int param_1);

// Original: core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30
// Address: 004b5c30
void __cdecl CHero::executeObjectPickup(CHero *this_ptr,int hand_index);

// Original: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70
// Address: 004b5c70
void __cdecl CHero::addCarriedItemToInventory(CHero *this_ptr,int hand_index);

// Original: core_hero.cpp_CHero_removeMatchingKeys_FUN_004b5cb0
// Address: 004b5cb0
void __cdecl CHero::removeMatchingKeys(CHero *this_ptr,uint key_mask);

// Original: core_hero.cpp_CHero_setAiTask_FUN_004b5cd0
// Address: 004b5cd0
void __cdecl CHero::setAiTask(CHero *this_ptr,int ai_task);

// Original: core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
// Address: 004b5d00
CCharacter * CHero::closestEnemy(int param_1,float *param_2);

// Original: core_hero.cpp_CHero_kill_FUN_004b5e90
// Address: 004b5e90
void CHero::kill(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4);

// Original: core_hero.cpp_CHero_reset_FUN_004b5ec0
// Address: 004b5ec0
void __cdecl CHero::reset(CHero *this_ptr);

// Original: core_hero.cpp_FUN_004b5f60
// Address: 004b5f60
void FUN_004b5f60(void);

// Original: core_hero.cpp_FUN_004b5f80
// Address: 004b5f80
CDemonActorType * FUN_004b5f80(void);

// Original: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004b5f90
// Address: 004b5f90
CHeroPlaceholder * __cdecl CHeroPlaceholder::ctor(CHeroPlaceholder *this_ptr);

// Original: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004b5fc0
// Address: 004b5fc0
CHeroPlaceholder * __cdecl CHeroPlaceholder::dtor(CHeroPlaceholder *this_ptr,uint flags);

// Original: core_hero.cpp_CHeroPlaceholder_getBoundingBox_FUN_004b6020
// Address: 004b6020
CBoundingBox3D * __cdecl CHeroPlaceholder::getBoundingBox(CHeroPlaceholder *this_ptr,CBoundingBox3D *out_box);

// Original: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004b6080
// Address: 004b6080
CHero * __cdecl CHeroPlaceholder::createHero(CHeroPlaceholder *this_ptr,EHeroType hero_type);

// Original: core_hero.cpp_CHeroPlaceholder_archive_FUN_004b61f0
// Address: 004b61f0
void __cdecl CHeroPlaceholder::archive(CHeroPlaceholder *this_ptr);
