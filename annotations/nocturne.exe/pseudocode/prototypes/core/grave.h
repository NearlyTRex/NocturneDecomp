#pragma once

// Function prototypes for core/grave.cpp
// Generated from Ghidra function signatures

// Original: core_grave.cpp_staticInit_FUN_004b0ae0
// Address: 004b0ae0
void __cdecl staticInit(void);

// Original: core_grave.cpp_factoryFunc_FUN_004b0b10
// Address: 004b0b10
CGrave * __cdecl factoryFunc(void);

// Original: core_grave.cpp_CGrave_getActorType_FUN_004b0b30
// Address: 004b0b30
CDemonActorType * CGrave::getActorType(void);

// Original: core_grave.cpp_CGrave_ctor_FUN_004b0b40
// Address: 004b0b40
CGrave * __cdecl CGrave::ctor(CGrave *this_ptr);

// Original: core_grave.cpp_CGrave_setup_FUN_004b0bd0
// Address: 004b0bd0
void CGrave::setup(CDemonActor *param_1);

// Original: core_grave.cpp_CGrave_process_FUN_004b0bf0
// Address: 004b0bf0
void CGrave::process(CGrave *param_1,float param_2);

// Original: core_grave.cpp_CGrave_renderOpaque_FUN_004b0cb0
// Address: 004b0cb0
int CGrave::renderOpaque(CDemonActor *param_1);

// Original: core_grave.cpp_CGrave_renderBackground_FUN_004b0d40
// Address: 004b0d40
void CGrave::renderBackground(CDemonActor *param_1,int param_2);

// Original: core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0
// Address: 004b0dc0
void __cdecl CGrave::startAnimation(CGrave *this_ptr);

// Original: core_grave.cpp_CGrave_archive_FUN_004b0e20
// Address: 004b0e20
void CGrave::archive(CDemonActor *param_1);

// Original: core_grave.cpp_CGrave_getBoundingBox_FUN_004b0f20
// Address: 004b0f20
int * CGrave::getBoundingBox(int param_1,int *param_2);

// Original: core_grave.cpp_CGrave_getCollisionType_FUN_004b1000
// Address: 004b1000
undefined4 CGrave::getCollisionType(void);

// Original: core_grave.cpp_CGrave_dtor_FUN_004b1010
// Address: 004b1010
CDemonActor * CGrave::dtor(CDemonActor *param_1,byte param_2);
