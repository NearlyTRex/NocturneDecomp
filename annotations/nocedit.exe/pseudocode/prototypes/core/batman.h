#pragma once

// Function prototypes for core/batman.cpp
// Generated from Ghidra function signatures

// Original: core_batman.cpp_staticInit_FUN_004163e0
// Address: 004163e0
void __cdecl staticInit(void);

// Original: core_batman.cpp_factoryFunc_FUN_00416410
// Address: 00416410
CBatman * __cdecl factoryFunc(void);

// Original: core_batman.cpp_CBatman_getActorType_FUN_00416440
// Address: 00416440
CDemonActorType * __cdecl CBatman::getActorType(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_ctor_FUN_00416450
// Address: 00416450
CBatman * __cdecl CBatman::ctor(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_setup_FUN_00416510
// Address: 00416510
void __cdecl CBatman::setup(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_FUN_004167f0
// Address: 004167f0
void __cdecl CBatman(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_process_FUN_00416870
// Address: 00416870
void __cdecl CBatman::process(CBatman *this_ptr,float delta_time);

// Original: core_batman.cpp_CBatman_renderOpaque_FUN_004173b0
// Address: 004173b0
int __cdecl CBatman::renderOpaque(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_archive_FUN_00417580
// Address: 00417580
void __cdecl CBatman::archive(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_FUN_00417660
// Address: 00417660
void __cdecl CBatman(CBatman *this_ptr);

// Original: core_batman.cpp_CBatman_processDamage_FUN_004179a0
// Address: 004179a0
void __cdecl CBatman::processDamage(CBatman *this_ptr,SDamageInfo *damage_info);

// Original: core_batman.cpp_CBatman_getTargetPoints_FUN_00417bb0
// Address: 00417bb0
int __cdecl CBatman::getTargetPoints(CBatman *this_ptr,CVector3f *out_points_array);

// Original: core_batman.cpp_CBatman_hasCollision_FUN_00417cb0
// Address: 00417cb0
int __cdecl CBatman::hasCollision(CBatman *this_ptr,SCollisionInfo *collision_info);

// Original: core_batman.cpp_CBatman_getPropertyList_FUN_00417cd0
// Address: 00417cd0
void __cdecl CBatman::getPropertyList(CBatman *this_ptr,CActorPropertyList *property_list);

// Original: core_batman.cpp_CBatman_writeDependencies_FUN_00417d30
// Address: 00417d30
void __cdecl CBatman::writeDependencies(CBatman *this_ptr,_FILE *file_handle);

// Original: core_batman.cpp_CBatman_dtor_FUN_00417d60
// Address: 00417d60
CBatman * __cdecl CBatman::dtor(CBatman *this_ptr,uint flags);
