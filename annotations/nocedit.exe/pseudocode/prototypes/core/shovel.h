#pragma once

// Function prototypes for core/shovel.cpp
// Generated from Ghidra function signatures

// Original: core_shovel.cpp_staticInit_FUN_00588b30
// Address: 00588b30
void __cdecl staticInit(void);

// Original: core_shovel.cpp_factoryFunc_FUN_00588b60
// Address: 00588b60
CShovel * __cdecl factoryFunc(void);

// Original: core_shovel.cpp_CShovel_getActorType_FUN_00588b90
// Address: 00588b90
CDemonActorType * __cdecl CShovel::getActorType(CShovel *this_ptr);

// Original: core_shovel.cpp_CShovel_ctor_FUN_00588ba0
// Address: 00588ba0
CShovel * __cdecl CShovel::ctor(CShovel *this_ptr);

// Original: core_shovel.cpp_CShovel_fire_FUN_00588c20
// Address: 00588c20
int __cdecl CShovel::fire(CShovel *this_ptr);

// Original: core_shovel.cpp_CShovel_getDamage_FUN_00588c40
// Address: 00588c40
float __cdecl CShovel::getDamage(CShovel *this_ptr);

// Original: core_shovel.cpp_CShovel_fireProjectile_FUN_00588c70
// Address: 00588c70
void __cdecl CShovel::fireProjectile(CShovel *this_ptr);

// Original: core_shovel.cpp_CShovel_dtor_FUN_00588c80
// Address: 00588c80
CShovel * __cdecl CShovel::dtor(CShovel *this_ptr,uint flags);
