#pragma once

// Function prototypes for core/dynamite.cpp
// Generated from Ghidra function signatures

// Original: core_dynamite.cpp_staticInit_FUN_0049cd40
// Address: 0049cd40
void __cdecl staticInit(void);

// Original: core_dynamite.cpp_factoryFunc_FUN_0049cd80
// Address: 0049cd80
CDynamite * __cdecl factoryFunc(void);

// Original: core_dynamite.cpp_CDynamite_getActorType_FUN_0049cdb0
// Address: 0049cdb0
CDemonActorType * __cdecl CDynamite::getActorType(CDynamite *this_ptr);

// Original: core_dynamite.cpp_CDynamite_ctor_FUN_0049cdc0
// Address: 0049cdc0
CDynamite * __cdecl CDynamite::ctor(CDynamite *this_ptr);

// Original: core_dynamite.cpp_CDynamite_fire_FUN_0049ce70
// Address: 0049ce70
int __cdecl CDynamite::fire(CDynamite *this_ptr);

// Original: core_dynamite.cpp_CDynamite_getDamage_FUN_0049cee0
// Address: 0049cee0
float __cdecl CDynamite::getDamage(CDynamite *this_ptr);

// Original: core_dynamite.cpp_CDynamite_fireProjectile_FUN_0049cf10
// Address: 0049cf10
void __cdecl CDynamite::fireProjectile(CDynamite *this_ptr);

// Original: core_dynamite.cpp_CDynamite_FUN_0049cf20
// Address: 0049cf20
void __cdecl CDynamite(CDynamite *this_ptr);

// Original: core_dynamite.cpp_CDynamite_FUN_0049cf70
// Address: 0049cf70
int __cdecl CDynamite(CDynamite *this_ptr);

// Original: core_dynamite.cpp_CDynamite_FUN_0049cf90
// Address: 0049cf90
bool __cdecl CDynamite(CDynamite *this_ptr);

// Original: core_dynamite.cpp_CDynamite_process_FUN_0049cfb0
// Address: 0049cfb0
void __cdecl CDynamite::process(CDynamite *this_ptr,float delta_time);

// Original: core_dynamite.cpp_CDynamite_dtor_FUN_0049d120
// Address: 0049d120
CDynamite * __cdecl CDynamite::dtor(CDynamite *this_ptr,uint flags);
