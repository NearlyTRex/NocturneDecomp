#pragma once

// Function prototypes for core/marquee.cpp
// Generated from Ghidra function signatures

// Original: core_marquee.cpp_staticInit_FUN_004cc080
// Address: 004cc080
void __cdecl staticInit(void);

// Original: core_marquee.cpp_factoryFunc_FUN_004cc0b0
// Address: 004cc0b0
CMarquee * __cdecl factoryFunc(void);

// Original: core_marquee.cpp_CMarquee_getActorType_FUN_004cc0d0
// Address: 004cc0d0
CDemonActorType * __cdecl CMarquee::getActorType(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_ctor_FUN_004cc0e0
// Address: 004cc0e0
CMarquee * __cdecl CMarquee::ctor(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_computeBoundingBox_FUN_004cc1b0
// Address: 004cc1b0
void __cdecl CMarquee::computeBoundingBox(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_setup_FUN_004cc2e0
// Address: 004cc2e0
void __cdecl CMarquee::setup(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_process_FUN_004cc320
// Address: 004cc320
void __cdecl CMarquee::process(CMarquee *this_ptr,float delta_time);

// Original: core_marquee.cpp_CMarquee_renderOpaque_FUN_004cc3d0
// Address: 004cc3d0
int __cdecl CMarquee::renderOpaque(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_renderLightBulb_FUN_004cc440
// Address: 004cc440
void __cdecl CMarquee::renderLightBulb(CMarquee *this_ptr,CVector3f *position);

// Original: core_marquee.cpp_CMarquee_renderTransparent_FUN_004cc5d0
// Address: 004cc5d0
int __cdecl CMarquee::renderTransparent(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_archive_FUN_004cc870
// Address: 004cc870
void __cdecl CMarquee::archive(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_getCollisionType_FUN_004cc8f0
// Address: 004cc8f0
ECollisionType __cdecl CMarquee::getCollisionType(CMarquee *this_ptr,SCollisionInfo *collision_info);

// Original: core_marquee.cpp_CMarquee_getBoundingBox_FUN_004cc900
// Address: 004cc900
CBoundingBox3D * __cdecl CMarquee::getBoundingBox(CMarquee *this_ptr,CBoundingBox3D *out_box);

// Original: core_marquee.cpp_CMarquee_dtor_FUN_004cc960
// Address: 004cc960
CMarquee * __cdecl CMarquee::dtor(CMarquee *this_ptr,uint flags);
