#pragma once

// Function prototypes for core/lightgun.cpp
// Generated from Ghidra function signatures

// Original: core_lightgun.cpp_staticInit_FUN_004c6dd0
// Address: 004c6dd0
void __cdecl staticInit(void);

// Original: core_lightgun.cpp_factoryFuncLightGun_FUN_004c6e00
// Address: 004c6e00
CLightGun * __cdecl factoryFuncLightGun(void);

// Original: core_lightgun.cpp_CLightGun_getActorType_FUN_004c6e20
// Address: 004c6e20
CDemonActorType * __cdecl CLightGun::getActorType(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_ctor_FUN_004c6e30
// Address: 004c6e30
CLightGun * __cdecl CLightGun::ctor(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_isVampireType_FUN_004c6ef0
// Address: 004c6ef0
int __cdecl CLightGun::isVampireType(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_FUN_004c6f50
// Address: 004c6f50
int __cdecl CLightGun(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0
// Address: 004c6ff0
void __cdecl CLightGun::updateBeamLight(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_canSeeTarget_FUN_004c70a0
// Address: 004c70a0
int __cdecl CLightGun::canSeeTarget(CLightGun *this_ptr,CDemonActor *target);

// Original: core_lightgun.cpp_CLightGun_fire_FUN_004c71a0
// Address: 004c71a0
int __cdecl CLightGun::fire(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_process_FUN_004c79a0
// Address: 004c79a0
void __cdecl CLightGun::process(CLightGun *this_ptr,float delta_time);

// Original: core_lightgun.cpp_CLightGun_getDamage_FUN_004c7c60
// Address: 004c7c60
float __cdecl CLightGun::getDamage(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_fireProjectile_FUN_004c7ca0
// Address: 004c7ca0
void __cdecl CLightGun::fireProjectile(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_dtor_FUN_004c8040
// Address: 004c8040
CLightGun * __cdecl CLightGun::dtor(CLightGun *this_ptr,uint flags);
