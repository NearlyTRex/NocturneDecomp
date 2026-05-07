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
  char local_110 [256];

  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  for (iVar1 = 0; iVar1 < this_ptr->tire_count; iVar1 = iVar1 + 1) {
    _sprintf(local_110,"%s tire",g_VehicleWheelLocationNames[iVar1]);
    core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
              (property_list,local_110,&this_ptr->tires[iVar1].model,0);
    core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
              (property_list,"bpos",&this_ptr->tires[iVar1].static_bpos,
               (CActorPropertyValidatorFunc *)0x0);
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
