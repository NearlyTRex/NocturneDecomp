#pragma once

// Function prototypes for core/trash.cpp
// Generated from Ghidra function signatures

// Original: core_trash.cpp_staticInit_FUN_00546c30
// Address: 00546c30
void __cdecl staticInit(void);

// Original: core_trash.cpp_factoryFunc_FUN_00546c60
// Address: 00546c60
CTrash * __cdecl factoryFunc(void);

// Original: core_trash.cpp_CTrash_getActorType_FUN_00546c80
// Address: 00546c80
CDemonActorType * __cdecl CTrash::getActorType(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_ctor_FUN_00546c90
// Address: 00546c90
CTrash * __cdecl CTrash::ctor(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_setup_FUN_00546ce0
// Address: 00546ce0
void __cdecl CTrash::setup(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_archive_FUN_00546da0
// Address: 00546da0
void __cdecl CTrash::archive(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_process_FUN_00546e10
// Address: 00546e10
void __cdecl CTrash::process(CTrash *this_ptr,float delta_time);

// Original: core_trash.cpp_CTrash_renderOpaque_FUN_00547670
// Address: 00547670
int __cdecl CTrash::renderOpaque(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_getBoundingBox_FUN_00547730
// Address: 00547730
CBoundingBox3D * __cdecl CTrash::getBoundingBox(CTrash *this_ptr,CBoundingBox3D *out_box);

// Original: core_trash.cpp_CTrash_getCollisionType_FUN_005477f0
// Address: 005477f0
ECollisionType __cdecl CTrash::getCollisionType(CTrash *this_ptr,SCollisionInfo *collision_info);

// Original: core_trash.cpp_CTrash_dtor_FUN_00547800
// Address: 00547800
CTrash * __cdecl CTrash::dtor(CTrash *this_ptr,uint flags);
