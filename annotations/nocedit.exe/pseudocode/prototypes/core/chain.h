#pragma once

// Function prototypes for core/chain.cpp
// Generated from Ghidra function signatures

// Original: core_chain.cpp_staticInit_FUN_0042fb10
// Address: 0042fb10
void __cdecl staticInit(void);

// Original: core_chain.cpp_factoryFunc_FUN_0042fb40
// Address: 0042fb40
CChain * __cdecl factoryFunc(void);

// Original: core_chain.cpp_CChain_getActorType_FUN_0042fb70
// Address: 0042fb70
CDemonActorType * __cdecl CChain::getActorType(CChain *this_ptr);

// Original: core_chain.cpp_CChain_ctor_FUN_0042fb80
// Address: 0042fb80
CChain * __cdecl CChain::ctor(CChain *this_ptr);

// Original: core_chain.cpp_FUN_0042fcc0
// Address: 0042fcc0
CVector3f * __cdecl FUN_0042fcc0(void);

// Original: core_chain.cpp_CChain_setup_FUN_0042fd20
// Address: 0042fd20
void __cdecl CChain::setup(CChain *this_ptr);

// Original: core_chain.cpp_FUN_0042fed0
// Address: 0042fed0
void __cdecl FUN_0042fed0(void);

// Original: core_chain.cpp_CChain_process_FUN_004300d0
// Address: 004300d0
void __cdecl CChain::process(CChain *this_ptr,float delta_time);

// Original: core_chain.cpp_CChain_FUN_004308f0
// Address: 004308f0
int __cdecl CChain(CChain *this_ptr);

// Original: core_chain.cpp_CChain_FUN_00430eb0
// Address: 00430eb0
CBoundingBox3D * __cdecl CChain(CChain *this_ptr,CBoundingBox3D *out_box);

// Original: core_chain.cpp_CChain_archive_FUN_00430fe0
// Address: 00430fe0
void __cdecl CChain::archive(CChain *this_ptr);

// Original: core_chain.cpp_CChain_hasCollision_FUN_00431110
// Address: 00431110
int __cdecl CChain::hasCollision(CChain *this_ptr,SCollisionInfo *collision_info);

// Original: core_chain.cpp_CChain_FUN_00431120
// Address: 00431120
void __cdecl CChain(CChain *this_ptr,CActorPropertyList *property_list);

// Original: core_chain.cpp_CChain_writeDependencies_FUN_00431250
// Address: 00431250
void __cdecl CChain::writeDependencies(CChain *this_ptr,_FILE *file_handle);

// Original: core_chain.cpp_FUN_00431330
// Address: 00431330
int __cdecl FUN_00431330(void);

// Original: core_chain.cpp_FUN_00431340
// Address: 00431340
int __cdecl FUN_00431340(void);

// Original: core_chain.cpp_FUN_00431350
// Address: 00431350
int __cdecl FUN_00431350(void);

// Original: core_chain.cpp_CChain_dtor_FUN_00431360
// Address: 00431360
CChain * __cdecl CChain::dtor(CChain *this_ptr,uint flags);

// Original: core_chain.cpp_SChainVertex_ctor_FUN_004313d0
// Address: 004313d0
SChainVertex * __cdecl SChainVertex::ctor(SChainVertex *this_ptr);

// Original: core_chain.cpp_SChainVertex_dtor_FUN_004313e0
// Address: 004313e0
SChainVertex * __cdecl SChainVertex::dtor(SChainVertex *this_ptr);

// Original: core_chain.cpp_FUN_004313f0
// Address: 004313f0
int __cdecl FUN_004313f0(SChainVertex **objs);
