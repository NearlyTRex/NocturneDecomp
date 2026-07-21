// Name: core_mission.cpp_CDemonMission_process_FUN_004d92a0
// Address: 004d92a0
// Address Range: [[004d92a0, 004d93cc]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x14b] != 0) {
    iVar2 = 0;
    piVar1 = param_1;
    if (0 < param_1[0x14b]) {
      do {
        iVar2 = iVar2 + 1;
        core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(param_1,piVar1[0x14c],piVar1[0x1b0])
        ;
        piVar1 = piVar1 + 1;
      } while (iVar2 < param_1[0x14b]);
    }
    param_1[0x14b] = 0;
  }
  core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(param_1);
  if (-1 < param_1[0x14a]) {
    iVar2 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    *(int *)(iVar2 + 0x20) = param_1[0x147];
    *(int *)(iVar2 + 0x24) = param_1[0x148];
    *(int *)(iVar2 + 0x28) = param_1[0x149];
    *(int *)(iVar2 + 0x2c) = param_1[0x14a];
    if (param_1[0x14a] != *param_1) {
      wincore_windll_cpp_clearScreen_FUN_0052ee70();
      engine_2d_c_drawText_FUN_00402600("Changing sets...",0,0);
      engine_2d_c_drawText_FUN_00402600("Insert wipe here...",0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_mission_cpp_CDemonMission_loadSet_FUN_004d9020(param_1,param_1[0x14a]);
      FUN_0050ad20(0x01E57284);
      core_set_cpp_CDemonSet_initScene_FUN_005084c0(0x01E57284);
      *(uint *)(0x01E56DA0 + 0x10) = 2;
    }
    param_1[0x14a] = -1;
    param_1[0x149] = 0;
    param_1[0x148] = param_1[0x149];
    param_1[0x147] = param_1[0x148];
  }
  return;
}
