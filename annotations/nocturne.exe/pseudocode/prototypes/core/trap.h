#pragma once

// Function prototypes for core/trap.cpp
// Generated from Ghidra function signatures

// Original: core_trap.cpp_staticInit_FUN_005467c0
// Address: 005467c0
void __cdecl staticInit(void);

// Original: core_trap.cpp_factoryFunc_FUN_005467f0
// Address: 005467f0
CTrap * __cdecl factoryFunc(void);

// Original: core_trap.cpp_CTrap_getActorType_FUN_00546810
// Address: 00546810
CDemonActorType * __cdecl CTrap::getActorType(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_ctor_FUN_00546820
// Address: 00546820
CTrap * __cdecl CTrap::ctor(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_setup_FUN_00546870
// Address: 00546870
void __cdecl CTrap::setup(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_canPickup_FUN_005468a0
// Address: 005468a0
int __cdecl CTrap::canPickup(CTrap *this_ptr,CDemonActor *picker);

// Original: core_trap.cpp_CTrap_getCollisionType_FUN_005468b0
// Address: 005468b0
ECollisionType __cdecl CTrap::getCollisionType(CTrap *this_ptr,SCollisionInfo *collision_info);

// Original: core_trap.cpp_CTrap_pickup_FUN_005468d0
// Address: 005468d0
void __cdecl CTrap::pickup(CTrap *this_ptr,CDemonActor *carrier);

// Original: core_trap.cpp_CTrap_onDropped_FUN_005468e0
// Address: 005468e0
void __cdecl CTrap::onDropped(CTrap *this_ptr,CVector3f *drop_position);

// Original: core_trap.cpp_CTrap_getCarrier_FUN_005468f0
// Address: 005468f0
CDemonActor * __cdecl CTrap::getCarrier(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_process_FUN_00546900
// Address: 00546900
void __cdecl CTrap::process(CTrap *this_ptr,float delta_time);

// Original: core_trap.cpp_CTrap_renderOpaque_FUN_00546ab0
// Address: 00546ab0
int __cdecl CTrap::renderOpaque(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_archive_FUN_00546b50
// Address: 00546b50
void __cdecl CTrap::archive(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_getBoundingBox_FUN_00546b90
// Address: 00546b90
CBoundingBox3D * __cdecl CTrap::getBoundingBox(CTrap *this_ptr,CBoundingBox3D *out_box);

// Original: core_trap.cpp_CTrap_dtor_FUN_00546be0
// Address: 00546be0
CTrap * __cdecl CTrap::dtor(CTrap *this_ptr,uint flags);
