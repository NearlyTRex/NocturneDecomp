#pragma once

// Function prototypes for core/shotgun.cpp
// Generated from Ghidra function signatures

// Original: core_shotgun.cpp_staticInit_FUN_00515cc0
// Address: 00515cc0
void __cdecl staticInit(void);

// Original: core_shotgun.cpp_factoryFunc_FUN_00515cf0
// Address: 00515cf0
CShotgun * __cdecl factoryFunc(void);

// Original: core_shotgun.cpp_CShotgun_getActorType_FUN_00515d10
// Address: 00515d10
CDemonActorType * CShotgun::getActorType(void);

// Original: core_shotgun.cpp_FUN_00515d20
// Address: 00515d20
CWeapon * FUN_00515d20(CWeapon *param_1);

// Original: core_shotgun.cpp_CShotgun_process_FUN_00515db0
// Address: 00515db0
void __cdecl CShotgun::process(CShotgun *this_ptr,float delta_time);

// Original: core_shotgun.cpp_FUN_00515ea0
// Address: 00515ea0
undefined4 FUN_00515ea0(CCharacter *param_1);

// Original: core_shotgun.cpp_CShotgun_onFired_FUN_00516620
// Address: 00516620
void CShotgun::onFired(CDemonActor *param_1);

// Original: core_shotgun.cpp_CShotgun_getDamage_FUN_00516730
// Address: 00516730
float __cdecl CShotgun::getDamage(CShotgun *this_ptr);

// Original: core_shotgun.cpp_CShotgun_fireProjectile_FUN_00516770
// Address: 00516770
void __cdecl CShotgun::fireProjectile(CShotgun *this_ptr);

// Original: core_shotgun.cpp_CShotgun_dtor_FUN_00516960
// Address: 00516960
CWeapon * CShotgun::dtor(CWeapon *param_1,byte param_2);
