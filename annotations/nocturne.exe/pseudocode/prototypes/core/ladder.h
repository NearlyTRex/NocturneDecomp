#pragma once

// Function prototypes for core/ladder.cpp
// Generated from Ghidra function signatures

// Original: core_ladder.cpp_staticInit_FUN_004c4230
// Address: 004c4230
void __cdecl staticInit(void);

// Original: core_ladder.cpp_factoryFunc_FUN_004c4260
// Address: 004c4260
CLadder * __cdecl factoryFunc(void);

// Original: core_ladder.cpp_CLadder_getActorType_FUN_004c4280
// Address: 004c4280
CDemonActorType * CLadder::getActorType(void);

// Original: core_ladder.cpp_CLadder_ctor_FUN_004c4290
// Address: 004c4290
CLadder * __cdecl CLadder::ctor(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_setup_FUN_004c4340
// Address: 004c4340
void CLadder::setup(CDemonActor *param_1);

// Original: core_ladder.cpp_CLadder_process_FUN_004c4360
// Address: 004c4360
void CLadder::process(CLadder *param_1);

// Original: core_ladder.cpp_CLadder_renderOpaque_FUN_004c4370
// Address: 004c4370
int CLadder::renderOpaque(CDemonActor *param_1);

// Original: core_ladder.cpp_CLadder_getBoundingBox_FUN_004c43f0
// Address: 004c43f0
float * CLadder::getBoundingBox(int param_1,float *param_2);

// Original: core_ladder.cpp_CLadder_archive_FUN_004c44f0
// Address: 004c44f0
void CLadder::archive(CLadder *param_1);

// Original: core_ladder.cpp_CLadder_getCollisionType_FUN_004c4570
// Address: 004c4570
undefined4 CLadder::getCollisionType(int param_1);

// Original: core_ladder.cpp_FUN_004c45a0
// Address: 004c45a0
void __cdecl FUN_004c45a0(CLadder *this_ptr);

// Original: core_ladder.cpp_FUN_004c46b0
// Address: 004c46b0
void __cdecl FUN_004c46b0(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_getGroundType_FUN_004c47c0
// Address: 004c47c0
undefined4 CLadder::getGroundType(int param_1);

// Original: core_ladder.cpp_CLadder_dtor_FUN_004c47d0
// Address: 004c47d0
CLadder * __cdecl CLadder::dtor(CLadder *this_ptr,uint flags);
