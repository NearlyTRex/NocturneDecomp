// Name: core_vehicle.cpp_CVehicle_archive_FUN_0054f370
// Address: 0054f370
// Address Range: [[0054f370, 0054f4f0]]
// Convention: unknown
// Signature: void core_vehicle_cpp_CVehicle_archive_FUN_0054f370(int param_1)

#include "nocturne.h"

void core_vehicle_cpp_CVehicle_archive_FUN_0054f370(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x930,"tireCount");
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x930)) {
    iVar3 = param_1 + 0x944;
    iVar2 = param_1 + 0x940;
    iVar4 = param_1 + 0x948;
    do {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(iVar4,0);
      core_actor_cpp_archiveVector_FUN_0040c450
                (param_1 + 0x934 + iVar1 * 0x1b4,"static_bpos");
      core_actor_cpp_archiveFloat_FUN_0040c880(iVar2,"radius");
      core_actor_cpp_archiveFloat_FUN_0040c880(iVar3,"width");
      iVar4 = iVar4 + 0x1b4;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x1b4;
      iVar3 = iVar3 + 0x1b4;
    } while (iVar1 < *(int *)(param_1 + 0x930));
  }
  if (INT_005c11a0 < 2) {
    if (INT_005c11a0 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x1024,"curTime");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x1028,"totalTime");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x102c,"courseName");
    if (INT_005c11a0 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1068,"lastMobsterLeft");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x1068,"lastMobsterRight");
  return;
}
