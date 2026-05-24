// Name: core_vehicle.cpp_CVehicle_archive_FUN_005e8720
// Address: 005e8720
// MANUAL RECONSTRUCTION
// Address Range: [[005e8720, 005e88a0]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_005e8720(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_005e8720(CVehicle *this_ptr)

{
  int iVar1;

  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->tire_count,"tireCount");
  iVar1 = 0;
  if (0 < this_ptr->tire_count) {
    do {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0
                (&this_ptr->tires[iVar1].model,(char *)0x0);
      core_actor_cpp_archiveVector_FUN_0040b340
                (&this_ptr->tires[iVar1].static_bpos,"static_bpos");
      core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->tires[iVar1].radius,"radius");
      core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->tires[iVar1].width,"width");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->tire_count);
  }
  if (g_CVehicleClassVersion < 2) {
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->cur_time,"curTime");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->total_time,"totalTime");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->course_name,"courseName");
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveActor_FUN_0040b870(&this_ptr->last_mobster_left,"lastMobsterLeft");
  core_actor_cpp_archiveActor_FUN_0040b870(&this_ptr->last_mobster_left,"lastMobsterRight")
  ;
  return;
}
