#pragma once

// Function prototypes for core/vehicle.cpp
// Generated from Ghidra function signatures

// Original: core_vehicle.cpp_staticInit_FUN_0054e540
// Address: 0054e540
void __cdecl staticInit(void);

// Original: core_vehicle.cpp_factoryFunc_FUN_0054e570
// Address: 0054e570
CVehicle * __cdecl factoryFunc(void);

// Original: core_vehicle.cpp_CVehicle_getActorType_FUN_0054e590
// Address: 0054e590
CDemonActorType * CVehicle::getActorType(void);

// Original: core_vehicle.cpp_CVehicle_ctor_FUN_0054e5a0
// Address: 0054e5a0
CVehicle * __cdecl CVehicle::ctor(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_setup_FUN_0054e7f0
// Address: 0054e7f0
void CVehicle::setup(CDemonActor *param_1);

// Original: core_vehicle.cpp_CVehicle_process_FUN_0054eae0
// Address: 0054eae0
uint CVehicle::process(CVehicle *param_1,float param_2);

// Original: core_vehicle.cpp_CVehicle_getBoundingBox_FUN_0054f320
// Address: 0054f320
undefined4 * CVehicle::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_vehicle.cpp_CVehicle_archive_FUN_0054f370
// Address: 0054f370
void CVehicle::archive(CDemonActor *param_1);

// Original: core_vehicle.cpp_CVehicle_getCollisionType_FUN_0054f500
// Address: 0054f500
undefined4 CVehicle::getCollisionType(void);

// Original: core_vehicle.cpp_CVehicle_renderOpaque_FUN_0054f510
// Address: 0054f510
int CVehicle::renderOpaque(CDemonActor *param_1);

// Original: core_vehicle.cpp_CVehicle_renderTransparent_FUN_0054f780
// Address: 0054f780
undefined4 CVehicle::renderTransparent(void);

// Original: core_vehicle.cpp_CVehicle_renderBackground_FUN_0054f790
// Address: 0054f790
void CVehicle::renderBackground(void);

// Original: core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0
// Address: 0054f7a0
uint __cdecl CVehicle::playTrackedSound(CVehicle *this_ptr,char *sound_name);

// Original: core_vehicle.cpp_CVehicle_dtor_FUN_0054f7f0
// Address: 0054f7f0
CVehicle * __cdecl CVehicle::dtor(CVehicle *this_ptr,uint flags);

// Original: core_vehicle.cpp_CTire_ctor_FUN_0054f870
// Address: 0054f870
CTire * __cdecl CTire::ctor(CTire *this_ptr);

// Original: core_vehicle.cpp_CTire_dtor_FUN_0054f890
// Address: 0054f890
CTire * __cdecl CTire::dtor(CTire *this_ptr,uint flags);

// Original: core_vehicle.cpp_FUN_0054f8a0
// Address: 0054f8a0
void FUN_0054f8a0(void *param_1);
