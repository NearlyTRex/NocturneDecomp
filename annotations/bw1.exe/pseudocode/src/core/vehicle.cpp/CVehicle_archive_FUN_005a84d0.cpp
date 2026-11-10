// Name: core_vehicle.cpp_CVehicle_archive_FUN_005a84d0
// Address: 005a84d0
// Address Range: [[005a84d0, 005a8650]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_005a84d0(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_005a84d0(CVehicle *this_ptr)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  CKeyFramedModelInstance *pCVar4;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->model,">@modelName" + 2);
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->tire_count,"tireCount");
  iVar1 = 0;
  if (0 < this_ptr->tire_count) {
    pfVar3 = &this_ptr->tires[0].width;
    pfVar2 = &this_ptr->tires[0].radius;
    pCVar4 = &this_ptr->tires[0].model;
    do {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(pCVar4,0);
      core_actor_cpp_archiveVector_FUN_0040b1c0(this_ptr->tires + iVar1,"static_bpos");
      core_actor_cpp_archiveFloat_FUN_0040b5f0(pfVar2,"radius");
      core_actor_cpp_archiveFloat_FUN_0040b5f0(pfVar3,"width");
      pCVar4 = (CKeyFramedModelInstance *)((int)((CVector3f *)(pCVar4 + 1) + 4) + 8);
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 0x6d;
      pfVar3 = pfVar3 + 0x6d;
    } while (iVar1 < this_ptr->tire_count);
  }
  if (g_CVehicleClassVersion < 2) {
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->cur_time,"curTime");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->total_time,"totalTime");
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->course_name,"courseName");
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->last_mobster_left,"lastMobsterLeft");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->last_mobster_left,"lastMobsterRight")
  ;
  return;
}
