// Name: FUN_0058dc50
// Address: 0058dc50
// Address Range: [[0058dc50, 0058dc8a]]
// Convention: unknown
// Signature: undefined4 FUN_0058dc50(int param_1)

#include "nocturne.h"

uint FUN_0058dc50(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar2 = FUN_005035c0(param_1 + 0x2b4);
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
