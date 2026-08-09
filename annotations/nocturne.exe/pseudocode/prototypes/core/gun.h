#pragma once

// Function prototypes for core/gun.cpp
// Generated from Ghidra function signatures

// Original: core_gun.cpp_staticInit_FUN_004b2700
// Address: 004b2700
void __cdecl staticInit(void);

// Original: core_gun.cpp_factoryFuncGun_FUN_004b2730
// Address: 004b2730
CGun * __cdecl factoryFuncGun(void);

// Original: core_gun.cpp_CGun_getActorType_FUN_004b2750
// Address: 004b2750
CDemonActorType * __cdecl CGun::getActorType(CGun *this_ptr);

// Original: core_gun.cpp_CGun_ctor_FUN_004b2760
// Address: 004b2760
CGun * __cdecl CGun::ctor(CGun *this_ptr);

// Original: core_gun.cpp_CGun_fire_FUN_004b27c0
// Address: 004b27c0
int __cdecl CGun::fire(CGun *this_ptr);

// Original: core_gun.cpp_CGun_getDamage_FUN_004b2fc0
// Address: 004b2fc0
float __cdecl CGun::getDamage(CGun *this_ptr);

// Original: core_gun.cpp_CGun_dtor_FUN_004b2ff0
// Address: 004b2ff0
CGun * __cdecl CGun::dtor(CGun *this_ptr,uint flags);
