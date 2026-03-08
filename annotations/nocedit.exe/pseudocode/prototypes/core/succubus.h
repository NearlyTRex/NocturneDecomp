#pragma once

// Function prototypes for core/succubus.cpp
// Generated from Ghidra function signatures

// Original: core_succubus.cpp_staticInit_FUN_005c6a10
// Address: 005c6a10
void __cdecl staticInit(void);

// Original: core_succubus.cpp_factoryFunc_FUN_005c6a40
// Address: 005c6a40
CSuccubus * __cdecl factoryFunc(void);

// Original: core_succubus.cpp_CSuccubus_getActorType_FUN_005c6a70
// Address: 005c6a70
CDemonActorType * __cdecl CSuccubus::getActorType(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
// Address: 005c6a80
CSuccubus * __cdecl CSuccubus::ctor(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_setup_FUN_005c6b60
// Address: 005c6b60
void __cdecl CSuccubus::setup(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_process_FUN_005c6e90
// Address: 005c6e90
void __cdecl CSuccubus::process(CSuccubus *this_ptr,float delta_time);

// Original: core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590
// Address: 005c7590
int __cdecl CSuccubus::renderOpaque(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_archive_FUN_005c7710
// Address: 005c7710
void __cdecl CSuccubus::archive(CSuccubus *this_ptr);

// Original: core_succubus.cpp_CSuccubus_processDamage_FUN_005c7760
// Address: 005c7760
void __cdecl CSuccubus::processDamage(CSuccubus *this_ptr,SDamageInfo *damage_info);

// Original: core_succubus.cpp_CSuccubus_getTargetPoints_FUN_005c7780
// Address: 005c7780
int __cdecl CSuccubus::getTargetPoints(CSuccubus *this_ptr,CVector3f *out_points_array);

// Original: core_succubus.cpp_CSuccubus_getCollisionType_FUN_005c7790
// Address: 005c7790
ECollisionType __cdecl CSuccubus::getCollisionType(CSuccubus *this_ptr,SCollisionInfo *collision_info);

// Original: core_succubus.cpp_CSuccubus_getPropertyList_FUN_005c77b0
// Address: 005c77b0
void __cdecl CSuccubus::getPropertyList(CSuccubus *this_ptr,CActorPropertyList *property_list);

// Original: core_succubus.cpp_CSuccubus_addFilesToExtract_FUN_005c77f0
// Address: 005c77f0
void __cdecl CSuccubus::addFilesToExtract(CSuccubus *this_ptr,_FILE *file_handle);

// Original: core_succubus.cpp_CSuccubus_dtor_FUN_005c7820
// Address: 005c7820
CSuccubus * __cdecl CSuccubus::dtor(CSuccubus *this_ptr,uint flags);
