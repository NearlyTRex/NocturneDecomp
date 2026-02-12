#pragma once

// Function prototypes for core/vehicle.cpp
// Generated from Ghidra function signatures

// Original: core_vehicle.cpp_staticInit_FUN_005e7810
// Address: 005e7810
void __cdecl staticInit(void);

// Original: core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
// Address: 005e7830
CVector3f * __cdecl convertDirectionVectorToEulerAngles(CVector3f *out_euler_angles,CVector3f *in_direction_vector);

// Original: core_vehicle.cpp_staticInit_FUN_005e78d0
// Address: 005e78d0
void __cdecl staticInit(void);

// Original: core_vehicle.cpp_factoryFunc_FUN_005e7900
// Address: 005e7900
CVehicle * __cdecl factoryFunc(void);

// Original: core_vehicle.cpp_CVehicle_getActorType_FUN_005e7930
// Address: 005e7930
CDemonActorType * __cdecl CVehicle::getActorType(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_ctor_FUN_005e7940
// Address: 005e7940
CVehicle * __cdecl CVehicle::ctor(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_setup_FUN_005e7b90
// Address: 005e7b90
void __cdecl CVehicle::setup(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_process_FUN_005e7e80
// Address: 005e7e80
void __cdecl CVehicle::process(CVehicle *this_ptr,float delta_time);

// Original: core_vehicle.cpp_CVehicle_getBoundingBox_FUN_005e86d0
// Address: 005e86d0
CBoundingBox3D * __cdecl CVehicle::getBoundingBox(CVehicle *this_ptr,CBoundingBox3D *out_box);

// Original: core_vehicle.cpp_CVehicle_archive_FUN_005e8720
// Address: 005e8720
void __cdecl CVehicle::archive(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_hasCollision_FUN_005e88b0
// Address: 005e88b0
int __cdecl CVehicle::hasCollision(CVehicle *this_ptr,SCollisionInfo *collision_info);

// Original: core_vehicle.cpp_CVehicle_renderOpaque_FUN_005e88c0
// Address: 005e88c0
int __cdecl CVehicle::renderOpaque(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_renderTransparent_FUN_005e8b30
// Address: 005e8b30
int __cdecl CVehicle::renderTransparent(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_renderBackground_FUN_005e8b40
// Address: 005e8b40
void __cdecl CVehicle::renderBackground(CVehicle *this_ptr,int layer_flag);

// Original: core_vehicle.cpp_CVehicle_FUN_005e8b50
// Address: 005e8b50
uint __cdecl CVehicle(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_getPropertyList_FUN_005e8ba0
// Address: 005e8ba0
void __cdecl CVehicle::getPropertyList(CVehicle *this_ptr,CActorPropertyList *property_list);

// Original: core_vehicle.cpp_CVehicle_processInEditor_FUN_005e8cf0
// Address: 005e8cf0
void __cdecl CVehicle::processInEditor(CVehicle *this_ptr);

// Original: core_vehicle.cpp_CVehicle_addFilesToExtract_FUN_005e8d00
// Address: 005e8d00
void __cdecl CVehicle::addFilesToExtract(CVehicle *this_ptr,_FILE *file_handle);

// Original: core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20
// Address: 005e8d20
CVehicle * __cdecl CVehicle::dtor(CVehicle *this_ptr,uint flags);

// Original: core_vehicle.cpp_CTire_ctor_FUN_005e8da0
// Address: 005e8da0
CTire * __cdecl CTire::ctor(CTire *this_ptr);

// Original: core_vehicle.cpp_CTire_dtor_FUN_005e8dc0
// Address: 005e8dc0
CTire * __cdecl CTire::dtor(CTire *this_ptr,uint flags);

// Original: core_vehicle.cpp_CTire_arrdtor_FUN_005e8dd0
// Address: 005e8dd0
CTire * __cdecl CTire::arrdtor(CTire *objs,uint flags);
