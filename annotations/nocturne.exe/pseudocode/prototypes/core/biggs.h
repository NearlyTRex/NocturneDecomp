#pragma once

// Function prototypes for core/biggs.cpp
// Generated from Ghidra function signatures

// Original: core_biggs.cpp_staticInit_FUN_00415310
// Address: 00415310
void __cdecl staticInit(void);

// Original: core_biggs.cpp_factoryFunc_FUN_00415340
// Address: 00415340
CBiggs * __cdecl factoryFunc(void);

// Original: core_biggs.cpp_CBiggs_getActorType_FUN_00415360
// Address: 00415360
CDemonActorType * CBiggs::getActorType(void);

// Original: core_biggs.cpp_CBiggs_ctor_FUN_00415370
// Address: 00415370
CBiggs * __cdecl CBiggs::ctor(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_setup_FUN_00415430
// Address: 00415430
void CBiggs::setup(CEnemy *param_1);

// Original: core_biggs.cpp_CBiggs_process_FUN_004154b0
// Address: 004154b0
void CBiggs::process(CCharacter *param_1,float param_2);

// Original: core_biggs.cpp_CBiggs_renderOpaque_FUN_00415760
// Address: 00415760
int CBiggs::renderOpaque(CCharacter *param_1);

// Original: core_biggs.cpp_CBiggs_archive_FUN_00415870
// Address: 00415870
void CBiggs::archive(CEnemy *param_1);

// Original: core_biggs.cpp_CBiggs_processDamage_FUN_00415900
// Address: 00415900
void CBiggs::processDamage(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_biggs.cpp_CBiggs_getTargetPoints_FUN_004159c0
// Address: 004159c0
int __cdecl CBiggs::getTargetPoints(CBiggs *this_ptr,CVector3f *out_points_array);

// Original: core_biggs.cpp_CBiggs_getCollisionType_FUN_00415a10
// Address: 00415a10
void CBiggs::getCollisionType(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_biggs.cpp_CBiggs_dtor_FUN_00415a30
// Address: 00415a30
CBiggs * __cdecl CBiggs::dtor(CBiggs *this_ptr,uint flags);
