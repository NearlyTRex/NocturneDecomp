// Name: FUN_0046b240
// Address: 0046b240
// Address Range: [[0046b240, 0046b2ba]]
// Convention: unknown
// Signature: void FUN_0046b240(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b240(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_00403920(param_2 + 8), iVar1 != 0)) {
    if (*(int *)(param_1 + 4) == 0) {
      _DAT_01c6e2b4 = 0xc0;
      _DAT_01c6e2b8 = 6;
      _DAT_01c6b5cc = &LAB_0046fcc8;
    }
    else {
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
      _DAT_01c6b5cc = &LAB_0046f9a6;
    }
    FUN_0046b160(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  }
  return;
}
