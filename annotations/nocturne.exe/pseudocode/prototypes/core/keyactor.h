#pragma once

// Function prototypes for core/keyactor.cpp
// Generated from Ghidra function signatures

// Original: core_keyactor.cpp_staticInit_FUN_004c3400
// Address: 004c3400
void __cdecl staticInit(void);

// Original: core_keyactor.cpp_factoryFunc_FUN_004c3430
// Address: 004c3430
CKeyActor * __cdecl factoryFunc(void);

// Original: core_keyactor.cpp_CKeyActor_getActorType_FUN_004c3450
// Address: 004c3450
CDemonActorType * __cdecl CKeyActor::getActorType(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_ctor_FUN_004c3460
// Address: 004c3460
CKeyActor * __cdecl CKeyActor::ctor(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_setup_FUN_004c34c0
// Address: 004c34c0
void __cdecl CKeyActor::setup(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_process_FUN_004c34e0
// Address: 004c34e0
void __cdecl CKeyActor::process(CKeyActor *this_ptr,float delta_time);

// Original: core_keyactor.cpp_CKeyActor_renderOpaque_FUN_004c3590
// Address: 004c3590
int __cdecl CKeyActor::renderOpaque(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_getBoundingBox_FUN_004c3600
// Address: 004c3600
CBoundingBox3D * __cdecl CKeyActor::getBoundingBox(CKeyActor *this_ptr,CBoundingBox3D *out_box);

// Original: core_keyactor.cpp_CKeyActor_archive_FUN_004c3650
// Address: 004c3650
void __cdecl CKeyActor::archive(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_getCollisionType_FUN_004c36c0
// Address: 004c36c0
ECollisionType __cdecl CKeyActor::getCollisionType(CKeyActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_keyactor.cpp_CKeyActor_canPickup_FUN_004c36d0
// Address: 004c36d0
int __cdecl CKeyActor::canPickup(CKeyActor *this_ptr,CDemonActor *picker);

// Original: core_keyactor.cpp_CKeyActor_onPickup_FUN_004c36f0
// Address: 004c36f0
void __cdecl CKeyActor::onPickup(CKeyActor *this_ptr,CDemonActor *owner);

// Original: core_keyactor.cpp_CKeyActor_dtor_FUN_004c3710
// Address: 004c3710
CKeyActor * __cdecl CKeyActor::dtor(CKeyActor *this_ptr,uint flags);
