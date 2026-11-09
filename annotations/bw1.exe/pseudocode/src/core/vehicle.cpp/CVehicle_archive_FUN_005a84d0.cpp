// Name: core_vehicle.cpp_CVehicle_archive_FUN_005a84d0
// Address: 005a84d0
// Address Range: [[005a84d0, 005a8650]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_005a84d0(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_archive_FUN_005a84d0(CVehicle *this_ptr)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;
  byte *puVar4;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,">@modelName" + 2);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x938,"tireCount");
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x938) {
    puVar3 = &this_ptr->field_0x94c;
    puVar2 = &this_ptr->field_0x948;
    puVar4 = &this_ptr->field_0x950;
    do {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(puVar4,0);
      core_actor_cpp_archiveVector_FUN_0040b1c0
                (&this_ptr->field_0x93c + iVar1 * 0x1b4,"static_bpos");
      core_actor_cpp_archiveFloat_FUN_0040b5f0(puVar2,"radius");
      core_actor_cpp_archiveFloat_FUN_0040b5f0(puVar3,"width");
      puVar4 = puVar4 + 0x1b4;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x1b4;
      puVar3 = puVar3 + 0x1b4;
    } while (iVar1 < *(int *)&this_ptr->field_0x938);
  }
  if (g_CVehicleClassVersion < 2) {
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x102c,"curTime");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x1030,"totalTime");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1034,"courseName");
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1070,"lastMobsterLeft");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1070,"lastMobsterRight");
  return;
}
