#pragma once

// Function prototypes for core/drip.cpp
// Generated from Ghidra function signatures

// Original: core_drip.cpp_staticInit_FUN_00461ff0
// Address: 00461ff0
void __cdecl staticInit(void);

// Original: core_drip.cpp_factoryFuncDrip_FUN_00462030
// Address: 00462030
CDrip * __cdecl factoryFuncDrip(void);

// Original: core_drip.cpp_CDrip_getActorType_FUN_00462050
// Address: 00462050
CDemonActorType * __cdecl CDrip::getActorType(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_ctor_FUN_00462060
// Address: 00462060
CDrip * __cdecl CDrip::ctor(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_setup_FUN_00462140
// Address: 00462140
void __cdecl CDrip::setup(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_archive_FUN_004621d0
// Address: 004621d0
void __cdecl CDrip::archive(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_process_FUN_00462300
// Address: 00462300
void __cdecl CDrip::process(CDrip *this_ptr,float delta_time);

// Original: core_drip.cpp_CDrip_reset_FUN_00462710
// Address: 00462710
void __cdecl CDrip::reset(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_renderOpaque_FUN_00462720
// Address: 00462720
int __cdecl CDrip::renderOpaque(CDrip *this_ptr);

// Original: core_drip.cpp_CDrip_getBoundingBox_FUN_004627a0
// Address: 004627a0
CBoundingBox3D * __cdecl CDrip::getBoundingBox(CDrip *this_ptr,CBoundingBox3D *out_box);

// Original: core_drip.cpp_CDrip_getCollisionType_FUN_00462880
// Address: 00462880
ECollisionType __cdecl CDrip::getCollisionType(CDrip *this_ptr,SCollisionInfo *collision_info);

// Original: core_drip.cpp_CDrip_dtor_FUN_00462890
// Address: 00462890
CDrip * __cdecl CDrip::dtor(CDrip *this_ptr,uint flags);
