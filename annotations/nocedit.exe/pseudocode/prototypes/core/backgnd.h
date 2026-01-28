#pragma once

// Function prototypes for core/backgnd.cpp
// Generated from Ghidra function signatures

// Original: core_backgnd.cpp_SFire_dtor_FUN_00412680
// Address: 00412680
SFire * __cdecl SFire::dtor(SFire *this_ptr);

// Original: core_backgnd.cpp_CFlame_dtor_FUN_00412690
// Address: 00412690
CFlame * __cdecl CFlame::dtor(CFlame *this_ptr,uint d1,uint d2);

// Original: core_backgnd.cpp_cleanupVector_FUN_004126e0
// Address: 004126e0
int __cdecl cleanupVector(CVector3f **objs);

// Original: core_backgnd.cpp_freeFires_FUN_00412700
// Address: 00412700
int __cdecl freeFires(SFire **objs);

// Original: core_backgnd.cpp_freeFlames_FUN_00412720
// Address: 00412720
int __cdecl freeFlames(CFlame **array);

// Original: core_backgnd.cpp_staticInit_FUN_00412740
// Address: 00412740
void __cdecl staticInit(void);

// Original: core_backgnd.cpp_factoryFunc_FUN_00412770
// Address: 00412770
CBackgroundActor * __cdecl factoryFunc(void);

// Original: core_backgnd.cpp_CBackgroundActor_getActorType_FUN_004127a0
// Address: 004127a0
CDemonActorType * __cdecl CBackgroundActor::getActorType(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
// Address: 004127b0
CBackgroundActor * __cdecl CBackgroundActor::ctor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_setup_FUN_00412810
// Address: 00412810
int __cdecl CBackgroundActor::setup(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_process_FUN_00412850
// Address: 00412850
void __cdecl CBackgroundActor::process(CBackgroundActor *this_ptr,float delta_time);

// Original: core_backgnd.cpp_CBackgroundActor_FUN_00412860
// Address: 00412860
void __cdecl CBackgroundActor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_FUN_004128d0
// Address: 004128d0
int __cdecl CBackgroundActor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_FUN_00412940
// Address: 00412940
int * __cdecl CBackgroundActor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990
// Address: 00412990
void __cdecl CBackgroundActor::serialize(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_FUN_004129f0
// Address: 004129f0
int __cdecl CBackgroundActor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_FUN_00412a30
// Address: 00412a30
int __cdecl CBackgroundActor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_FUN_00412a40
// Address: 00412a40
void __cdecl CBackgroundActor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_FUN_00412ab0
// Address: 00412ab0
void __cdecl CBackgroundActor(CBackgroundActor *this_ptr);

// Original: core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0
// Address: 00412ad0
CBackgroundActor * __cdecl CBackgroundActor::dtor(CBackgroundActor *this_ptr,uint d1,uint d2);
