// Name: FUN_00557c30
// Address: 00557c30
// Address Range: [[00557c30, 00557c6a]]
// Convention: unknown
// Signature: undefined4 FUN_00557c30(int param_1)

#include "nocturne.h"

uint FUN_00557c30(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar2 = FUN_004e1660(param_1 + 0x150);
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
