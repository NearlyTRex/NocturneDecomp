// Name: FUN_004da440
// Address: 004da440
// Address Range: [[004da440, 004da4d9]]
// Convention: unknown
// Signature: void FUN_004da440(int param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004da4a0) */

void FUN_004da440(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (0 < iVar1) {
    FUN_004dbaa0(param_1,*(uint *)(param_1 + 0x14),*(int *)(param_1 + 0x458) == 0);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x33c) = 0;
  *(uint *)(param_1 + 0x458) = 0;
  iVar1 = *(int *)(param_1 + 0x464);
  *(uint *)(param_1 + 0x338) = 0;
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc) = 0;
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0xd0))(iVar1,2);
  *(uint *)(param_1 + 0x464) = 0;
  *(uint *)(param_1 + 0xc) = 0;
  return;
}
