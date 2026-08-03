// Name: core_vehicle.cpp_CVehicle_archive_FUN_0054f370
// Address: 0054f370
// Address Range: [[0054f370, 0054f4f0]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_0054f370(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_0054f370(CVehicle *this_ptr)

{
  int iVar1;
  float *float_ptr;
  float *float_ptr_00;
  CKeyFramedModelInstance *model_ptr;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->tire_count,"tireCount");
  iVar1 = 0;
  if (0 < this_ptr->tire_count) {
    float_ptr_00 = &this_ptr->tires[0].width;
    float_ptr = &this_ptr->tires[0].radius;
    model_ptr = &this_ptr->tires[0].model;
    do {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(model_ptr,(char *)0x0);
      core_actor_cpp_archiveVector_FUN_0040c450
                (&this_ptr->tires[iVar1].static_bpos,"static_bpos");
      core_actor_cpp_archiveFloat_FUN_0040c880(float_ptr,"radius");
      core_actor_cpp_archiveFloat_FUN_0040c880(float_ptr_00,"width");
      model_ptr = (CKeyFramedModelInstance *)(model_ptr[1].part_visibility_flags + 0xe);
      iVar1 = iVar1 + 1;
      float_ptr = float_ptr + 0x6d;
      float_ptr_00 = float_ptr_00 + 0x6d;
    } while (iVar1 < this_ptr->tire_count);
  }
  if (INT_005c11a0 < 2) {
    if (INT_005c11a0 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->cur_time,"curTime");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->total_time,"totalTime");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->course_name,"courseName");
    if (INT_005c11a0 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->last_mobster_left,"lastMobsterLeft");
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->last_mobster_left,"lastMobsterRight")
  ;
  return;
}
