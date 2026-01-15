// Name: core_skeledit.cpp_FUN_0058e3e0
// Address: 0058e3e0
// Address Range: [[0058e3e0, 0058e4df]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058e3e0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058e3e0(void)

{
  float *pfVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *in_stack_00000004;
  float in_stack_00000008;
  int local_18;
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  local_18 = 0;
  if (0 < *in_stack_00000004) {
    local_14 = 0;
    do {
      iVar6 = 0;
      for (iVar4 = 0; iVar4 < *(int *)((int)in_stack_00000004 + local_14 + 0x2c); iVar4 = iVar4 + 1)
      {
        pbVar3 = (byte *)(*(int *)((int)in_stack_00000004 + local_14 + 0x40) + iVar6);
        pfVar1 = (float *)(pbVar3 + 0x10);
        for (iVar2 = 0; iVar2 < (int)(uint)*pbVar3; iVar2 = iVar2 + 1) {
          pfVar1[1] = pfVar1[1] * in_stack_00000008;
          pfVar1[2] = pfVar1[2] * in_stack_00000008;
          *pfVar1 = *pfVar1 * in_stack_00000008;
          pfVar1 = pfVar1 + 3;
        }
        iVar6 = iVar6 + 0x34;
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + 1;
    } while (local_18 < *in_stack_00000004);
  }
  pfVar1 = (float *)(in_stack_00000004 + 0x1f24);
  do {
    pfVar5 = pfVar1 + 3;
    pfVar1[1] = pfVar1[1] * in_stack_00000008;
    pfVar1[2] = pfVar1[2] * in_stack_00000008;
    *pfVar1 = *pfVar1 * in_stack_00000008;
    pfVar1 = pfVar5;
  } while (pfVar5 != (float *)(in_stack_00000004 + 0x2050));
  in_stack_00000004[0x1f21] = (int)((float)in_stack_00000004[0x1f21] * in_stack_00000008);
  in_stack_00000004[0x1f22] = (int)((float)in_stack_00000004[0x1f22] * in_stack_00000008);
  in_stack_00000004[0x1f23] = (int)((float)in_stack_00000004[0x1f23] * in_stack_00000008);
  return;
}
