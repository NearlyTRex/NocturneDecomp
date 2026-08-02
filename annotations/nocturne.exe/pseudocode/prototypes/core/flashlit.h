#pragma once

// Function prototypes for core/flashlit.cpp
// Generated from Ghidra function signatures

// Original: core_flashlit.cpp_staticInit_FUN_0048ed00
// Address: 0048ed00
void __cdecl staticInit(void);

// Original: core_flashlit.cpp_factoryFunc_FUN_0048ed30
// Address: 0048ed30
CFlashlight * __cdecl factoryFunc(void);

// Original: core_flashlit.cpp_CFlashlight_getActorType_FUN_0048ed50
// Address: 0048ed50
CDemonActorType * CFlashlight::getActorType(void);

// Original: core_flashlit.cpp_CFlashlight_ctor_FUN_0048ed60
// Address: 0048ed60
CFlashlight * __cdecl CFlashlight::ctor(CFlashlight *this_ptr);

// Original: core_flashlit.cpp_CFlashlight_fire_FUN_0048ede0
// Address: 0048ede0
int __cdecl CFlashlight::fire(CFlashlight *this_ptr);

// Original: core_flashlit.cpp_CFlashlight_getDamage_FUN_0048edf0
// Address: 0048edf0
float __cdecl CFlashlight::getDamage(CFlashlight *this_ptr);

// Original: core_flashlit.cpp_CFlashlight_dtor_FUN_0048ee00
// Address: 0048ee00
CFlashlight * __cdecl CFlashlight::dtor(CFlashlight *this_ptr,uint flags);
