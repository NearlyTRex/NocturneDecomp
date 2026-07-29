#pragma once

// Function prototypes for core/flamecan.cpp
// Generated from Ghidra function signatures

// Original: core_flamecan.cpp_staticInit_FUN_0048e310
// Address: 0048e310
void __cdecl staticInit(void);

// Original: core_flamecan.cpp_FUN_0048e340
// Address: 0048e340
void FUN_0048e340(void);

// Original: core_flamecan.cpp_FUN_0048e360
// Address: 0048e360
CDemonActorType * FUN_0048e360(void);

// Original: core_flamecan.cpp_CFlameCan_ctor_FUN_0048e370
// Address: 0048e370
CFlameCan * __cdecl CFlameCan::ctor(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_setup_FUN_0048e410
// Address: 0048e410
void CFlameCan::setup(CDemonActor *param_1);

// Original: core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
// Address: 0048e550
void __cdecl CFlameCan::ignite(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0
// Address: 0048e5a0
void CFlameCan::process(CFlameCan *param_1,float param_2);

// Original: core_flamecan.cpp_FUN_0048e6d0
// Address: 0048e6d0
int FUN_0048e6d0(int param_1);

// Original: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_0048e760
// Address: 0048e760
undefined4 CFlameCan::renderTransparent(int param_1);

// Original: core_flamecan.cpp_CFlameCan_getTargetPoints_FUN_0048e790
// Address: 0048e790
int __cdecl CFlameCan::getTargetPoints(CFlameCan *this_ptr,CVector3f *out_points_array);

// Original: core_flamecan.cpp_CFlameCan_archive_FUN_0048e830
// Address: 0048e830
void __cdecl CFlameCan::archive(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_FUN_0048e890
// Address: 0048e890
undefined4 FUN_0048e890(void);

// Original: core_flamecan.cpp_CFlameCan_getBoundingBox_FUN_0048e8a0
// Address: 0048e8a0
CBoundingBox3D * __cdecl CFlameCan::getBoundingBox(CFlameCan *this_ptr,CBoundingBox3D *out_box);

// Original: core_flamecan.cpp_CFlameCan_dtor_FUN_0048e8f0
// Address: 0048e8f0
CFlameCan * __cdecl CFlameCan::dtor(CFlameCan *this_ptr,uint flags);
