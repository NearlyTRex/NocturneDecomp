// Name: FUN_0046d330
// Address: 0046d330
// Address Range: [[0046d330, 0046d3b7]]
// Convention: unknown
// Signature: void FUN_0046d330(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d330(int param_1,int param_2,uint param_3)

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
  _DAT_01c6e2b4 = 0xc4;
  _DAT_01c6e2b8 = 6;
  FUN_00587cd0(*(uint *)(param_2 + 4),param_2 + 0x18);
  if (DAT_007e3e88 < 3) {
    return;
  }
  FUN_005a23c0(&DAT_007e3e8c,DAT_007e3e88,param_3);
  return;
}
