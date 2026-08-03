#pragma once

// Function prototypes for core/flamegun.cpp
// Generated from Ghidra function signatures

// Original: core_flamegun.cpp_staticInit_FUN_0048e960
// Address: 0048e960
void __cdecl staticInit(void);

// Original: core_flamegun.cpp_factoryFunc_FUN_0048e990
// Address: 0048e990
CFlameThrower * __cdecl factoryFunc(void);

// Original: core_flamegun.cpp_CFlameThrower_getActorType_FUN_0048e9b0
// Address: 0048e9b0
CDemonActorType * __cdecl CFlameThrower::getActorType(CFlameThrower *this_ptr);

// Original: core_flamegun.cpp_CFlameThrower_ctor_FUN_0048e9c0
// Address: 0048e9c0
CFlameThrower * __cdecl CFlameThrower::ctor(CFlameThrower *this_ptr);

// Original: core_flamegun.cpp_FUN_0048ea60
// Address: 0048ea60
undefined4 FUN_0048ea60(CCharacter *param_1);

// Original: core_flamegun.cpp_CFlameThrower_process_FUN_0048eb30
// Address: 0048eb30
void __cdecl CFlameThrower::process(CFlameThrower *this_ptr,float delta_time);

// Original: core_flamegun.cpp_FUN_0048ec60
// Address: 0048ec60
float FUN_0048ec60(int param_1);

// Original: core_flamegun.cpp_FUN_0048ec80
// Address: 0048ec80
void FUN_0048ec80(void);

// Original: core_flamegun.cpp_CFlameThrower_dtor_FUN_0048ecb0
// Address: 0048ecb0
CFlameThrower * __cdecl CFlameThrower::dtor(CFlameThrower *this_ptr,uint flags);
