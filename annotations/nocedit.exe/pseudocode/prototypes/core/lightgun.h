#pragma once

// Function prototypes for core/lightgun.cpp
// Generated from Ghidra function signatures

// Original: core_lightgun.cpp_staticInit_FUN_00505890
// Address: 00505890
void __cdecl staticInit(void);

// Original: core_lightgun.cpp_factoryFuncLightGun_FUN_005058c0
// Address: 005058c0
CLightGun * __cdecl factoryFuncLightGun(void);

// Original: core_lightgun.cpp_CLightGun_getActorType_FUN_005058f0
// Address: 005058f0
CDemonActorType * __cdecl CLightGun::getActorType(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_ctor_FUN_00505900
// Address: 00505900
CLightGun * __cdecl CLightGun::ctor(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_isVampireType_FUN_005059c0
// Address: 005059c0
int __cdecl CLightGun::isVampireType(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_isLightVulnerable_FUN_00505a20
// Address: 00505a20
int __cdecl CLightGun::isLightVulnerable(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_00505ac0
// Address: 00505ac0
void __cdecl CLightGun::updateBeamLight(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_canSeeTarget_FUN_00505b70
// Address: 00505b70
int __cdecl CLightGun::canSeeTarget(CLightGun *this_ptr,CDemonActor *target);

// Original: core_lightgun.cpp_CLightGun_fire_FUN_00505c70
// Address: 00505c70
int __cdecl CLightGun::fire(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_process_FUN_00506450
// Address: 00506450
void __cdecl CLightGun::process(CLightGun *this_ptr,float delta_time);

// Original: core_lightgun.cpp_CLightGun_getDamage_FUN_00506670
// Address: 00506670
float __cdecl CLightGun::getDamage(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_fireProjectile_FUN_005066b0
// Address: 005066b0
void __cdecl CLightGun::fireProjectile(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_addFilesToExtract_FUN_005066f0
// Address: 005066f0
void __cdecl CLightGun::addFilesToExtract(CLightGun *this_ptr,_FILE *file_handle);

// Original: core_lightgun.cpp_CLightGun_dtor_FUN_00506a50
// Address: 00506a50
CLightGun * __cdecl CLightGun::dtor(CLightGun *this_ptr,uint flags);
