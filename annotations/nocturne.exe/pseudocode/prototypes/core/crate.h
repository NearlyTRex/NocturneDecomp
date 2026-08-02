#pragma once

// Function prototypes for core/crate.cpp
// Generated from Ghidra function signatures

// Original: core_crate.cpp_staticInit_FUN_0043c7b0
// Address: 0043c7b0
void __cdecl staticInit(void);

// Original: core_crate.cpp_factoryFunc_FUN_0043c7e0
// Address: 0043c7e0
CCrate * __cdecl factoryFunc(void);

// Original: core_crate.cpp_CCrate_getActorType_FUN_0043c800
// Address: 0043c800
CDemonActorType * CCrate::getActorType(void);

// Original: core_crate.cpp_CCrate_ctor_FUN_0043c810
// Address: 0043c810
CCrate * __cdecl CCrate::ctor(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_setup_FUN_0043c870
// Address: 0043c870
void CCrate::setup(CDemonActor *param_1);

// Original: core_crate.cpp_CCrate_canPickup_FUN_0043c940
// Address: 0043c940
int __cdecl CCrate::canPickup(CCrate *this_ptr,CDemonActor *picker);

// Original: core_crate.cpp_CCrate_pickup_FUN_0043c960
// Address: 0043c960
void CCrate::pickup(int param_1,undefined4 param_2);

// Original: core_crate.cpp_CCrate_onDropped_FUN_0043c970
// Address: 0043c970
void CCrate::onDropped(int param_1);

// Original: core_crate.cpp_CCrate_getCarrier_FUN_0043c990
// Address: 0043c990
undefined4 CCrate::getCarrier(int param_1);

// Original: core_crate.cpp_CCrate_process_FUN_0043c9a0
// Address: 0043c9a0
void CCrate::process(CDemonActor *param_1);

// Original: core_crate.cpp_CCrate_renderOpaque_FUN_0043cbc0
// Address: 0043cbc0
int CCrate::renderOpaque(int param_1);

// Original: core_crate.cpp_CCrate_renderBackground_FUN_0043cc30
// Address: 0043cc30
void CCrate::renderBackground(void);

// Original: core_crate.cpp_CCrate_archive_FUN_0043cc50
// Address: 0043cc50
void CCrate::archive(CDemonActor *param_1);

// Original: core_crate.cpp_CCrate_getCollisionType_FUN_0043cca0
// Address: 0043cca0
undefined4 CCrate::getCollisionType(int param_1);

// Original: core_crate.cpp_CCrate_getBoundingBox_FUN_0043ccc0
// Address: 0043ccc0
undefined4 * CCrate::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_crate.cpp_CCrate_getTargetPoints_FUN_0043cd10
// Address: 0043cd10
undefined4 CCrate::getTargetPoints(int param_1,float *param_2);

// Original: core_crate.cpp_CCrate_explode_FUN_0043cdb0
// Address: 0043cdb0
void __cdecl CCrate::explode(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_dtor_FUN_0043ce60
// Address: 0043ce60
CCrate * __cdecl CCrate::dtor(CCrate *this_ptr,uint flags);
