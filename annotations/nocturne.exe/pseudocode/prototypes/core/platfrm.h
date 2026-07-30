#pragma once

// Function prototypes for core/platfrm.cpp
// Generated from Ghidra function signatures

// Original: core_platfrm.cpp_staticInit_FUN_004f5d30
// Address: 004f5d30
void __cdecl staticInit(void);

// Original: core_platfrm.cpp_factoryFunc_FUN_004f5d60
// Address: 004f5d60
CPlatform * __cdecl factoryFunc(void);

// Original: core_platfrm.cpp_CPlatform_getActorType_FUN_004f5d80
// Address: 004f5d80
CDemonActorType * CPlatform::getActorType(void);

// Original: core_platfrm.cpp_FUN_004f5d90
// Address: 004f5d90
CCourseFrame ** FUN_004f5d90(CDemonActor *param_1);

// Original: core_platfrm.cpp_CPlatform_setup_FUN_004f5f60
// Address: 004f5f60
void __cdecl CPlatform::setup(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0
// Address: 004f5ff0
void __cdecl CPlatform::evaluatePosition(CPlatform *this_ptr);

// Original: core_platfrm.cpp_CPlatform_process_FUN_004f6170
// Address: 004f6170
void __cdecl CPlatform::process(CPlatform *this_ptr,float delta_time);

// Original: core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0
// Address: 004f6bd0
void __cdecl CPlatform::startMovement(CPlatform *this_ptr,float goal_param,float movement_rate);

// Original: core_platfrm.cpp_CPlatform_renderOpaque_FUN_004f6c60
// Address: 004f6c60
int CPlatform::renderOpaque(CDemonActor *param_1);

// Original: core_platfrm.cpp_CPlatform_renderBackground_FUN_004f6d90
// Address: 004f6d90
void CPlatform::renderBackground(CDemonActor *param_1,int param_2);

// Original: core_platfrm.cpp_CPlatform_getBoundingBox_FUN_004f6f50
// Address: 004f6f50
undefined4 * CPlatform::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_platfrm.cpp_CPlatform_archive_FUN_004f6fa0
// Address: 004f6fa0
void __cdecl CPlatform::archive(CPlatform *this_ptr);

// Original: core_platfrm.cpp_FUN_004f7360
// Address: 004f7360
int __cdecl FUN_004f7360(CPlatform *this_ptr,CDemonActor *actor);

// Original: core_platfrm.cpp_CPlatform_getCollisionType_FUN_004f7560
// Address: 004f7560
undefined4 CPlatform::getCollisionType(int param_1,int param_2);

// Original: core_platfrm.cpp_CPlatform_allowBulletHoles_FUN_004f7580
// Address: 004f7580
undefined4 CPlatform::allowBulletHoles(void);

// Original: core_platfrm.cpp_CPlatform_getGroundType_FUN_004f75a0
// Address: 004f75a0
undefined4 CPlatform::getGroundType(int param_1);

// Original: core_platfrm.cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_004f75b0
// Address: 004f75b0
undefined4 CPlatform::getBlockVirtualDirectorFlag(int param_1);

// Original: core_platfrm.cpp_CPlatform_attachActor_FUN_004f75c0
// Address: 004f75c0
void __cdecl CPlatform::attachActor(CPlatform *this_ptr,CDemonActor *actor);

// Original: core_platfrm.cpp_FUN_004f76c0
// Address: 004f76c0
void FUN_004f76c0(void);

// Original: core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_004f7700
// Address: 004f7700
void __cdecl CPlatform::updateAttachedActors(CPlatform *this_ptr);
