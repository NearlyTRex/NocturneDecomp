#pragma once

// Function prototypes for core/cow.cpp
// Generated from Ghidra function signatures

// Original: core_cow.cpp_staticInit_FUN_004440d0
// Address: 004440d0
void __cdecl staticInit(void);

// Original: core_cow.cpp_factoryFunc_FUN_00444100
// Address: 00444100
CZombieCow * __cdecl factoryFunc(void);

// Original: core_cow.cpp_CZombieCow_getActorType_FUN_00444130
// Address: 00444130
CDemonActorType * __cdecl CZombieCow::getActorType(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_ctor_FUN_00444140
// Address: 00444140
CZombieCow * __cdecl CZombieCow::ctor(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_setup_FUN_004441b0
// Address: 004441b0
void __cdecl CZombieCow::setup(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_process_FUN_00444310
// Address: 00444310
void __cdecl CZombieCow::process(CZombieCow *this_ptr,float delta_time);

// Original: core_cow.cpp_CZombieCow_archive_FUN_00444840
// Address: 00444840
void __cdecl CZombieCow::archive(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_FUN_004448c0
// Address: 004448c0
void __cdecl CZombieCow(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_processDamage_FUN_00444b40
// Address: 00444b40
void __cdecl CZombieCow::processDamage(CZombieCow *this_ptr,SDamageInfo *damage_info);

// Original: core_cow.cpp_CZombieCow_getTargetPoints_FUN_00444c00
// Address: 00444c00
int __cdecl CZombieCow::getTargetPoints(CZombieCow *this_ptr,CVector3f *out_points_array);

// Original: core_cow.cpp_CZombieCow_getPropertyList_FUN_00444c50
// Address: 00444c50
void __cdecl CZombieCow::getPropertyList(CZombieCow *this_ptr,CActorPropertyList *property_list);

// Original: core_cow.cpp_CZombieCow_randomize_FUN_00444c90
// Address: 00444c90
void __cdecl CZombieCow::randomize(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_addFilesToExtract_FUN_00444ca0
// Address: 00444ca0
void __cdecl CZombieCow::addFilesToExtract(CZombieCow *this_ptr,_FILE *file_handle);

// Original: core_cow.cpp_CZombieCow_dtor_FUN_00444cd0
// Address: 00444cd0
CZombieCow * __cdecl CZombieCow::dtor(CZombieCow *this_ptr,uint flags);
