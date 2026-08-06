#pragma once

// Function prototypes for core/glass.cpp
// Generated from Ghidra function signatures

// Original: core_glass.cpp_staticInit_FUN_004abaf0
// Address: 004abaf0
void __cdecl staticInit(void);

// Original: core_glass.cpp_factoryFunc_FUN_004abb20
// Address: 004abb20
CGlass * __cdecl factoryFunc(void);

// Original: core_glass.cpp_CGlass_getActorType_FUN_004abb40
// Address: 004abb40
CDemonActorType * __cdecl CGlass::getActorType(CGlass *this_ptr);

// Original: core_glass.cpp_CGlass_ctor_FUN_004abb50
// Address: 004abb50
CGlass * __cdecl CGlass::ctor(CGlass *this_ptr);

// Original: core_glass.cpp_CGlass_setup_FUN_004abc90
// Address: 004abc90
void __cdecl CGlass::setup(CGlass *this_ptr);

// Original: core_glass.cpp_CGlass_process_FUN_004ac3f0
// Address: 004ac3f0
void __cdecl CGlass::process(CGlass *this_ptr,float delta_time);

// Original: core_glass.cpp_CGlass_renderOpaque_FUN_004ac440
// Address: 004ac440
int __cdecl CGlass::renderOpaque(CGlass *this_ptr);

// Original: core_glass.cpp_CGlass_renderTransparent_FUN_004ac600
// Address: 004ac600
int __cdecl CGlass::renderTransparent(CGlass *this_ptr);

// Original: core_glass.cpp_CGlass_FUN_004ac7c0
// Address: 004ac7c0
void __cdecl CGlass(CGlass *this_ptr);

// Original: core_glass.cpp_CGlass_renderBackground_FUN_004ac9b0
// Address: 004ac9b0
void __cdecl CGlass::renderBackground(CGlass *this_ptr,int layer_flag);

// Original: core_glass.cpp_CGlass_getBoundingBox_FUN_004acb60
// Address: 004acb60
CBoundingBox3D * __cdecl CGlass::getBoundingBox(CGlass *this_ptr,CBoundingBox3D *out_box);

// Original: core_glass.cpp_CGlass_archive_FUN_004acbc0
// Address: 004acbc0
void __cdecl CGlass::archive(CGlass *this_ptr);

// Original: core_glass.cpp_CGlass_getCollisionType_FUN_004accc0
// Address: 004accc0
ECollisionType __cdecl CGlass::getCollisionType(CGlass *this_ptr,SCollisionInfo *collision_info);

// Original: core_glass.cpp_CGlass_FUN_004accf0
// Address: 004accf0
void __cdecl CGlass(CGlass *this_ptr,float *param_2,int *param_3,int *param_4,int param_5);

// Original: core_glass.cpp_CGlass_shatter_FUN_004ada20
// Address: 004ada20
void __cdecl CGlass::shatter(CGlass *this_ptr,CVector3f *location);

// Original: core_glass.cpp_CGlass_onLaserHit_FUN_004add80
// Address: 004add80
void __cdecl CGlass::onLaserHit(CGlass *this_ptr,SLaserInfo *laser_info);

// Original: core_glass.cpp_CGlass_getGroundType_FUN_004adec0
// Address: 004adec0
EGroundType __cdecl CGlass::getGroundType(CGlass *this_ptr);

// Original: core_glass.cpp_CGlass_FUN_004aded0
// Address: 004aded0
int __cdecl CGlass(CGlass *this_ptr);

// Original: core_glass.cpp_CGlass_dtor_FUN_004adef0
// Address: 004adef0
CGlass * __cdecl CGlass::dtor(CGlass *this_ptr,uint flags);

// Original: core_glass.cpp_CVector3f_arrdtor_FUN_004adf70
// Address: 004adf70
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *this_ptr,uint flags);
