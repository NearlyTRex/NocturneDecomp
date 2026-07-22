// Name: core_dest.cpp_CActorDestination_process_FUN_0044b850
// Address: 0044b850
// Address Range: [[0044b850, 0044ba09]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_process_FUN_0044b850(int param_1)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_process_FUN_0044b850(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(int *)(param_1 + 0x1e8) != 0) && (*(int *)(param_1 + 0x150) == 0)) {
    iVar2 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(0x01E57284 + 0x14cd6c); iVar3 = iVar3 + 1) {
      iVar1 = *(int *)(0x01E57284 + iVar2 + 0x14cd70);
      local_2c = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
      local_28 = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
      local_24 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
      if ((SQRT(local_24 * local_24 + local_2c * local_2c + local_28 * local_28) <
           (float)0.10000000000000001) &&
         (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0
                            (param_1,*(uint *)(0x01E57284 + iVar2 + 0x14cd70)), iVar1 != 0))
      break;
      iVar2 = iVar2 + 4;
    }
  }
  iVar2 = *(int *)(param_1 + 0x150);
  if (iVar2 != 0) {
    local_38 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
    local_34 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
    local_30 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_20 != &local_38) {
      local_20 = local_38;
      local_1c = local_34;
      local_18 = local_30;
    }
    if ((((float)0.25 <= ABS(local_20)) || ((float)0.25 <= ABS(local_1c))) ||
       ((float)0.25 <= ABS(local_18))) {
      *(uint *)(param_1 + 0x17c) = 0;
      *(uint *)(param_1 + 0x1e8) = 0;
      return;
    }
    if ((*(int *)(param_1 + 0x1e4) != 0) ||
       ((*(int *)(param_1 + 0x17c) == 0 && (*(int *)(param_1 + 0x1e8) == 0)))) {
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x180);
    }
    *(uint *)(param_1 + 0x17c) = 1;
  }
  *(uint *)(param_1 + 0x1e8) = 0;
  return;
}
