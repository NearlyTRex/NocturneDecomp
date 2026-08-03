#pragma once

// Function prototypes for core/spike.cpp
// Generated from Ghidra function signatures

// Original: core_spike.cpp_staticInit_FUN_00532fc0
// Address: 00532fc0
void __cdecl staticInit(void);

// Original: core_spike.cpp_factoryFunc_FUN_00532ff0
// Address: 00532ff0
CSpike * __cdecl factoryFunc(void);

// Original: core_spike.cpp_CSpike_getActorType_FUN_00533010
// Address: 00533010
CDemonActorType * __cdecl CSpike::getActorType(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_ctor_FUN_00533020
// Address: 00533020
CSpike * __cdecl CSpike::ctor(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_setup_FUN_00533160
// Address: 00533160
void __cdecl CSpike::setup(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_process_FUN_00533210
// Address: 00533210
void __cdecl CSpike::process(CSpike *this_ptr,float delta_time);

// Original: core_spike.cpp_CSpike_renderOpaque_FUN_00533530
// Address: 00533530
int __cdecl CSpike::renderOpaque(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_getBoundingBox_FUN_005335a0
// Address: 005335a0
CBoundingBox3D * __cdecl CSpike::getBoundingBox(CSpike *this_ptr,CBoundingBox3D *out_box);

// Original: core_spike.cpp_CSpike_archive_FUN_005335f0
// Address: 005335f0
void __cdecl CSpike::archive(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_getCollisionType_FUN_00533740
// Address: 00533740
ECollisionType __cdecl CSpike::getCollisionType(CSpike *this_ptr,SCollisionInfo *collision_info);

// Original: core_spike.cpp_FUN_00533750
// Address: 00533750
void __cdecl FUN_00533750(CSpike *this_ptr);

// Original: core_spike.cpp_CSpike_dtor_FUN_00533c90
// Address: 00533c90
CSpike * __cdecl CSpike::dtor(CSpike *this_ptr,uint flags);
