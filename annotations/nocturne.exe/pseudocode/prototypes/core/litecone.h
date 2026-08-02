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
CDemonActorType * CLightCone::getActorType(void);

// Original: core_litecone.cpp_CLightCone_ctor_FUN_004c80f0
// Address: 004c80f0
CLightCone * __cdecl CLightCone::ctor(CLightCone *this_ptr);

// Original: core_litecone.cpp_CLightCone_setup_FUN_004c8190
// Address: 004c8190
void CLightCone::setup(CDemonActor *param_1);

// Original: core_litecone.cpp_CLightCone_process_FUN_004c81a0
// Address: 004c81a0
void CLightCone::process(int param_1);

// Original: core_litecone.cpp_CLightCone_renderTransparent_FUN_004c8200
// Address: 004c8200
int CLightCone::renderTransparent(CDemonActor *param_1);

// Original: core_litecone.cpp_CLightCone_getBoundingBox_FUN_004c8290
// Address: 004c8290
void CLightCone::getBoundingBox(int param_1,float *param_2);

// Original: core_litecone.cpp_CLightCone_archive_FUN_004c82e0
// Address: 004c82e0
void CLightCone::archive(CDemonActor *param_1);

// Original: core_litecone.cpp_CLightCone_getCollisionType_FUN_004c8370
// Address: 004c8370
undefined4 CLightCone::getCollisionType(void);

// Original: core_litecone.cpp_CLightCone_dtor_FUN_004c8380
// Address: 004c8380
CLightCone * __cdecl CLightCone::dtor(CLightCone *this_ptr,uint flags);
