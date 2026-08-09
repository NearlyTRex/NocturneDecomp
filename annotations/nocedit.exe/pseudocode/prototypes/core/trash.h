#pragma once

// Function prototypes for core/trash.cpp
// Generated from Ghidra function signatures

// Original: core_trash.cpp_staticInit_FUN_005deb00
// Address: 005deb00
void __cdecl staticInit(void);

// Original: core_trash.cpp_factoryFuncTrash_FUN_005deb30
// Address: 005deb30
CTrash * __cdecl factoryFuncTrash(void);

// Original: core_trash.cpp_CTrash_getActorType_FUN_005deb60
// Address: 005deb60
CDemonActorType * __cdecl CTrash::getActorType(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_ctor_FUN_005deb70
// Address: 005deb70
CTrash * __cdecl CTrash::ctor(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_setup_FUN_005debc0
// Address: 005debc0
void __cdecl CTrash::setup(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_archive_FUN_005dec80
// Address: 005dec80
void __cdecl CTrash::archive(CTrash *this_ptr);

// Original: core_trash.cpp_addRandomJitter_FUN_005decc0
// Address: 005decc0
void __cdecl addRandomJitter(float *value);

// Original: core_trash.cpp_CTrash_process_FUN_005decf0
// Address: 005decf0
void __cdecl CTrash::process(CTrash *this_ptr,float delta_time);

// Original: core_trash.cpp_CTrash_renderOpaque_FUN_005df550
// Address: 005df550
int __cdecl CTrash::renderOpaque(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_getBoundingBox_FUN_005df610
// Address: 005df610
CBoundingBox3D * __cdecl CTrash::getBoundingBox(CTrash *this_ptr,CBoundingBox3D *out_box);

// Original: core_trash.cpp_CTrash_getCollisionType_FUN_005df6d0
// Address: 005df6d0
ECollisionType __cdecl CTrash::getCollisionType(CTrash *this_ptr,SCollisionInfo *collision_info);

// Original: core_trash.cpp_CTrash_getPropertyList_FUN_005df6e0
// Address: 005df6e0
void __cdecl CTrash::getPropertyList(CTrash *this_ptr,CActorPropertyList *property_list);

// Original: core_trash.cpp_CTrash_addFilesToExtract_FUN_005df720
// Address: 005df720
void __cdecl CTrash::addFilesToExtract(CTrash *this_ptr,_FILE *file_handle);

// Original: core_trash.cpp_CTrash_processInEditor_FUN_005df750
// Address: 005df750
void __cdecl CTrash::processInEditor(CTrash *this_ptr);

// Original: core_trash.cpp_CTrash_dtor_FUN_005df780
// Address: 005df780
CTrash * __cdecl CTrash::dtor(CTrash *this_ptr,uint flags);
