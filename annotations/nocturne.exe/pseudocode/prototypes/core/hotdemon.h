#pragma once

// Function prototypes for core/hotdemon.cpp
// Generated from Ghidra function signatures

// Original: core_hotdemon.cpp_staticInit_FUN_004b8c40
// Address: 004b8c40
void __cdecl staticInit(void);

// Original: core_hotdemon.cpp_FUN_004b8c70
// Address: 004b8c70
void FUN_004b8c70(void);

// Original: core_hotdemon.cpp_FUN_004b8c90
// Address: 004b8c90
CDemonActorType * FUN_004b8c90(void);

// Original: core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0
// Address: 004b8ca0
CHotDemon * __cdecl CHotDemon::ctor(CHotDemon *this_ptr);

// Original: core_hotdemon.cpp_CHotDemon_setup_FUN_004b8d00
// Address: 004b8d00
void CHotDemon::setup(CEnemy *param_1);

// Original: core_hotdemon.cpp_CHotDemon_process_FUN_004b8f20
// Address: 004b8f20
void CHotDemon::process(CEnemy *param_1,float param_2);

// Original: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004b9680
// Address: 004b9680
undefined4 CHotDemon::getDeathState(int param_1);

// Original: core_hotdemon.cpp_CHotDemon_archive_FUN_004b96c0
// Address: 004b96c0
void CHotDemon::archive(CEnemy *param_1);

// Original: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004b9720
// Address: 004b9720
void CHotDemon::processDamage(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004b98f0
// Address: 004b98f0
undefined4 CHotDemon::getTargetPoints(int param_1,CVector3f *param_2);

// Original: core_hotdemon.cpp_FUN_004b99b0
// Address: 004b99b0
void FUN_004b99b0(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_hotdemon.cpp_CHotDemon_dtor_FUN_004b99d0
// Address: 004b99d0
CDemonActor * CHotDemon::dtor(CDemonActor *param_1,byte param_2);
