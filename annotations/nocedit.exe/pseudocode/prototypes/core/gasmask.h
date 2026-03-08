#pragma once

// Function prototypes for core/gasmask.cpp
// Generated from Ghidra function signatures

// Original: core_gasmask.cpp_staticInit_FUN_004e5c90
// Address: 004e5c90
void __cdecl staticInit(void);

// Original: core_gasmask.cpp_factoryFunc_FUN_004e5cc0
// Address: 004e5cc0
CGasMask * __cdecl factoryFunc(void);

// Original: core_gasmask.cpp_CGasMask_getActorType_FUN_004e5cf0
// Address: 004e5cf0
CDemonActorType * __cdecl CGasMask::getActorType(CGasMask *this_ptr);

// Original: core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
// Address: 004e5d00
CGasMask * __cdecl CGasMask::ctor(CGasMask *this_ptr);

// Original: core_gasmask.cpp_CGasMask_setup_FUN_004e5d50
// Address: 004e5d50
void __cdecl CGasMask::setup(CGasMask *this_ptr);

// Original: core_gasmask.cpp_CGasMask_canPickup_FUN_004e5d70
// Address: 004e5d70
int __cdecl CGasMask::canPickup(CGasMask *this_ptr,CDemonActor *picker);

// Original: core_gasmask.cpp_CGasMask_process_FUN_004e5d90
// Address: 004e5d90
void __cdecl CGasMask::process(CGasMask *this_ptr,float delta_time);

// Original: core_gasmask.cpp_CGasMask_renderOpaque_FUN_004e5da0
// Address: 004e5da0
int __cdecl CGasMask::renderOpaque(CGasMask *this_ptr);

// Original: core_gasmask.cpp_CGasMask_archive_FUN_004e5e20
// Address: 004e5e20
void __cdecl CGasMask::archive(CGasMask *this_ptr);

// Original: core_gasmask.cpp_CGasMask_getCollisionType_FUN_004e5e50
// Address: 004e5e50
ECollisionType __cdecl CGasMask::getCollisionType(CGasMask *this_ptr,SCollisionInfo *collision_info);

// Original: core_gasmask.cpp_CGasMask_getBoundingBox_FUN_004e5e60
// Address: 004e5e60
CBoundingBox3D * __cdecl CGasMask::getBoundingBox(CGasMask *this_ptr,CBoundingBox3D *out_box);

// Original: core_gasmask.cpp_CGasMask_getPropertyList_FUN_004e5eb0
// Address: 004e5eb0
void __cdecl CGasMask::getPropertyList(CGasMask *this_ptr,CActorPropertyList *property_list);

// Original: core_gasmask.cpp_CGasMask_addFilesToExtract_FUN_004e5ef0
// Address: 004e5ef0
void __cdecl CGasMask::addFilesToExtract(CGasMask *this_ptr,_FILE *file_handle);

// Original: core_gasmask.cpp_CGasMask_dtor_FUN_004e5f40
// Address: 004e5f40
CGasMask * __cdecl CGasMask::dtor(CGasMask *this_ptr,uint flags);
