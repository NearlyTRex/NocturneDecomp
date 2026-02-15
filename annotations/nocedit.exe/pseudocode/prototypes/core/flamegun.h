#pragma once

// Function prototypes for core/flamegun.cpp
// Generated from Ghidra function signatures

// Original: core_flamegun.cpp_staticInit_FUN_004cb810
// Address: 004cb810
void __cdecl staticInit(void);

// Original: core_flamegun.cpp_factoryFunc_FUN_004cb840
// Address: 004cb840
CFlameThrower * __cdecl factoryFunc(void);

// Original: core_flamegun.cpp_CFlameThrower_getActorType_FUN_004cb870
// Address: 004cb870
CDemonActorType * __cdecl CFlameThrower::getActorType(CFlameThrower *this_ptr);

// Original: core_flamegun.cpp_CFlameThrower_ctor_FUN_004cb880
// Address: 004cb880
CFlameThrower * __cdecl CFlameThrower::ctor(CFlameThrower *this_ptr);

// Original: core_flamegun.cpp_CFlameThrower_fire_FUN_004cb920
// Address: 004cb920
int __cdecl CFlameThrower::fire(CFlameThrower *this_ptr);

// Original: core_flamegun.cpp_CFlameThrower_process_FUN_004cb9b0
// Address: 004cb9b0
void __cdecl CFlameThrower::process(CFlameThrower *this_ptr,float delta_time);

// Original: core_flamegun.cpp_CFlameThrower_getDamage_FUN_004cbab0
// Address: 004cbab0
float __cdecl CFlameThrower::getDamage(CFlameThrower *this_ptr);

// Original: core_flamegun.cpp_CFlameThrower_fireProjectile_FUN_004cbad0
// Address: 004cbad0
void __cdecl CFlameThrower::fireProjectile(CFlameThrower *this_ptr);

// Original: core_flamegun.cpp_CFlameThrower_getDamageAlt_FUN_004cbad1
// Address: 004cbad1
float __cdecl CFlameThrower::getDamageAlt(CFlameThrower *this_ptr);

// Original: core_flamegun.cpp_CFlameThrower_dtor_FUN_004cbb00
// Address: 004cbb00
CFlameThrower * __cdecl CFlameThrower::dtor(CFlameThrower *this_ptr,uint flags);
