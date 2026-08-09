#pragma once

// Function prototypes for core/tommygun.cpp
// Generated from Ghidra function signatures

// Original: core_tommygun.cpp_staticInit_FUN_005dda20
// Address: 005dda20
void __cdecl staticInit(void);

// Original: core_tommygun.cpp_factoryFuncTommyGun_FUN_005dda50
// Address: 005dda50
CTommyGun * __cdecl factoryFuncTommyGun(void);

// Original: core_tommygun.cpp_CTommyGun_getActorType_FUN_005dda80
// Address: 005dda80
CDemonActorType * __cdecl CTommyGun::getActorType(CTommyGun *this_ptr);

// Original: core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
// Address: 005dda90
CTommyGun * __cdecl CTommyGun::ctor(CTommyGun *this_ptr);

// Original: core_tommygun.cpp_CTommyGun_fire_FUN_005ddb30
// Address: 005ddb30
int __cdecl CTommyGun::fire(CTommyGun *this_ptr);

// Original: core_tommygun.cpp_CTommyGun_getDamage_FUN_005de330
// Address: 005de330
float __cdecl CTommyGun::getDamage(CTommyGun *this_ptr);

// Original: core_tommygun.cpp_CTommyGun_process_FUN_005de360
// Address: 005de360
void __cdecl CTommyGun::process(CTommyGun *this_ptr,float delta_time);

// Original: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_005de5a0
// Address: 005de5a0
void __cdecl CTommyGun::setWeaponState(CTommyGun *this_ptr,int weapon_state);

// Original: core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0
// Address: 005de5d0
CTommyGun * __cdecl CTommyGun::dtor(CTommyGun *this_ptr,uint flags);
