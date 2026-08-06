#pragma once

// Function prototypes for core/elephant.cpp
// Generated from Ghidra function signatures

// Original: core_elephant.cpp_staticInit_FUN_004776b0
// Address: 004776b0
void __cdecl staticInit(void);

// Original: core_elephant.cpp_factoryFunc_FUN_004776e0
// Address: 004776e0
CElephantGun * __cdecl factoryFunc(void);

// Original: core_elephant.cpp_CElephantGun_getActorType_FUN_00477700
// Address: 00477700
CDemonActorType * __cdecl CElephantGun::getActorType(CElephantGun *this_ptr);

// Original: core_elephant.cpp_CElephantGun_ctor_FUN_00477710
// Address: 00477710
CElephantGun * __cdecl CElephantGun::ctor(CElephantGun *this_ptr);

// Original: core_elephant.cpp_CElephantGun_process_FUN_004777a0
// Address: 004777a0
void __cdecl CElephantGun::process(CElephantGun *this_ptr,float delta_time);

// Original: core_elephant.cpp_CElephantGun_fire_FUN_00477890
// Address: 00477890
int __cdecl CElephantGun::fire(CElephantGun *this_ptr);

// Original: core_elephant.cpp_CElephantGun_onFired_FUN_00477fd0
// Address: 00477fd0
void __cdecl CElephantGun::onFired(CElephantGun *this_ptr);

// Original: core_elephant.cpp_CElephantGun_getDamage_FUN_004780e0
// Address: 004780e0
float __cdecl CElephantGun::getDamage(CElephantGun *this_ptr);

// Original: core_elephant.cpp_CElephantGun_fireProjectile_FUN_00478120
// Address: 00478120
void __cdecl CElephantGun::fireProjectile(CElephantGun *this_ptr);

// Original: core_elephant.cpp_CElephantGun_dtor_FUN_00478310
// Address: 00478310
CElephantGun * __cdecl CElephantGun::dtor(CElephantGun *this_ptr,uint flags);
