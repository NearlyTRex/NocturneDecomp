// Name: core_msnedit.cpp_FUN_0053bcf0
// Address: 0053bcf0
// Address Range: [[0053bcf0, 0053bd79]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053bcf0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053bcf0(uint param_1) */

void core_msnedit_cpp_FUN_0053bcf0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_stack_00000004;
  uint local_10;
  
  local_10 = 1e+30;
  for (iVar1 = *(int *)(in_stack_00000004 + 0x548); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    iVar2 = *(int *)(in_stack_00000004 + 0x28);
    if ((((iVar1 != iVar2) && (*(int *)(iVar1 + 0x2c) == *(int *)(iVar2 + 0x2c))) &&
        (*(int *)(iVar1 + 0x148) == 0)) &&
       (fVar3 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20),
       fVar5 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24),
       fVar4 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28),
       fVar3 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3), fVar3 < local_10)) {
      local_10 = fVar3;
    }
  }
  core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
  return;
}
