// Name: FUN_005962d0
// Address: 005962d0
// Address Range: [[005962d0, 0059630a]]
// Convention: unknown
// Signature: undefined4 FUN_005962d0(int param_1)

#include "nocturne.h"

uint FUN_005962d0(int param_1)

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
