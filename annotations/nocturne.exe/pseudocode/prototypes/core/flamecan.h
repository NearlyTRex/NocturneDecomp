#pragma once

// Function prototypes for core/flamecan.cpp
// Generated from Ghidra function signatures

// Original: core_flamecan.cpp_staticInit_FUN_0048e310
// Address: 0048e310
void __cdecl staticInit(void);

// Original: core_flamecan.cpp_factoryFuncFlameCan_FUN_0048e340
// Address: 0048e340
CFlameCan * __cdecl factoryFuncFlameCan(void);

// Original: core_flamecan.cpp_CFlameCan_getActorType_FUN_0048e360
// Address: 0048e360
CDemonActorType * __cdecl CFlameCan::getActorType(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_ctor_FUN_0048e370
// Address: 0048e370
CFlameCan * __cdecl CFlameCan::ctor(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_setup_FUN_0048e410
// Address: 0048e410
void __cdecl CFlameCan::setup(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
// Address: 0048e550
void __cdecl CFlameCan::ignite(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0
// Address: 0048e5a0
void __cdecl CFlameCan::process(CFlameCan *this_ptr,float delta_time);

// Original: core_flamecan.cpp_CFlameCan_renderOpaque_FUN_0048e6d0
// Address: 0048e6d0
int __cdecl CFlameCan::renderOpaque(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_0048e760
// Address: 0048e760
int __cdecl CFlameCan::renderTransparent(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_getTargetPoints_FUN_0048e790
// Address: 0048e790
int __cdecl CFlameCan::getTargetPoints(CFlameCan *this_ptr,CVector3f *out_points_array);

// Original: core_flamecan.cpp_CFlameCan_archive_FUN_0048e830
// Address: 0048e830
void __cdecl CFlameCan::archive(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_getCollisionType_FUN_0048e890
// Address: 0048e890
ECollisionType __cdecl CFlameCan::getCollisionType(CFlameCan *this_ptr,SCollisionInfo *collision_info);

// Original: core_flamecan.cpp_CFlameCan_getBoundingBox_FUN_0048e8a0
// Address: 0048e8a0
CBoundingBox3D * __cdecl CFlameCan::getBoundingBox(CFlameCan *this_ptr,CBoundingBox3D *out_box);

// Original: core_flamecan.cpp_CFlameCan_dtor_FUN_0048e8f0
// Address: 0048e8f0
CFlameCan * __cdecl CFlameCan::dtor(CFlameCan *this_ptr,uint flags);
