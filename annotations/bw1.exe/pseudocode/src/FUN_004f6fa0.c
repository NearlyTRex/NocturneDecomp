// Name: FUN_004f6fa0
// Address: 004f6fa0
// Address Range: [[004f6fa0, 004f7042]]
// Convention: unknown
// Signature: void FUN_004f6fa0(int param_1)

#include "nocturne.h"

void FUN_004f6fa0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (0 < iVar1) {
    FUN_004f8d00(param_1,*(uint *)(param_1 + 0x14),*(int *)(param_1 + 0x458) == 0);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x33c) = 0;
  *(uint *)(param_1 + 0x458) = 0;
  iVar1 = *(int *)(param_1 + 0x464);
  *(uint *)(param_1 + 0x338) = 0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xd0))(iVar1,2);
    *(uint *)(param_1 + 0x464) = 0;
  }
  *(uint *)(param_1 + 0x460) = 0;
  *(uint *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x45c) = 0;
  return;
}
