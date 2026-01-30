#pragma once

// Function prototypes for core/ammo.cpp
// Generated from Ghidra function signatures

// Original: core_ammo.cpp_staticInit_FUN_00410d50
// Address: 00410d50
void __cdecl staticInit(void);

// Original: core_ammo.cpp_factoryFunc_FUN_00410d80
// Address: 00410d80
CAmmo * __cdecl factoryFunc(void);

// Original: core_ammo.cpp_CAmmo_getActorType_FUN_00410db0
// Address: 00410db0
CDemonActorType * __cdecl CAmmo::getActorType(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
// Address: 00410dc0
CAmmo * __cdecl CAmmo::ctor(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_setup_FUN_00410e50
// Address: 00410e50
void __cdecl CAmmo::setup(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_process_FUN_00410e70
// Address: 00410e70
void __cdecl CAmmo::process(CAmmo *this_ptr,float delta_time);

// Original: core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80
// Address: 00410e80
int __cdecl CAmmo::renderOpaque(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0
// Address: 00410ef0
CBoundingBox3D * __cdecl CAmmo::getBoundingBox(CAmmo *this_ptr,CBoundingBox3D *out_box);

// Original: core_ammo.cpp_CAmmo_serialize_FUN_00410f40
// Address: 00410f40
void __cdecl CAmmo::serialize(CAmmo *this_ptr);

// Original: core_ammo.cpp_CAmmo_hasCollision_FUN_00410fa0
// Address: 00410fa0
int __cdecl CAmmo::hasCollision(CAmmo *this_ptr,SCollisionInfo *collision_info);

// Original: core_ammo.cpp_CAmmo_FUN_00410fd0
// Address: 00410fd0
void __cdecl CAmmo(void);

// Original: core_ammo.cpp_CAmmo_FUN_004111b0
// Address: 004111b0
void __cdecl CAmmo(void);

// Original: core_ammo.cpp_CAmmo_canPickup_FUN_004111c0
// Address: 004111c0
int __cdecl CAmmo::canPickup(CAmmo *this_ptr,CDemonActor *picker);

// Original: core_ammo.cpp_FUN_00411200
// Address: 00411200
void __cdecl FUN_00411200(void);

// Original: core_ammo.cpp_FUN_004112b0
// Address: 004112b0
int __cdecl FUN_004112b0(void);

// Original: core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360
// Address: 00411360
void __cdecl CAmmo::getPropertyList(CAmmo *this_ptr,CActorPropertyList *property_list);

// Original: core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0
// Address: 004113e0
void __cdecl CAmmo::writeDependencies(CAmmo *this_ptr,_FILE *file_handle);

// Original: core_ammo.cpp_CAmmo_dtor_FUN_004114e0
// Address: 004114e0
CAmmo * __cdecl CAmmo::dtor(CAmmo *this_ptr,uint d1,uint d2);
