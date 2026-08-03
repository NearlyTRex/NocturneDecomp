#pragma once

// Function prototypes for core/crossbow.cpp
// Generated from Ghidra function signatures

// Original: core_crossbow.cpp_staticInit_FUN_0043ceb0
// Address: 0043ceb0
void __cdecl staticInit(void);

// Original: core_crossbow.cpp_factoryFunc_FUN_0043cee0
// Address: 0043cee0
CCrossbow * __cdecl factoryFunc(void);

// Original: core_crossbow.cpp_CCrossbow_getActorType_FUN_0043cf00
// Address: 0043cf00
CDemonActorType * __cdecl CCrossbow::getActorType(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_ctor_FUN_0043cf10
// Address: 0043cf10
CCrossbow * __cdecl CCrossbow::ctor(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_process_FUN_0043cfd0
// Address: 0043cfd0
void __cdecl CCrossbow::process(CCrossbow *this_ptr,float delta_time);

// Original: core_crossbow.cpp_CCrossbow_renderOpaque_FUN_0043d0a0
// Address: 0043d0a0
int __cdecl CCrossbow::renderOpaque(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_0043d120
// Address: 0043d120
int __cdecl CCrossbow::renderTransparent(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_FUN_0043d150
// Address: 0043d150
undefined4 * FUN_0043d150(int param_1,undefined4 *param_2);

// Original: core_crossbow.cpp_FUN_0043d1c0
// Address: 0043d1c0
undefined4 FUN_0043d1c0(CCharacter *param_1);

// Original: core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0043d810
// Address: 0043d810
float __cdecl CCrossbow::getCurFrame(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_FUN_0043d840
// Address: 0043d840
float FUN_0043d840(void);

// Original: core_crossbow.cpp_CCrossbow_dtor_FUN_0043d870
// Address: 0043d870
CCrossbow * __cdecl CCrossbow::dtor(CCrossbow *this_ptr,uint flags);
