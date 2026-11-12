// Name: core_vehicle.cpp_CVehicle_archive_FUN_005848a0
// Address: 005848a0
// Address Range: [[005848a0, 00584a20]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_005848a0(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_005848a0(CVehicle *this_ptr)

{
  int iVar1;
  float *float_ptr;
  float *float_ptr_00;
  CKeyFramedModelInstance *model_ptr;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->model,">@modelName" + 2);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->tire_count,"tireCount");
  iVar1 = 0;
  if (0 < this_ptr->tire_count) {
    float_ptr_00 = &this_ptr->tires[0].width;
    float_ptr = &this_ptr->tires[0].radius;
    model_ptr = &this_ptr->tires[0].model;
    do {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(model_ptr,(char *)0x0);
      core_actor_cpp_archiveVector_FUN_0040b4b0
                (&this_ptr->tires[iVar1].static_bpos,"static_bpos");
      core_actor_cpp_archiveFloat_FUN_0040b8e0(float_ptr,"radius");
      core_actor_cpp_archiveFloat_FUN_0040b8e0(float_ptr_00,"width");
      model_ptr = (CKeyFramedModelInstance *)(model_ptr[1].part_visibility_flags + 0xe);
      iVar1 = iVar1 + 1;
      float_ptr = float_ptr + 0x6d;
      float_ptr_00 = float_ptr_00 + 0x6d;
    } while (iVar1 < this_ptr->tire_count);
  }
  if (g_CVehicleClassVersion < 2) {
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->cur_time,"curTime");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->total_time,"totalTime");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->course_name,"courseName");
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->last_mobster_left,"lastMobsterLeft");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->last_mobster_left,"lastMobsterRight")
  ;
  return;
}
