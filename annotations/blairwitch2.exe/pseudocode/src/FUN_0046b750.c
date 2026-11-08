// Name: FUN_0046b750
// Address: 0046b750
// Address Range: [[0046b750, 0046b7d7]]
// Convention: unknown
// Signature: void FUN_0046b750(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b750(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_00403970(param_2 + 8);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      return;
    }
  }
  _DAT_01c38b54 = 0xc4;
  _DAT_01c38b58 = 6;
  FUN_00594f40(*(uint *)(param_2 + 4),param_2 + 0x18);
  if (DAT_007bee30 < 3) {
    return;
  }
  FUN_0059a5d0(&DAT_007bee34,DAT_007bee30,param_3);
  return;
}
