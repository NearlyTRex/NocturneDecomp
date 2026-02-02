#pragma once

// Function prototypes for core/battery.cpp
// Generated from Ghidra function signatures

// Original: core_battery.cpp_staticInit_FUN_00417e20
// Address: 00417e20
void __cdecl staticInit(void);

// Original: core_battery.cpp_factoryFunc_FUN_00417e50
// Address: 00417e50
CBattery * __cdecl factoryFunc(void);

// Original: core_battery.cpp_CBattery_getActorType_FUN_00417e80
// Address: 00417e80
CDemonActorType * __cdecl CBattery::getActorType(CBattery *this_ptr);

// Original: core_battery.cpp_CBattery_ctor_FUN_00417e90
// Address: 00417e90
CBattery * __cdecl CBattery::ctor(CBattery *this_ptr);

// Original: core_battery.cpp_CBattery_setup_FUN_00417ef0
// Address: 00417ef0
void __cdecl CBattery::setup(CBattery *this_ptr);

// Original: core_battery.cpp_CBattery_canPickup_FUN_00417f20
// Address: 00417f20
int __cdecl CBattery::canPickup(CBattery *this_ptr,CDemonActor *picker);

// Original: core_battery.cpp_CBattery_pickup_FUN_00417f40
// Address: 00417f40
void __cdecl CBattery::pickup(CBattery *this_ptr,CDemonActor *carrier);

// Original: core_battery.cpp_CBattery_onDropped_FUN_00417f50
// Address: 00417f50
void __cdecl CBattery::onDropped(CBattery *this_ptr,CVector3f *drop_position);

// Original: core_battery.cpp_CBattery_getCarrier_FUN_00417f60
// Address: 00417f60
CDemonActor * __cdecl CBattery::getCarrier(CBattery *this_ptr);

// Original: core_battery.cpp_CBattery_process_FUN_00417f70
// Address: 00417f70
void __cdecl CBattery::process(CBattery *this_ptr,float delta_time);

// Original: core_battery.cpp_CBattery_renderOpaque_FUN_00417f80
// Address: 00417f80
int __cdecl CBattery::renderOpaque(CBattery *this_ptr);

// Original: core_battery.cpp_CBattery_archive_FUN_00418000
// Address: 00418000
void __cdecl CBattery::archive(CBattery *this_ptr);

// Original: core_battery.cpp_CBattery_hasCollision_FUN_00418050
// Address: 00418050
int __cdecl CBattery::hasCollision(CBattery *this_ptr,SCollisionInfo *collision_info);

// Original: core_battery.cpp_CBattery_getBoundingBox_FUN_00418060
// Address: 00418060
CBoundingBox3D * __cdecl CBattery::getBoundingBox(CBattery *this_ptr,CBoundingBox3D *out_box);

// Original: core_battery.cpp_CBattery_getPropertyList_FUN_004180b0
// Address: 004180b0
void __cdecl CBattery::getPropertyList(CBattery *this_ptr,CActorPropertyList *property_list);

// Original: core_battery.cpp_CBattery_writeDependencies_FUN_00418110
// Address: 00418110
void __cdecl CBattery::writeDependencies(CBattery *this_ptr,_FILE *file_handle);

// Original: core_battery.cpp_CBattery_dtor_FUN_00418160
// Address: 00418160
CBattery * __cdecl CBattery::dtor(CBattery *this_ptr,uint d1,uint d2);
