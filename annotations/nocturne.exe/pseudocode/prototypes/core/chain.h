#pragma once

// Function prototypes for core/chain.cpp
// Generated from Ghidra function signatures

// Original: core_chain.cpp_staticInit_FUN_0042b6f0
// Address: 0042b6f0
void __cdecl staticInit(void);

// Original: core_chain.cpp_factoryFuncChain_FUN_0042b720
// Address: 0042b720
CChain * __cdecl factoryFuncChain(void);

// Original: core_chain.cpp_CChain_getActorType_FUN_0042b740
// Address: 0042b740
CDemonActorType * __cdecl CChain::getActorType(CChain *this_ptr);

// Original: core_chain.cpp_CChain_ctor_FUN_0042b750
// Address: 0042b750
CChain * __cdecl CChain::ctor(CChain *this_ptr);

// Original: core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890
// Address: 0042b890
CVector3f * __cdecl CChain::getTargetBoneWorldPosition(CChain *this_ptr,CVector3f *out_point);

// Original: core_chain.cpp_CChain_setup_FUN_0042b8f0
// Address: 0042b8f0
void __cdecl CChain::setup(CChain *this_ptr);

// Original: core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0
// Address: 0042baa0
void __cdecl CChain::constrainSegmentDistance(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b);

// Original: core_chain.cpp_CChain_process_FUN_0042bca0
// Address: 0042bca0
void __cdecl CChain::process(CChain *this_ptr,float delta_time);

// Original: core_chain.cpp_CChain_renderTransparent_FUN_0042c4c0
// Address: 0042c4c0
int __cdecl CChain::renderTransparent(CChain *this_ptr);

// Original: core_chain.cpp_CChain_getBoundingBox_FUN_0042ca90
// Address: 0042ca90
CBoundingBox3D * __cdecl CChain::getBoundingBox(CChain *this_ptr,CBoundingBox3D *out_box);

// Original: core_chain.cpp_CChain_archive_FUN_0042cbc0
// Address: 0042cbc0
void __cdecl CChain::archive(CChain *this_ptr);

// Original: core_chain.cpp_CChain_getCollisionType_FUN_0042ccf0
// Address: 0042ccf0
ECollisionType __cdecl CChain::getCollisionType(CChain *this_ptr,SCollisionInfo *collision_info);

// Original: core_chain.cpp_passthroughInt1_FUN_0042cd00
// Address: 0042cd00
int __cdecl passthroughInt1(int value);

// Original: core_chain.cpp_passthroughInt2_FUN_0042cd10
// Address: 0042cd10
int __cdecl passthroughInt2(int value);

// Original: core_chain.cpp_fastSqrt_FUN_0042cd20
// Address: 0042cd20
float __cdecl fastSqrt(float value);

// Original: core_chain.cpp_CChain_dtor_FUN_0042cd30
// Address: 0042cd30
CChain * __cdecl CChain::dtor(CChain *this_ptr,uint flags);

// Original: core_chain.cpp_SChainVertex_ctor_FUN_0042cda0
// Address: 0042cda0
SChainVertex * __cdecl SChainVertex::ctor(SChainVertex *this_ptr);

// Original: core_chain.cpp_SChainVertex_dtor_FUN_0042cdb0
// Address: 0042cdb0
SChainVertex * __cdecl SChainVertex::dtor(SChainVertex *this_ptr,uint flags);

// Original: core_chain.cpp_SChainVertex_arrdtor20_FUN_0042cdc0
// Address: 0042cdc0
SChainVertex * __cdecl SChainVertex::arrdtor20(SChainVertex *this_ptr,uint flags);
