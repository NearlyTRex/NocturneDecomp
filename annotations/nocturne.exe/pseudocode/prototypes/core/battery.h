#pragma once

// Function prototypes for core/battery.cpp
// Generated from Ghidra function signatures

// Original: core_battery.cpp_staticInit_FUN_00414d20
// Address: 00414d20
void __cdecl staticInit(void);

// Original: core_battery.cpp_FUN_00414d50
// Address: 00414d50
void FUN_00414d50(void);

// Original: core_battery.cpp_FUN_00414d70
// Address: 00414d70
CDemonActorType * FUN_00414d70(void);

// Original: core_battery.cpp_FUN_00414d80
// Address: 00414d80
int * FUN_00414d80(CDemonActor *param_1);

// Original: core_battery.cpp_CBattery_setup_FUN_00414de0
// Address: 00414de0
void __cdecl CBattery::setup(CBattery *this_ptr);

// Original: core_battery.cpp_FUN_00414e10
// Address: 00414e10
undefined4 FUN_00414e10(undefined4 param_1,CDemonActor *param_2);

// Original: core_battery.cpp_CBattery_pickup_FUN_00414e30
// Address: 00414e30
void __cdecl CBattery::pickup(CBattery *this_ptr,CDemonActor *carrier);

// Original: core_battery.cpp_CBattery_onDropped_FUN_00414e40
// Address: 00414e40
void __cdecl CBattery::onDropped(CBattery *this_ptr,CVector3f *drop_position);

// Original: core_battery.cpp_CBattery_getCarrier_FUN_00414e50
// Address: 00414e50
CDemonActor * __cdecl CBattery::getCarrier(CBattery *this_ptr);

// Original: core_battery.cpp_FUN_00414e60
// Address: 00414e60
void FUN_00414e60(void);

// Original: core_battery.cpp_FUN_00414e70
// Address: 00414e70
int FUN_00414e70(int param_1);

// Original: core_battery.cpp_CBattery_archive_FUN_00414ef0
// Address: 00414ef0
void CBattery::archive(CDemonActor *param_1);

// Original: core_battery.cpp_FUN_00414f40
// Address: 00414f40
undefined4 FUN_00414f40(void);

// Original: core_battery.cpp_CBattery_getBoundingBox_FUN_00414f50
// Address: 00414f50
CBoundingBox3D * __cdecl CBattery::getBoundingBox(CBattery *this_ptr,CBoundingBox3D *out_box);

// Original: core_battery.cpp_FUN_00414fa0
// Address: 00414fa0
CDemonActor * FUN_00414fa0(CDemonActor *param_1,byte param_2);
