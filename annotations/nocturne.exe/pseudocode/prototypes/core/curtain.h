#pragma once

// Function prototypes for core/curtain.cpp
// Generated from Ghidra function signatures

// Original: core_curtain.cpp_staticInit_FUN_0043d8e0
// Address: 0043d8e0
void __cdecl staticInit(void);

// Original: core_curtain.cpp_factoryFunc_FUN_0043d930
// Address: 0043d930
CCurtain * __cdecl factoryFunc(void);

// Original: core_curtain.cpp_CCurtain_getActorType_FUN_0043d950
// Address: 0043d950
CDemonActorType * CCurtain::getActorType(void);

// Original: core_curtain.cpp_CCurtain_ctor_FUN_0043d960
// Address: 0043d960
CCurtain * __cdecl CCurtain::ctor(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_setup_FUN_0043dad0
// Address: 0043dad0
void CCurtain::setup(CCurtain *param_1);

// Original: core_curtain.cpp_CCurtain_updateWorldPositions_FUN_0043e110
// Address: 0043e110
void __cdecl CCurtain::updateWorldPositions(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_updateLocalPositions_FUN_0043e1e0
// Address: 0043e1e0
void __cdecl CCurtain::updateLocalPositions(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_solveConstraints_FUN_0043e290
// Address: 0043e290
void __cdecl CCurtain::solveConstraints(CCurtain *this_ptr,SCurtainVertex *vertex);

// Original: core_curtain.cpp_CCurtain_process_FUN_0043ebf0
// Address: 0043ebf0
void CCurtain::process(CCurtain *param_1,float param_2);

// Original: core_curtain.cpp_FUN_0043f330
// Address: 0043f330
int __cdecl FUN_0043f330(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_renderOpaque_FUN_0043f610
// Address: 0043f610
int CCurtain::renderOpaque(CCurtain *param_1);

// Original: core_curtain.cpp_CCurtain_renderTransparent_FUN_0043f630
// Address: 0043f630
int CCurtain::renderTransparent(CCurtain *param_1);

// Original: core_curtain.cpp_CCurtain_getCollisionType_FUN_0043f640
// Address: 0043f640
undefined4 CCurtain::getCollisionType(void);

// Original: core_curtain.cpp_CCurtain_getBoundingBox_FUN_0043f650
// Address: 0043f650
void CCurtain::getBoundingBox(int param_1,float *param_2);

// Original: core_curtain.cpp_CCurtain_archive_FUN_0043f6b0
// Address: 0043f6b0
void CCurtain::archive(CDemonActor *param_1);

// Original: core_curtain.cpp_CCurtain_getBlockVirtualDirectorFlag_FUN_0043f8d0
// Address: 0043f8d0
int __cdecl CCurtain::getBlockVirtualDirectorFlag(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_dtor_FUN_0043f8e0
// Address: 0043f8e0
CCurtain * __cdecl CCurtain::dtor(CCurtain *this_ptr,uint flags);

// Original: core_curtain.cpp_SCurtainVertex_ctor_FUN_0043f950
// Address: 0043f950
SCurtainVertex * __cdecl SCurtainVertex::ctor(SCurtainVertex *this_ptr);

// Original: core_curtain.cpp_SCurtainVertex_dtor_FUN_0043f960
// Address: 0043f960
SCurtainVertex * __cdecl SCurtainVertex::dtor(SCurtainVertex *this_ptr,uint flags);

// Original: core_curtain.cpp_SCollisionInfo_dtor_FUN_0043f970
// Address: 0043f970
SCollisionInfo * __cdecl SCollisionInfo::dtor(SCollisionInfo *this_ptr,uint flags);

// Original: core_curtain.cpp_FUN_0043f980
// Address: 0043f980
SCurtainVertex * __cdecl FUN_0043f980(SCurtainVertex *objs,uint flags);

// Original: core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0
// Address: 0043f9a0
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);
