#pragma once

// Function prototypes for core/cow.cpp
// Generated from Ghidra function signatures

// Original: core_cow.cpp_staticInit_FUN_0043bb80
// Address: 0043bb80
void __cdecl staticInit(void);

// Original: core_cow.cpp_factoryFunc_FUN_0043bbb0
// Address: 0043bbb0
CZombieCow * __cdecl factoryFunc(void);

// Original: core_cow.cpp_CZombieCow_getActorType_FUN_0043bbd0
// Address: 0043bbd0
CDemonActorType * __cdecl CZombieCow::getActorType(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_ctor_FUN_0043bbe0
// Address: 0043bbe0
CZombieCow * __cdecl CZombieCow::ctor(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_setup_FUN_0043bc50
// Address: 0043bc50
void __cdecl CZombieCow::setup(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_process_FUN_0043bdb0
// Address: 0043bdb0
void __cdecl CZombieCow::process(CZombieCow *this_ptr,float delta_time);

// Original: core_cow.cpp_CZombieCow_archive_FUN_0043c2e0
// Address: 0043c2e0
void __cdecl CZombieCow::archive(CZombieCow *this_ptr);

// Original: core_cow.cpp_CZombieCow_processDismemberment_FUN_0043c360
// Address: 0043c360
void __cdecl CZombieCow::processDismemberment(CZombieCow *this_ptr,SDamageInfo *damage_info);

// Original: core_cow.cpp_CZombieCow_processDamage_FUN_0043c5e0
// Address: 0043c5e0
void __cdecl CZombieCow::processDamage(CZombieCow *this_ptr,SDamageInfo *damage_info);

// Original: core_cow.cpp_CZombieCow_getTargetPoints_FUN_0043c6a0
// Address: 0043c6a0
int __cdecl CZombieCow::getTargetPoints(CZombieCow *this_ptr,CVector3f *out_points_array);

// Original: core_cow.cpp_CZombieCow_dtor_FUN_0043c6f0
// Address: 0043c6f0
CZombieCow * __cdecl CZombieCow::dtor(CZombieCow *this_ptr,uint flags);
