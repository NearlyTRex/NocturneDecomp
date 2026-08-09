#pragma once

// Function prototypes for core/crossbow.cpp
// Generated from Ghidra function signatures

// Original: core_crossbow.cpp_staticInit_FUN_0043ceb0
// Address: 0043ceb0
void __cdecl staticInit(void);

// Original: core_crossbow.cpp_factoryFuncCrossbow_FUN_0043cee0
// Address: 0043cee0
CCrossbow * __cdecl factoryFuncCrossbow(void);

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

// Original: core_crossbow.cpp_CCrossbow_getMuzzlePoint_FUN_0043d150
// Address: 0043d150
CVector3f * __cdecl CCrossbow::getMuzzlePoint(CCrossbow *this_ptr,CVector3f *out_point);

// Original: core_crossbow.cpp_CCrossbow_fire_FUN_0043d1c0
// Address: 0043d1c0
int __cdecl CCrossbow::fire(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0043d810
// Address: 0043d810
float __cdecl CCrossbow::getCurFrame(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_getDamage_FUN_0043d840
// Address: 0043d840
float __cdecl CCrossbow::getDamage(CCrossbow *this_ptr);

// Original: core_crossbow.cpp_CCrossbow_dtor_FUN_0043d870
// Address: 0043d870
CCrossbow * __cdecl CCrossbow::dtor(CCrossbow *this_ptr,uint flags);
