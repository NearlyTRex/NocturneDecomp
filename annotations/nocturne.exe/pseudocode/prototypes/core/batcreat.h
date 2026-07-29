#pragma once

// Function prototypes for core/batcreat.cpp
// Generated from Ghidra function signatures

// Original: core_batcreat.cpp_staticInit_FUN_004120a0
// Address: 004120a0
void __cdecl staticInit(void);

// Original: core_batcreat.cpp_FUN_004120d0
// Address: 004120d0
void FUN_004120d0(void);

// Original: core_batcreat.cpp_FUN_004120f0
// Address: 004120f0
CDemonActorType * FUN_004120f0(void);

// Original: core_batcreat.cpp_FUN_00412100
// Address: 00412100
CEnemy * FUN_00412100(CEnemy *param_1);

// Original: core_batcreat.cpp_CBatCreature_setup_FUN_00412160
// Address: 00412160
void CBatCreature::setup(CEnemy *param_1);

// Original: core_batcreat.cpp_CBatCreature_process_FUN_00412480
// Address: 00412480
void CBatCreature::process(CEnemy *param_1,float param_2);

// Original: core_batcreat.cpp_FUN_00412d80
// Address: 00412d80
void FUN_00412d80(CEnemy *param_1);

// Original: core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0
// Address: 00412de0
void __cdecl CBatCreature::processDismemberment(CBatCreature *this_ptr,SDamageInfo *damage_info);

// Original: core_batcreat.cpp_FUN_00413040
// Address: 00413040
void FUN_00413040(CBatCreature *param_1,SDamageInfo *param_2);

// Original: core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00413250
// Address: 00413250
undefined4 CBatCreature::getTargetPoints(int param_1,CVector3f *param_2);

// Original: core_batcreat.cpp_FUN_004132a0
// Address: 004132a0
void FUN_004132a0(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_batcreat.cpp_CBatCreature_dtor_FUN_004132c0
// Address: 004132c0
CDemonActor * __cdecl CBatCreature::dtor(CBatCreature *this_ptr,uint flags);
