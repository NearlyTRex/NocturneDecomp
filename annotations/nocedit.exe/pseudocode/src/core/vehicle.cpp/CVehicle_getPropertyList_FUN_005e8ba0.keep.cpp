// Name: core_vehicle.cpp_CVehicle_getPropertyList_FUN_005e8ba0
// Address: 005e8ba0
// MANUAL RECONSTRUCTION
// Address Range: [[005e8ba0, 005e8ce7]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_getPropertyList_FUN_005e8ba0(CVehicle *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_getPropertyList_FUN_005e8ba0(CVehicle *this_ptr,CActorPropertyList *property_list)

{
  int iVar1;
  CKeyFramedModelInstance *data_ptr;
  int iVar2;
  char local_110 [256];
  CVector3f *local_10;
  CTire *local_c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  iVar1 = 0;
  if (0 < this_ptr->tire_count) {
    iVar2 = 0;
    data_ptr = &this_ptr->tires[0].model;
    do {
      _sprintf
                (local_110,"%s tire",
                 *(char **)((int)g_VehicleWheelLocationNames + iVar2));
      core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(property_list,local_110,data_ptr,0)
      ;
      core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
                (property_list,"bpos",&this_ptr->tires[iVar1].static_bpos,
                 (CActorPropertyValidatorFunc *)0x0);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
      data_ptr = (CKeyFramedModelInstance *)(data_ptr[1].part_visibility_flags + 0xe);
    } while (iVar1 < this_ptr->tire_count);
  }
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Current time",&this_ptr->cur_time,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Total time",&this_ptr->total_time,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Course name",this_ptr->course_name,0x1f,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
