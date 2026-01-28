#pragma once

// Function prototypes for core/crossbow.cpp
// Generated from Ghidra function signatures

// Original: core_crossbow.cpp_staticInit_FUN_00448c00
// Address: 00448c00
void __cdecl staticInit(void);

// Original: core_crossbow.cpp_factoryFunc_FUN_00448c30
// Address: 00448c30
CCrossbow * __cdecl factoryFunc(void);

// Original: core_crossbow.cpp_CCrossbow_getActorType_FUN_00448c60
// Address: 00448c60
CDemonActorType * __cdecl CCrossbow::getActorType(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_ctor_FUN_00448c70
// Address: 00448c70
CCrossbow * __cdecl CCrossbow::ctor(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_process_FUN_00448d30
// Address: 00448d30
void __cdecl CCrossbow::process(CCrossbow *this_ptr,float delta_time);

// Original: core_crossbow.cpp_CCrossbow_renderOpaque_FUN_00448e00
// Address: 00448e00
int __cdecl CCrossbow::renderOpaque(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_00448e80
// Address: 00448e80
int __cdecl CCrossbow::renderTransparent(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_FUN_00448eb0
// Address: 00448eb0
int __cdecl CCrossbow(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_FUN_00448f20
// Address: 00448f20
int __cdecl CCrossbow(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_FUN_00449540
// Address: 00449540
float FUN_00449540(void);

// Original: core_crossbow.cpp_CCrossbow_FUN_00449570
// Address: 00449570
float __cdecl CCrossbow(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0
// Address: 004495a0
CCrossbow * __cdecl CCrossbow::dtor(CCrossbow *this_ptr,uint d1,uint d2,uint d3);
