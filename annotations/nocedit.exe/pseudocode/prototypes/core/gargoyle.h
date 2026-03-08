#pragma once

// Function prototypes for core/gargoyle.cpp
// Generated from Ghidra function signatures

// Original: core_gargoyle.cpp_staticInit_FUN_004e4470
// Address: 004e4470
void __cdecl staticInit(void);

// Original: core_gargoyle.cpp_factoryFunc_FUN_004e44a0
// Address: 004e44a0
CGargoyle * __cdecl factoryFunc(void);

// Original: core_gargoyle.cpp_CGargoyle_getActorType_FUN_004e44d0
// Address: 004e44d0
CDemonActorType * __cdecl CGargoyle::getActorType(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_ctor_FUN_004e44e0
// Address: 004e44e0
CGargoyle * __cdecl CGargoyle::ctor(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_setup_FUN_004e45e0
// Address: 004e45e0
void __cdecl CGargoyle::setup(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004e48a0
// Address: 004e48a0
int __cdecl CGargoyle::shouldMove(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_process_FUN_004e4a00
// Address: 004e4a00
void __cdecl CGargoyle::process(CGargoyle *this_ptr,float delta_time);

// Original: core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004e53f0
// Address: 004e53f0
void __cdecl CGargoyle::renderOpaque(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_archive_FUN_004e5470
// Address: 004e5470
void __cdecl CGargoyle::archive(CGargoyle *this_ptr);

// Original: core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004e5530
// Address: 004e5530
void __cdecl CGargoyle::processDismemberment(CGargoyle *this_ptr,SDamageInfo *damage_info);

// Original: core_gargoyle.cpp_CGargoyle_processDamage_FUN_004e57d0
// Address: 004e57d0
void __cdecl CGargoyle::processDamage(CGargoyle *this_ptr,SDamageInfo *damage_info);

// Original: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004e5930
// Address: 004e5930
int __cdecl CGargoyle::getTargetPoints(CGargoyle *this_ptr,CVector3f *out_points_array);

// Original: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004e5ad0
// Address: 004e5ad0
ECollisionType __cdecl CGargoyle::getCollisionType(CGargoyle *this_ptr,SCollisionInfo *collision_info);

// Original: core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0
// Address: 004e5af0
void __cdecl CGargoyle::getPropertyList(CGargoyle *this_ptr,CActorPropertyList *property_list);

// Original: core_gargoyle.cpp_CGargoyle_addFilesToExtract_FUN_004e5ba0
// Address: 004e5ba0
void __cdecl CGargoyle::addFilesToExtract(CGargoyle *this_ptr,_FILE *file_handle);

// Original: core_gargoyle.cpp_CGargoyle_dtor_FUN_004e5bd0
// Address: 004e5bd0
CGargoyle * __cdecl CGargoyle::dtor(CGargoyle *this_ptr,uint flags);
