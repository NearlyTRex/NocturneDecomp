#pragma once

// Function prototypes for core/smiley.cpp
// Generated from Ghidra function signatures

// Original: core_smiley.cpp_staticInit_FUN_0051fc90
// Address: 0051fc90
void __cdecl staticInit(void);

// Original: core_smiley.cpp_FUN_0051fcc0
// Address: 0051fcc0
void FUN_0051fcc0(void);

// Original: core_smiley.cpp_FUN_0051fce0
// Address: 0051fce0
CDemonActorType * FUN_0051fce0(void);

// Original: core_smiley.cpp_CSmiley_ctor_FUN_0051fcf0
// Address: 0051fcf0
CSmiley * __cdecl CSmiley::ctor(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_setup_FUN_0051fd90
// Address: 0051fd90
void CSmiley::setup(CEnemy *param_1);

// Original: core_smiley.cpp_CSmiley_process_FUN_005200c0
// Address: 005200c0
void CSmiley::process(CEnemy *param_1,float param_2);

// Original: core_smiley.cpp_CSmiley_attractActorToward_FUN_00520a20
// Address: 00520a20
undefined4 CSmiley::attractActorToward(CCharacter *param_1,int param_2);

// Original: core_smiley.cpp_CSmiley_archive_FUN_00520ae0
// Address: 00520ae0
void CSmiley::archive(CEnemy *param_1);

// Original: core_smiley.cpp_CSmiley_reset_FUN_00520b40
// Address: 00520b40
undefined4 CSmiley::reset(void);

// Original: core_smiley.cpp_CSmiley_processDismemberment_FUN_00520b60
// Address: 00520b60
void __cdecl CSmiley::processDismemberment(CSmiley *this_ptr,SDamageInfo *damage_info);

// Original: core_smiley.cpp_CSmiley_processDamage_FUN_00520e40
// Address: 00520e40
void CSmiley::processDamage(CSmiley *param_1,SDamageInfo *param_2);

// Original: core_smiley.cpp_CSmiley_getTargetPoints_FUN_00520f50
// Address: 00520f50
undefined4 CSmiley::getTargetPoints(int param_1,CVector3f *param_2);

// Original: core_smiley.cpp_FUN_005210b0
// Address: 005210b0
void FUN_005210b0(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_smiley.cpp_CSmiley_dtor_FUN_005210d0
// Address: 005210d0
CSmiley * __cdecl CSmiley::dtor(CSmiley *this_ptr,uint flags);
