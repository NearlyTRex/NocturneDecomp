#pragma once

// Function prototypes for core/vehicle.cpp
// Generated from Ghidra function signatures

// Original: core_vehicle.cpp_staticInit_FUN_0054e540
// Address: 0054e540
void __cdecl staticInit(void);

// Original: core_vehicle.cpp_factoryFuncVehicle_FUN_0054e570
// Address: 0054e570
CVehicle * __cdecl factoryFuncVehicle(void);

// Original: core_vehicle.cpp_CVehicle_getActorType_FUN_0054e590
// Address: 0054e590
CDemonActorType * __cdecl CVehicle::getActorType(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_ctor_FUN_0054e5a0
// Address: 0054e5a0
CVehicle * __cdecl CVehicle::ctor(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_setup_FUN_0054e7f0
// Address: 0054e7f0
void __cdecl CVehicle::setup(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_process_FUN_0054eae0
// Address: 0054eae0
void __cdecl CVehicle::process(CVehicle *this_ptr,float delta_time);

// Original: core_vehicle.cpp_CVehicle_getBoundingBox_FUN_0054f320
// Address: 0054f320
CBoundingBox3D * __cdecl CVehicle::getBoundingBox(CVehicle *this_ptr,CBoundingBox3D *out_box);

// Original: core_vehicle.cpp_CVehicle_archive_FUN_0054f370
// Address: 0054f370
void __cdecl CVehicle::archive(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_getCollisionType_FUN_0054f500
// Address: 0054f500
ECollisionType __cdecl CVehicle::getCollisionType(CVehicle *this_ptr,SCollisionInfo *collision_info);

// Original: core_vehicle.cpp_CVehicle_renderOpaque_FUN_0054f510
// Address: 0054f510
int __cdecl CVehicle::renderOpaque(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_renderTransparent_FUN_0054f780
// Address: 0054f780
int __cdecl CVehicle::renderTransparent(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_renderBackground_FUN_0054f790
// Address: 0054f790
void __cdecl CVehicle::renderBackground(CVehicle *this_ptr,int layer_flag);

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

// Original: core_vehicle.cpp_CTire_arrdtor_FUN_0054f8a0
// Address: 0054f8a0
CTire * __cdecl CTire::arrdtor(CTire *this_ptr,uint flags);
