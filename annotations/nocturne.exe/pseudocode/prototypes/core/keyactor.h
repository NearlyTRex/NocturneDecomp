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
CDemonActorType * CKeyActor::getActorType(void);

// Original: core_keyactor.cpp_FUN_004c3460
// Address: 004c3460
int * FUN_004c3460(CDemonActor *param_1);

// Original: core_keyactor.cpp_CKeyActor_setup_FUN_004c34c0
// Address: 004c34c0
void __cdecl CKeyActor::setup(CKeyActor *this_ptr);

// Original: core_keyactor.cpp_CKeyActor_process_FUN_004c34e0
// Address: 004c34e0
void CKeyActor::process(int param_1,float param_2);

// Original: core_keyactor.cpp_CKeyActor_renderOpaque_FUN_004c3590
// Address: 004c3590
int CKeyActor::renderOpaque(CDemonActor *param_1);

// Original: core_keyactor.cpp_CKeyActor_getBoundingBox_FUN_004c3600
// Address: 004c3600
undefined4 * CKeyActor::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_keyactor.cpp_CKeyActor_archive_FUN_004c3650
// Address: 004c3650
void CKeyActor::archive(CDemonActor *param_1);

// Original: core_keyactor.cpp_CKeyActor_getCollisionType_FUN_004c36c0
// Address: 004c36c0
undefined4 CKeyActor::getCollisionType(void);

// Original: core_keyactor.cpp_CKeyActor_canPickup_FUN_004c36d0
// Address: 004c36d0
undefined4 CKeyActor::canPickup(undefined4 param_1,CDemonActor *param_2);

// Original: core_keyactor.cpp_CKeyActor_onPickup_FUN_004c36f0
// Address: 004c36f0
void CKeyActor::onPickup(CDemonActor *param_1,CDemonActor *param_2);

// Original: core_keyactor.cpp_CKeyActor_dtor_FUN_004c3710
// Address: 004c3710
CDemonActor * CKeyActor::dtor(CDemonActor *param_1,byte param_2);
