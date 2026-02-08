#pragma once

// Function prototypes for core/shotgun.cpp
// Generated from Ghidra function signatures

// Original: core_shotgun.cpp_staticInit_FUN_00587e70
// Address: 00587e70
void __cdecl staticInit(void);

// Original: core_shotgun.cpp_factoryFunc_FUN_00587ea0
// Address: 00587ea0
CShotgun * __cdecl factoryFunc(void);

// Original: core_shotgun.cpp_CShotgun_getActorType_FUN_00587ed0
// Address: 00587ed0
CDemonActorType * __cdecl CShotgun::getActorType(CShotgun *this_ptr);

// Original: core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0
// Address: 00587ee0
CShotgun * __cdecl CShotgun::ctor(CShotgun *this_ptr);

// Original: core_shotgun.cpp_CShotgun_process_FUN_00587f70
// Address: 00587f70
void __cdecl CShotgun::process(CShotgun *this_ptr,float delta_time);

// Original: core_shotgun.cpp_CShotgun_fire_FUN_00588060
// Address: 00588060
int __cdecl CShotgun::fire(CShotgun *this_ptr);

// Original: core_shotgun.cpp_CShotgun_FUN_005887a0
// Address: 005887a0
void __cdecl CShotgun(CShotgun *this_ptr);

// Original: core_shotgun.cpp_CShotgun_FUN_005888b0
// Address: 005888b0
float __cdecl CShotgun(CShotgun *this_ptr);

// Original: core_shotgun.cpp_CShotgun_FUN_005888f0
// Address: 005888f0
void __cdecl CShotgun(CShotgun *this_ptr);

// Original: core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0
// Address: 00588ae0
CShotgun * __cdecl CShotgun::dtor(CShotgun *this_ptr,uint flags);
