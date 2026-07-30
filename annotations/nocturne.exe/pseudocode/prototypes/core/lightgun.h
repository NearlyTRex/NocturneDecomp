#pragma once

// Function prototypes for core/lightgun.cpp
// Generated from Ghidra function signatures

// Original: core_lightgun.cpp_staticInit_FUN_004c6dd0
// Address: 004c6dd0
void __cdecl staticInit(void);

// Original: core_lightgun.cpp_factoryFunc_FUN_004c6e00
// Address: 004c6e00
CLightGun * __cdecl factoryFunc(void);

// Original: core_lightgun.cpp_CLightGun_getActorType_FUN_004c6e20
// Address: 004c6e20
CDemonActorType * CLightGun::getActorType(void);

// Original: core_lightgun.cpp_CLightGun_ctor_FUN_004c6e30
// Address: 004c6e30
CLightGun * __cdecl CLightGun::ctor(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_isVampireType_FUN_004c6ef0
// Address: 004c6ef0
int __cdecl CLightGun::isVampireType(CLightGun *this_ptr);

// Original: core_lightgun.cpp_FUN_004c6f50
// Address: 004c6f50
undefined4 FUN_004c6f50(void);

// Original: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0
// Address: 004c6ff0
void __cdecl CLightGun::updateBeamLight(CLightGun *this_ptr);

// Original: core_lightgun.cpp_CLightGun_canSeeTarget_FUN_004c70a0
// Address: 004c70a0
undefined4 CLightGun::canSeeTarget(CVector3f *param_1,CDemonActor *param_2);

// Original: core_lightgun.cpp_FUN_004c71a0
// Address: 004c71a0
undefined4 FUN_004c71a0(CCharacter *param_1);

// Original: core_lightgun.cpp_CLightGun_process_FUN_004c79a0
// Address: 004c79a0
void CLightGun::process(CLightGun *param_1,float param_2);

// Original: core_lightgun.cpp_CLightGun_getDamage_FUN_004c7c60
// Address: 004c7c60
float __cdecl CLightGun::getDamage(CLightGun *this_ptr);

// Original: core_lightgun.cpp_FUN_004c7ca0
// Address: 004c7ca0
void FUN_004c7ca0(CCharacter *param_1);

// Original: core_lightgun.cpp_CLightGun_dtor_FUN_004c8040
// Address: 004c8040
CWeapon * CLightGun::dtor(CWeapon *param_1,byte param_2);
