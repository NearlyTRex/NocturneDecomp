// Name: core_teleport.cpp_CTeleport_process_FUN_00543910
// Address: 00543910
// Address Range: [[00543910, 005439b8]]
// Convention: unknown
// Signature: void core_teleport_cpp_CTeleport_process_FUN_00543910(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_teleport_cpp_CTeleport_process_FUN_00543910(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  byte auStack_2c [24];
  byte local_14 [12];
  
  if (*(int *)(param_1 + 0x15c) != 0) {
    pfVar1 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                (param_1,local_14,*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x20);
    pfVar2 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_2c);
    if ((((*pfVar2 <= *pfVar1) && (pfVar2[1] <= pfVar1[1])) && (pfVar2[2] <= pfVar1[2])) &&
       (((*pfVar1 <= pfVar2[3] && (pfVar1[1] <= pfVar2[4])) && (pfVar1[2] <= pfVar2[5])))) {
      FUN_004d90e0(0x01CC9450,*(int *)(param_1 + 0x15c) + 0x20);
      return;
    }
  }
  return;
}
