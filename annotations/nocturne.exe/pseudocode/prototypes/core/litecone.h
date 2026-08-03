#pragma once

// Function prototypes for core/litecone.cpp
// Generated from Ghidra function signatures

// Original: core_litecone.cpp_staticInit_FUN_004c8090
// Address: 004c8090
void __cdecl staticInit(void);

// Original: core_litecone.cpp_factoryFunc_FUN_004c80c0
// Address: 004c80c0
CLightCone * __cdecl factoryFunc(void);

// Original: core_litecone.cpp_CLightCone_getActorType_FUN_004c80e0
// Address: 004c80e0
CDemonActorType * __cdecl CLightCone::getActorType(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_ctor_FUN_004c80f0
// Address: 004c80f0
CLightCone * __cdecl CLightCone::ctor(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_setup_FUN_004c8190
// Address: 004c8190
void __cdecl CLightCone::setup(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_process_FUN_004c81a0
// Address: 004c81a0
void __cdecl CLightCone::process(CLightCone *this_ptr,float delta_time);

// Original: core_litecone.cpp_CLightCone_renderTransparent_FUN_004c8200
// Address: 004c8200
int __cdecl CLightCone::renderTransparent(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_getBoundingBox_FUN_004c8290
// Address: 004c8290
CBoundingBox3D * __cdecl CLightCone::getBoundingBox(CLightCone *this_ptr,CBoundingBox3D *out_box);

// Original: core_litecone.cpp_CLightCone_archive_FUN_004c82e0
// Address: 004c82e0
void __cdecl CLightCone::archive(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_getCollisionType_FUN_004c8370
// Address: 004c8370
ECollisionType __cdecl CLightCone::getCollisionType(CLightCone *this_ptr,SCollisionInfo *collision_info);

// Original: core_litecone.cpp_CLightCone_dtor_FUN_004c8380
// Address: 004c8380
CLightCone * __cdecl CLightCone::dtor(CLightCone *this_ptr,uint flags);
