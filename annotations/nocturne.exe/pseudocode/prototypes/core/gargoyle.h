#pragma once

// Function prototypes for core/gargoyle.cpp
// Generated from Ghidra function signatures

// Original: core_gargoyle.cpp_staticInit_FUN_004a72f0
// Address: 004a72f0
void __cdecl staticInit(void);

// Original: core_gargoyle.cpp_factoryFunc_FUN_004a7320
// Address: 004a7320
CGargoyle * __cdecl factoryFunc(void);

// Original: core_gargoyle.cpp_CGargoyle_getActorType_FUN_004a7340
// Address: 004a7340
CDemonActorType * __cdecl CGargoyle::getActorType(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_ctor_FUN_004a7350
// Address: 004a7350
CGargoyle * __cdecl CGargoyle::ctor(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_setup_FUN_004a7450
// Address: 004a7450
void __cdecl CGargoyle::setup(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710
// Address: 004a7710
int __cdecl CGargoyle::shouldMove(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_process_FUN_004a7870
// Address: 004a7870
void __cdecl CGargoyle::process(CGargoyle *this_ptr,float delta_time);

// Original: core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004a8260
// Address: 004a8260
void __cdecl CGargoyle::renderOpaque(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_archive_FUN_004a8270
// Address: 004a8270
void __cdecl CGargoyle::archive(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004a8330
// Address: 004a8330
void __cdecl CGargoyle::processDismemberment(CGargoyle *this_ptr,SDamageInfo *damage_info);

// Original: core_gargoyle.cpp_CGargoyle_processDamage_FUN_004a85d0
// Address: 004a85d0
void __cdecl CGargoyle::processDamage(CGargoyle *this_ptr,SDamageInfo *damage_info);

// Original: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004a8730
// Address: 004a8730
int __cdecl CGargoyle::getTargetPoints(CGargoyle *this_ptr,CVector3f *out_points_array);

// Original: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004a88d0
// Address: 004a88d0
ECollisionType __cdecl CGargoyle::getCollisionType(CGargoyle *this_ptr,SCollisionInfo *collision_info);

// Original: core_gargoyle.cpp_CGargoyle_dtor_FUN_004a88f0
// Address: 004a88f0
CGargoyle * __cdecl CGargoyle::dtor(CGargoyle *this_ptr,uint flags);
