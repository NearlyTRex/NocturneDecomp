#pragma once

// Function prototypes for core/dog.cpp
// Generated from Ghidra function signatures

// Original: core_dog.cpp_staticInit_FUN_00454600
// Address: 00454600
void __cdecl staticInit(void);

// Original: core_dog.cpp_factoryFunc_FUN_00454630
// Address: 00454630
CZombieDog * __cdecl factoryFunc(void);

// Original: core_dog.cpp_CZombieDog_getActorType_FUN_00454650
// Address: 00454650
CDemonActorType * __cdecl CZombieDog::getActorType(CZombieDog *this_ptr);

// Original: core_dog.cpp_CZombieDog_ctor_FUN_00454660
// Address: 00454660
CZombieDog * __cdecl CZombieDog::ctor(CZombieDog *this_ptr);

// Original: core_dog.cpp_CZombieDog_setup_FUN_004546d0
// Address: 004546d0
void __cdecl CZombieDog::setup(CZombieDog *this_ptr);

// Original: core_dog.cpp_CZombieDog_process_FUN_00454750
// Address: 00454750
void __cdecl CZombieDog::process(CZombieDog *this_ptr,float delta_time);

// Original: core_dog.cpp_CZombieDog_archive_FUN_00454dc0
// Address: 00454dc0
void __cdecl CZombieDog::archive(CZombieDog *this_ptr);

// Original: core_dog.cpp_CZombieDog_processDamage_FUN_00454e30
// Address: 00454e30
void __cdecl CZombieDog::processDamage(CZombieDog *this_ptr,SDamageInfo *damage_info);

// Original: core_dog.cpp_CZombieDog_getTargetPoints_FUN_00454ee0
// Address: 00454ee0
int __cdecl CZombieDog::getTargetPoints(CZombieDog *this_ptr,CVector3f *out_points_array);

// Original: core_dog.cpp_CZombieDog_dtor_FUN_00454f30
// Address: 00454f30
CZombieDog * __cdecl CZombieDog::dtor(CZombieDog *this_ptr,uint flags);
