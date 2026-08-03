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
CDemonActorType * __cdecl CCrate::getActorType(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_ctor_FUN_0043c810
// Address: 0043c810
CCrate * __cdecl CCrate::ctor(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_setup_FUN_0043c870
// Address: 0043c870
void __cdecl CCrate::setup(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_canPickup_FUN_0043c940
// Address: 0043c940
int __cdecl CCrate::canPickup(CCrate *this_ptr,CDemonActor *picker);

// Original: core_crate.cpp_CCrate_pickup_FUN_0043c960
// Address: 0043c960
void __cdecl CCrate::pickup(CCrate *this_ptr,CDemonActor *carrier);

// Original: core_crate.cpp_CCrate_onDropped_FUN_0043c970
// Address: 0043c970
void CCrate::onDropped(int param_1);

// Original: core_crate.cpp_CCrate_getCarrier_FUN_0043c990
// Address: 0043c990
CDemonActor * __cdecl CCrate::getCarrier(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_process_FUN_0043c9a0
// Address: 0043c9a0
void __cdecl CCrate::process(CCrate *this_ptr,float delta_time);

// Original: core_crate.cpp_CCrate_renderOpaque_FUN_0043cbc0
// Address: 0043cbc0
int __cdecl CCrate::renderOpaque(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_renderBackground_FUN_0043cc30
// Address: 0043cc30
void __cdecl CCrate::renderBackground(CCrate *this_ptr,int layer_flag);

// Original: core_crate.cpp_CCrate_archive_FUN_0043cc50
// Address: 0043cc50
void __cdecl CCrate::archive(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_getCollisionType_FUN_0043cca0
// Address: 0043cca0
ECollisionType __cdecl CCrate::getCollisionType(CCrate *this_ptr,SCollisionInfo *collision_info);

// Original: core_crate.cpp_CCrate_getBoundingBox_FUN_0043ccc0
// Address: 0043ccc0
CBoundingBox3D * __cdecl CCrate::getBoundingBox(CCrate *this_ptr,CBoundingBox3D *out_box);

// Original: core_crate.cpp_CCrate_getTargetPoints_FUN_0043cd10
// Address: 0043cd10
int __cdecl CCrate::getTargetPoints(CCrate *this_ptr,CVector3f *out_points_array);

// Original: core_crate.cpp_CCrate_explode_FUN_0043cdb0
// Address: 0043cdb0
void __cdecl CCrate::explode(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_dtor_FUN_0043ce60
// Address: 0043ce60
CCrate * __cdecl CCrate::dtor(CCrate *this_ptr,uint flags);
