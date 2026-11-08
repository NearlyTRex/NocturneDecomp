// Name: FUN_00483c50
// Address: 00483c50
// Address Range: [[00483c50, 00483cd7]]
// Convention: unknown
// Signature: void FUN_00483c50(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483c50(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_00403920(param_2 + 8);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      return;
    }
  }
  _DAT_01c51d14 = 0xc4;
  _DAT_01c51d18 = 6;
  FUN_005b9fc0(*(uint *)(param_2 + 4),param_2 + 0x18);
  if (DAT_007c7554 < 3) {
    return;
  }
  FUN_005bf640(&DAT_007c7558,DAT_007c7554,param_3);
  return;
}
