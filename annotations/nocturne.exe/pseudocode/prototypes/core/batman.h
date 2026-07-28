#pragma once

// Function prototypes for core/batman.cpp
// Generated from Ghidra function signatures

// Original: core_batman.cpp_staticInit_FUN_00413380
// Address: 00413380
void __cdecl staticInit(void);

// Original: core_batman.cpp_FUN_004133b0
// Address: 004133b0
void FUN_004133b0(void);

// Original: core_batman.cpp_FUN_004133d0
// Address: 004133d0
CDemonActorType * FUN_004133d0(void);

// Original: core_batman.cpp_CBatman_ctor_FUN_004133e0
// Address: 004133e0
CBatman * __cdecl CBatman::ctor(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_setup_FUN_004134a0
// Address: 004134a0
void CBatman::setup(CEnemy *param_1);

// Original: core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780
// Address: 00413780
void __cdecl CBatman::pickRandomMovementState(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_process_FUN_00413800
// Address: 00413800
void CBatman::process(CBatman *param_1,float param_2);

// Original: core_batman.cpp_FUN_00414340
// Address: 00414340
int FUN_00414340(CCharacter *param_1);

// Original: core_batman.cpp_CBatman_archive_FUN_00414510
// Address: 00414510
void CBatman::archive(CEnemy *param_1);

// Original: core_batman.cpp_CBatman_processDismemberment_FUN_004145f0
// Address: 004145f0
void __cdecl CBatman::processDismemberment(CBatman *this_ptr,SDamageInfo *damage_info);

// Original: core_batman.cpp_FUN_00414930
// Address: 00414930
void FUN_00414930(CBatman *param_1,SDamageInfo *param_2);

// Original: core_batman.cpp_FUN_00414b40
// Address: 00414b40
int FUN_00414b40(int param_1,CVector3f *param_2);

// Original: core_batman.cpp_FUN_00414c40
// Address: 00414c40
ECollisionType FUN_00414c40(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_batman.cpp_FUN_00414c60
// Address: 00414c60
CDemonActor * FUN_00414c60(CDemonActor *param_1,byte param_2);
