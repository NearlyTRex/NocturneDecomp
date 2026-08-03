#pragma once

// Function prototypes for core/succubus.cpp
// Generated from Ghidra function signatures

// Original: core_succubus.cpp_staticInit_FUN_00540ae0
// Address: 00540ae0
void __cdecl staticInit(void);

// Original: core_succubus.cpp_factoryFunc_FUN_00540b10
// Address: 00540b10
CSuccubus * __cdecl factoryFunc(void);

// Original: core_succubus.cpp_CSuccubus_getActorType_FUN_00540b30
// Address: 00540b30
CDemonActorType * __cdecl CSuccubus::getActorType(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_ctor_FUN_00540b40
// Address: 00540b40
CSuccubus * __cdecl CSuccubus::ctor(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_setup_FUN_00540c20
// Address: 00540c20
void __cdecl CSuccubus::setup(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_process_FUN_00540f50
// Address: 00540f50
void __cdecl CSuccubus::process(CSuccubus *this_ptr,float delta_time);

// Original: core_succubus.cpp_CSuccubus_renderOpaque_FUN_00541640
// Address: 00541640
int __cdecl CSuccubus::renderOpaque(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_archive_FUN_005417c0
// Address: 005417c0
void __cdecl CSuccubus::archive(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_processDamage_FUN_00541810
// Address: 00541810
void __cdecl CSuccubus::processDamage(CSuccubus *this_ptr,SDamageInfo *damage_info);

// Original: core_succubus.cpp_CSuccubus_getTargetPoints_FUN_00541830
// Address: 00541830
int __cdecl CSuccubus::getTargetPoints(CSuccubus *this_ptr,CVector3f *out_points_array);

// Original: core_succubus.cpp_CSuccubus_getCollisionType_FUN_00541840
// Address: 00541840
ECollisionType __cdecl CSuccubus::getCollisionType(CSuccubus *this_ptr,SCollisionInfo *collision_info);

// Original: core_succubus.cpp_CSuccubus_dtor_FUN_00541860
// Address: 00541860
CSuccubus * __cdecl CSuccubus::dtor(CSuccubus *this_ptr,uint flags);
