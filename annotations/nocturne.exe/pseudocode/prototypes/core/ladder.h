#pragma once

// Function prototypes for core/ladder.cpp
// Generated from Ghidra function signatures

// Original: core_ladder.cpp_staticInit_FUN_004c4230
// Address: 004c4230
void __cdecl staticInit(void);

// Original: core_ladder.cpp_factoryFuncLadder_FUN_004c4260
// Address: 004c4260
CLadder * __cdecl factoryFuncLadder(void);

// Original: core_ladder.cpp_CLadder_getActorType_FUN_004c4280
// Address: 004c4280
CDemonActorType * __cdecl CLadder::getActorType(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_ctor_FUN_004c4290
// Address: 004c4290
CLadder * __cdecl CLadder::ctor(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_setup_FUN_004c4340
// Address: 004c4340
void __cdecl CLadder::setup(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_process_FUN_004c4360
// Address: 004c4360
void __cdecl CLadder::process(CLadder *this_ptr,float delta_time);

// Original: core_ladder.cpp_CLadder_renderOpaque_FUN_004c4370
// Address: 004c4370
int __cdecl CLadder::renderOpaque(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_getBoundingBox_FUN_004c43f0
// Address: 004c43f0
CBoundingBox3D * __cdecl CLadder::getBoundingBox(CLadder *this_ptr,CBoundingBox3D *out_box);

// Original: core_ladder.cpp_CLadder_archive_FUN_004c44f0
// Address: 004c44f0
void __cdecl CLadder::archive(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_getCollisionType_FUN_004c4570
// Address: 004c4570
ECollisionType __cdecl CLadder::getCollisionType(CLadder *this_ptr,SCollisionInfo *collision_info);

// Original: core_ladder.cpp_CLadder_FUN_004c45a0
// Address: 004c45a0
void __cdecl CLadder(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_FUN_004c46b0
// Address: 004c46b0
void __cdecl CLadder(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_getGroundType_FUN_004c47c0
// Address: 004c47c0
EGroundType __cdecl CLadder::getGroundType(CLadder *this_ptr);

// Original: core_ladder.cpp_CLadder_dtor_FUN_004c47d0
// Address: 004c47d0
CLadder * __cdecl CLadder::dtor(CLadder *this_ptr,uint flags);
