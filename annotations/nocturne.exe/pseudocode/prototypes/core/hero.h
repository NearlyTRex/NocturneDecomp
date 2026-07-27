#pragma once

// Function prototypes for core/hero.cpp
// Generated from Ghidra function signatures

// Original: core_hero.cpp_staticInit_FUN_004b44b0
// Address: 004b44b0
void __cdecl staticInit(void);

// Original: core_hero.cpp_closestHeroToPoint_FUN_004b4500
// Address: 004b4500
int __cdecl closestHeroToPoint(float *param_1);

// Original: core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0
// Address: 004b45b0
undefined4 __cdecl isAnyHeroWithinRadius(float *param_1,float param_2);

// Original: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004b4630
// Address: 004b4630
undefined4 __cdecl isAnyHeroWithinCylinder(float *param_1,float param_2,float param_3);

// Original: core_hero.cpp_FUN_004b46d0
// Address: 004b46d0
int FUN_004b46d0(undefined4 param_1);

// Original: core_hero.cpp_FUN_004b4800
// Address: 004b4800
void FUN_004b4800(int param_1);

// Original: core_hero.cpp_FUN_004b48d0
// Address: 004b48d0
void FUN_004b48d0(int param_1);

// Original: core_hero.cpp_CHero_testCylinderCollision_FUN_004b4910
// Address: 004b4910
undefined4 CHero::testCylinderCollision(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_hero.cpp_FUN_004b4950
// Address: 004b4950
undefined4 FUN_004b4950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_hero.cpp_FUN_004b49a0
// Address: 004b49a0
int FUN_004b49a0(int param_1);

// Original: core_hero.cpp_FUN_004b4c00
// Address: 004b4c00
int FUN_004b4c00(int param_1);

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
undefined4 __cdecl CHero::getGrabbed(int param_1,int param_2,int param_3);

// Original: core_hero.cpp_CHero_releaseFromGrab_FUN_004b4d50
// Address: 004b4d50
void CHero::releaseFromGrab(int param_1);

// Original: core_hero.cpp_CHero_createDefaultWeapon_FUN_004b4dd0
// Address: 004b4dd0
void CHero::createDefaultWeapon(int param_1);

// Original: core_hero.cpp_CHero_tryInteract_FUN_004b4e90
// Address: 004b4e90
undefined4 __cdecl CHero::tryInteract(int param_1);

// Original: core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
// Address: 004b4fe0
undefined4 __cdecl CHero::tryTalkToNearbyCharacter(int param_1);

// Original: core_hero.cpp_FUN_004b5110
// Address: 004b5110
int FUN_004b5110(int param_1);

// Original: core_hero.cpp_FUN_004b5270
// Address: 004b5270
undefined4 FUN_004b5270(int param_1);

// Original: core_hero.cpp_FUN_004b52f0
// Address: 004b52f0
undefined4 FUN_004b52f0(int param_1);

// Original: core_hero.cpp_CHero_executeLeverPull_FUN_004b5490
// Address: 004b5490
undefined4 __cdecl CHero::executeLeverPull(int param_1);

// Original: core_hero.cpp_CHero_tryPushNearbyBox_FUN_004b54c0
// Address: 004b54c0
undefined4 __cdecl CHero::tryPushNearbyBox(int param_1);

// Original: core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0
// Address: 004b56f0
void __cdecl CHero::stopPushingBox(int param_1);

// Original: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004b5750
// Address: 004b5750
undefined4 __cdecl CHero::tryApproachNearbyActor(int param_1);

// Original: core_hero.cpp_CHero_stopNearbyInteraction_FUN_004b5920
// Address: 004b5920
void __cdecl CHero::stopNearbyInteraction(int param_1);

// Original: core_hero.cpp_CHero_findItemUseTarget_FUN_004b5950
// Address: 004b5950
undefined4 __cdecl CHero::findItemUseTarget(int param_1);

// Original: core_hero.cpp_FUN_004b5b00
// Address: 004b5b00
undefined4 FUN_004b5b00(int param_1);

// Original: core_hero.cpp_CHero_canLookAt_FUN_004b5b70
// Address: 004b5b70
undefined4 CHero::canLookAt(int param_1);

// Original: core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30
// Address: 004b5c30
void __cdecl CHero::executeObjectPickup(int param_1,undefined4 param_2);

// Original: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70
// Address: 004b5c70
void __cdecl CHero::addCarriedItemToInventory(int param_1,int param_2);

// Original: core_hero.cpp_CHero_removeMatchingKeys_FUN_004b5cb0
// Address: 004b5cb0
void __cdecl CHero::removeMatchingKeys(int param_1,undefined4 param_2);

// Original: core_hero.cpp_CHero_setAiTask_FUN_004b5cd0
// Address: 004b5cd0
void __cdecl CHero::setAiTask(int param_1,undefined4 param_2);

// Original: core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
// Address: 004b5d00
int CHero::closestEnemy(int param_1,float *param_2);

// Original: core_hero.cpp_CHero_kill_FUN_004b5e90
// Address: 004b5e90
void CHero::kill(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_hero.cpp_FUN_004b5ec0
// Address: 004b5ec0
void FUN_004b5ec0(int param_1);

// Original: core_hero.cpp_FUN_004b5f60
// Address: 004b5f60
void FUN_004b5f60(void);

// Original: core_hero.cpp_FUN_004b5f80
// Address: 004b5f80
CDemonActorType * FUN_004b5f80(void);

// Original: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004b5f90
// Address: 004b5f90
void __cdecl CHeroPlaceholder::ctor(undefined4 param_1);

// Original: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004b5fc0
// Address: 004b5fc0
int CHeroPlaceholder::dtor(int param_1,byte param_2);

// Original: core_hero.cpp_CHeroPlaceholder_getBoundingBox_FUN_004b6020
// Address: 004b6020
void CHeroPlaceholder::getBoundingBox(undefined4 param_1,undefined4 *param_2);

// Original: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004b6080
// Address: 004b6080
int __cdecl CHeroPlaceholder::createHero(int param_1,undefined4 param_2);

// Original: core_hero.cpp_FUN_004b61f0
// Address: 004b61f0
void FUN_004b61f0(int param_1);
