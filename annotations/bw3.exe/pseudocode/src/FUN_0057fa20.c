// Name: FUN_0057fa20
// Address: 0057fa20
// Address Range: [[0057fa20, 0057fa5a]]
// Convention: unknown
// Signature: undefined4 FUN_0057fa20(int param_1)

#include "nocturne.h"

uint FUN_0057fa20(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar2 = FUN_004fc070(param_1 + 0x158);
  uVar1 = *(uint *)(iVar2 + 0x24);
  if (0xb < uVar1) {
    if (uVar1 < 0xd) {
      return 1;
    }
    if (uVar1 == 0xd) {
      return 2;
    }
  }
  return 0;
}
