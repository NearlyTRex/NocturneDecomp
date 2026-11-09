// Name: core_vehicle.cpp_FUN_005848a0
// Address: 005848a0
// Address Range: [[005848a0, 00584a20]]
// Convention: unknown
// Signature: void core_vehicle_cpp_FUN_005848a0(CDemonActor *param_1)

#include "nocturne.h"

void core_vehicle_cpp_FUN_005848a0(CDemonActor *param_1)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;
  byte *puVar4;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,">@modelName" + 2);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[3].field_0x278,"tireCount");
  iVar1 = 0;
  if (0 < *(int *)&param_1[3].field_0x278) {
    puVar3 = &param_1[3].field_0x28c;
    puVar2 = &param_1[3].field_0x288;
    puVar4 = &param_1[3].field_0x290;
    do {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(puVar4,0);
      core_actor_cpp_archiveVector_FUN_0040b4b0
                (&param_1[3].field_0x27c + iVar1 * 0x1b4,"static_bpos");
      core_actor_cpp_archiveFloat_FUN_0040b8e0(puVar2,"radius");
      core_actor_cpp_archiveFloat_FUN_0040b8e0(puVar3,"width");
      puVar4 = puVar4 + 0x1b4;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x1b4;
      puVar3 = puVar3 + 0x1b4;
    } while (iVar1 < *(int *)&param_1[3].field_0x278);
  }
  if (g_CVehicleClassVersion < 2) {
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[6].field_0x150,"curTime");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[6].field_0x154,"totalTime");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[6].field_0x158,"courseName");
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[6].field_0x194,"lastMobsterLeft");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[6].field_0x194,"lastMobsterRight");
  return;
}
