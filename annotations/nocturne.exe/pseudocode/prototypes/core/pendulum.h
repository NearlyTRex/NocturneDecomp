#pragma once

// Function prototypes for core/pendulum.cpp
// Generated from Ghidra function signatures

// Original: core_pendulum.cpp_staticInit_FUN_004f2bd0
// Address: 004f2bd0
void __cdecl staticInit(void);

// Original: core_pendulum.cpp_FUN_004f2c00
// Address: 004f2c00
void FUN_004f2c00(void);

// Original: core_pendulum.cpp_FUN_004f2c20
// Address: 004f2c20
CDemonActorType * FUN_004f2c20(void);

// Original: core_pendulum.cpp_CPendulum_ctor_FUN_004f2c30
// Address: 004f2c30
CPendulum * __cdecl CPendulum::ctor(CPendulum *this_ptr);

// Original: core_pendulum.cpp_CPendulum_setup_FUN_004f2d40
// Address: 004f2d40
void CPendulum::setup(CDemonActor *param_1);

// Original: core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60
// Address: 004f2e60
void __cdecl CPendulum::testCollisionWithActor(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor);

// Original: core_pendulum.cpp_didPhaseCross_FUN_004f3340
// Address: 004f3340
bool didPhaseCross(void);

// Original: core_pendulum.cpp_CPendulum_updateSwing_FUN_004f3430
// Address: 004f3430
void __cdecl CPendulum::updateSwing(CPendulum *this_ptr,float delta_time);

// Original: core_pendulum.cpp_CPendulum_process_FUN_004f3a20
// Address: 004f3a20
void CPendulum::process(CPendulum *param_1,float param_2);

// Original: core_pendulum.cpp_FUN_004f3b90
// Address: 004f3b90
int FUN_004f3b90(CDemonActor *param_1);

// Original: core_pendulum.cpp_FUN_004f3c00
// Address: 004f3c00
undefined4 * FUN_004f3c00(int param_1,undefined4 *param_2);

// Original: core_pendulum.cpp_CPendulum_archive_FUN_004f3c50
// Address: 004f3c50
void CPendulum::archive(CDemonActor *param_1);

// Original: core_pendulum.cpp_FUN_004f3df0
// Address: 004f3df0
undefined4 FUN_004f3df0(int param_1,int param_2);

// Original: core_pendulum.cpp_FUN_004f3e30
// Address: 004f3e30
undefined4 FUN_004f3e30(int param_1);

// Original: core_pendulum.cpp_FUN_004f3e40
// Address: 004f3e40
CDemonActor * FUN_004f3e40(CDemonActor *param_1,byte param_2);
