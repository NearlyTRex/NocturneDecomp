#pragma once

// Function prototypes for core/trap.cpp
// Generated from Ghidra function signatures

// Original: core_trap.cpp_staticInit_FUN_005de620
// Address: 005de620
void __cdecl staticInit(void);

// Original: core_trap.cpp_factoryFuncTrap_FUN_005de650
// Address: 005de650
CTrap * __cdecl factoryFuncTrap(void);

// Original: core_trap.cpp_CTrap_getActorType_FUN_005de680
// Address: 005de680
CDemonActorType * __cdecl CTrap::getActorType(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_ctor_FUN_005de690
// Address: 005de690
CTrap * __cdecl CTrap::ctor(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_setup_FUN_005de6e0
// Address: 005de6e0
void __cdecl CTrap::setup(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_canPickup_FUN_005de710
// Address: 005de710
int __cdecl CTrap::canPickup(CTrap *this_ptr,CDemonActor *picker);

// Original: core_trap.cpp_CTrap_getCollisionType_FUN_005de720
// Address: 005de720
ECollisionType __cdecl CTrap::getCollisionType(CTrap *this_ptr,SCollisionInfo *collision_info);

// Original: core_trap.cpp_CTrap_pickup_FUN_005de740
// Address: 005de740
void __cdecl CTrap::pickup(CTrap *this_ptr,CDemonActor *carrier);

// Original: core_trap.cpp_CTrap_onDropped_FUN_005de750
// Address: 005de750
void __cdecl CTrap::onDropped(CTrap *this_ptr,CVector3f *drop_position);

// Original: core_trap.cpp_CTrap_getCarrier_FUN_005de760
// Address: 005de760
CDemonActor * __cdecl CTrap::getCarrier(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_process_FUN_005de770
// Address: 005de770
void __cdecl CTrap::process(CTrap *this_ptr,float delta_time);

// Original: core_trap.cpp_CTrap_renderOpaque_FUN_005de920
// Address: 005de920
int __cdecl CTrap::renderOpaque(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_archive_FUN_005de9c0
// Address: 005de9c0
void __cdecl CTrap::archive(CTrap *this_ptr);

// Original: core_trap.cpp_CTrap_getBoundingBox_FUN_005dea00
// Address: 005dea00
CBoundingBox3D * __cdecl CTrap::getBoundingBox(CTrap *this_ptr,CBoundingBox3D *out_box);

// Original: core_trap.cpp_CTrap_getPropertyList_FUN_005dea50
// Address: 005dea50
void __cdecl CTrap::getPropertyList(CTrap *this_ptr,CActorPropertyList *property_list);

// Original: core_trap.cpp_CTrap_addFilesToExtract_FUN_005dea90
// Address: 005dea90
void __cdecl CTrap::addFilesToExtract(CTrap *this_ptr,_FILE *file_handle);

// Original: core_trap.cpp_CTrap_dtor_FUN_005deab0
// Address: 005deab0
CTrap * __cdecl CTrap::dtor(CTrap *this_ptr,uint flags);
