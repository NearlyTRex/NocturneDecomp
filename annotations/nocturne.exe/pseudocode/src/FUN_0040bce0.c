// Name: FUN_0040bce0
// Address: 0040bce0
// Address Range: [[0040bce0, 0040bd3b]]
// Convention: unknown
// Signature: void FUN_0040bce0(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bce0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if ((iVar1 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) && (param_2 != 0)) {
    if (param_2 < 2) {
      FUN_004940d0(0x01C70F74);
      return;
    }
    if (param_2 == 2) {
      FUN_004940d0(0x01C70F74);
      return;
    }
  }
  return;
}
