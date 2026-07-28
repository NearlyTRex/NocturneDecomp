#pragma once

// Function prototypes for core/sentinel.cpp
// Generated from Ghidra function signatures

// Original: core_sentinel.cpp_staticInit_FUN_005058c0
// Address: 005058c0
void __cdecl staticInit(void);

// Original: core_sentinel.cpp_FUN_005058f0
// Address: 005058f0
void FUN_005058f0(void);

// Original: core_sentinel.cpp_FUN_00505910
// Address: 00505910
CDemonActorType * FUN_00505910(void);

// Original: core_sentinel.cpp_FUN_00505920
// Address: 00505920
CEnemy * FUN_00505920(CEnemy *param_1);

// Original: core_sentinel.cpp_CSentinel_setup_FUN_00505990
// Address: 00505990
void CSentinel::setup(CEnemy *param_1);

// Original: core_sentinel.cpp_CSentinel_process_FUN_00505ba0
// Address: 00505ba0
void CSentinel::process(CEnemy *param_1,float param_2);

// Original: core_sentinel.cpp_CSentinel_attractActorToward_FUN_005066e0
// Address: 005066e0
undefined4 CSentinel::attractActorToward(CDemonActor *param_1,int param_2);

// Original: core_sentinel.cpp_CSentinel_archive_FUN_005067e0
// Address: 005067e0
void CSentinel::archive(CEnemy *param_1);

// Original: core_sentinel.cpp_CSentinel_processDamage_FUN_00506840
// Address: 00506840
void CSentinel::processDamage(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_sentinel.cpp_CSentinel_getTargetPoints_FUN_00506940
// Address: 00506940
undefined4 CSentinel::getTargetPoints(int param_1,CVector3f *param_2);

// Original: core_sentinel.cpp_FUN_00506a60
// Address: 00506a60
void FUN_00506a60(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_sentinel.cpp_FUN_00506a80
// Address: 00506a80
CDemonActor * FUN_00506a80(CDemonActor *param_1,byte param_2);
