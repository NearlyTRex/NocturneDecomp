#pragma once

// Function prototypes for core/marquee.cpp
// Generated from Ghidra function signatures

// Original: core_marquee.cpp_staticInit_FUN_0050baf0
// Address: 0050baf0
void __cdecl staticInit(void);

// Original: core_marquee.cpp_factoryFunc_FUN_0050bb20
// Address: 0050bb20
CMarquee * __cdecl factoryFunc(void);

// Original: core_marquee.cpp_CMarquee_getActorType_FUN_0050bb50
// Address: 0050bb50
CDemonActorType * __cdecl CMarquee::getActorType(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_ctor_FUN_0050bb60
// Address: 0050bb60
CMarquee * __cdecl CMarquee::ctor(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_FUN_0050bc30
// Address: 0050bc30
void __cdecl CMarquee(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_setup_FUN_0050bd60
// Address: 0050bd60
void __cdecl CMarquee::setup(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_process_FUN_0050bda0
// Address: 0050bda0
void __cdecl CMarquee::process(CMarquee *this_ptr,float delta_time);

// Original: core_marquee.cpp_CMarquee_renderOpaque_FUN_0050be50
// Address: 0050be50
int __cdecl CMarquee::renderOpaque(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_FUN_0050bec0
// Address: 0050bec0
void __cdecl CMarquee(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_renderTransparent_FUN_0050c050
// Address: 0050c050
int __cdecl CMarquee::renderTransparent(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_archive_FUN_0050c2f0
// Address: 0050c2f0
void __cdecl CMarquee::archive(CMarquee *this_ptr);

// Original: core_marquee.cpp_CMarquee_hasCollision_FUN_0050c370
// Address: 0050c370
int __cdecl CMarquee::hasCollision(CMarquee *this_ptr,SCollisionInfo *collision_info);

// Original: core_marquee.cpp_CMarquee_getBoundingBox_FUN_0050c380
// Address: 0050c380
CBoundingBox3D * __cdecl CMarquee::getBoundingBox(CMarquee *this_ptr,CBoundingBox3D *out_box);

// Original: core_marquee.cpp_CMarquee_getPropertyList_FUN_0050c3e0
// Address: 0050c3e0
void __cdecl CMarquee::getPropertyList(CMarquee *this_ptr,CActorPropertyList *property_list);

// Original: core_marquee.cpp_CMarquee_writeDependencies_FUN_0050c480
// Address: 0050c480
void __cdecl CMarquee::writeDependencies(CMarquee *this_ptr,_FILE *file_handle);

// Original: core_marquee.cpp_CMarquee_dtor_FUN_0050c4c0
// Address: 0050c4c0
CMarquee * __cdecl CMarquee::dtor(CMarquee *this_ptr,uint d1,uint d2,uint d3);
