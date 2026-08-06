#pragma once

// Function prototypes for core/tommygun.cpp
// Generated from Ghidra function signatures

// Original: core_tommygun.cpp_staticInit_FUN_00545b30
// Address: 00545b30
void __cdecl staticInit(void);

// Original: core_tommygun.cpp_factoryFunc_FUN_00545b60
// Address: 00545b60
CTommyGun * __cdecl factoryFunc(void);

// Original: core_tommygun.cpp_CTommyGun_getActorType_FUN_00545b80
// Address: 00545b80
CDemonActorType * __cdecl CTommyGun::getActorType(CTommyGun *this_ptr);

// Original: core_tommygun.cpp_CTommyGun_ctor_FUN_00545b90
// Address: 00545b90
CTommyGun * __cdecl CTommyGun::ctor(CTommyGun *this_ptr);

// Original: core_tommygun.cpp_CTommyGun_fire_FUN_00545c30
// Address: 00545c30
int __cdecl CTommyGun::fire(CTommyGun *this_ptr);

// Original: core_tommygun.cpp_CTommyGun_getDamage_FUN_00546470
// Address: 00546470
float __cdecl CTommyGun::getDamage(CTommyGun *this_ptr);

// Original: core_tommygun.cpp_CTommyGun_process_FUN_005464a0
// Address: 005464a0
void __cdecl CTommyGun::process(CTommyGun *this_ptr,float delta_time);

// Original: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_00546740
// Address: 00546740
void __cdecl CTommyGun::setWeaponState(CTommyGun *this_ptr,int weapon_state);

// Original: core_tommygun.cpp_CTommyGun_dtor_FUN_00546770
// Address: 00546770
CTommyGun * __cdecl CTommyGun::dtor(CTommyGun *this_ptr,uint flags);
