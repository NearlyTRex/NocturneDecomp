#pragma once

// Function prototypes for core/crate.cpp
// Generated from Ghidra function signatures

// Original: core_crate.cpp_staticInit_FUN_00448460
// Address: 00448460
void __cdecl staticInit(void);

// Original: core_crate.cpp_factoryFuncCrate_FUN_00448490
// Address: 00448490
CCrate * __cdecl factoryFuncCrate(void);

// Original: core_crate.cpp_CCrate_getActorType_FUN_004484c0
// Address: 004484c0
CDemonActorType * __cdecl CCrate::getActorType(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_ctor_FUN_004484d0
// Address: 004484d0
CCrate * __cdecl CCrate::ctor(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_setup_FUN_00448530
// Address: 00448530
void __cdecl CCrate::setup(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_canPickup_FUN_00448600
// Address: 00448600
int __cdecl CCrate::canPickup(CCrate *this_ptr,CDemonActor *picker);

// Original: core_crate.cpp_CCrate_pickup_FUN_00448620
// Address: 00448620
void __cdecl CCrate::pickup(CCrate *this_ptr,CDemonActor *carrier);

// Original: core_crate.cpp_CCrate_drop_FUN_00448630
// Address: 00448630
void __cdecl CCrate::drop(CCrate *this_ptr,CVector3f *drop_position);

// Original: core_crate.cpp_CCrate_getCarrier_FUN_00448650
// Address: 00448650
CDemonActor * __cdecl CCrate::getCarrier(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_process_FUN_00448660
// Address: 00448660
void __cdecl CCrate::process(CCrate *this_ptr,float delta_time);

// Original: core_crate.cpp_CCrate_renderOpaque_FUN_00448880
// Address: 00448880
int __cdecl CCrate::renderOpaque(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_renderBackground_FUN_004488f0
// Address: 004488f0
void __cdecl CCrate::renderBackground(CCrate *this_ptr,int layer_flag);

// Original: core_crate.cpp_CCrate_archive_FUN_00448910
// Address: 00448910
void __cdecl CCrate::archive(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_getCollisionType_FUN_00448960
// Address: 00448960
ECollisionType __cdecl CCrate::getCollisionType(CCrate *this_ptr,SCollisionInfo *collision_info);

// Original: core_crate.cpp_CCrate_getBoundingBox_FUN_00448980
// Address: 00448980
CBoundingBox3D * __cdecl CCrate::getBoundingBox(CCrate *this_ptr,CBoundingBox3D *out_box);

// Original: core_crate.cpp_CCrate_getTargetPoints_FUN_004489d0
// Address: 004489d0
int __cdecl CCrate::getTargetPoints(CCrate *this_ptr,CVector3f *out_points_array);

// Original: core_crate.cpp_CCrate_explode_FUN_00448a70
// Address: 00448a70
void __cdecl CCrate::explode(CCrate *this_ptr);

// Original: core_crate.cpp_CCrate_getPropertyList_FUN_00448b20
// Address: 00448b20
void __cdecl CCrate::getPropertyList(CCrate *this_ptr,CActorPropertyList *property_list);

// Original: core_crate.cpp_CCrate_addFilesToExtract_FUN_00448b60
// Address: 00448b60
void __cdecl CCrate::addFilesToExtract(CCrate *this_ptr,_FILE *file_handle);

// Original: core_crate.cpp_CCrate_dtor_FUN_00448bb0
// Address: 00448bb0
CCrate * __cdecl CCrate::dtor(CCrate *this_ptr,uint flags);
