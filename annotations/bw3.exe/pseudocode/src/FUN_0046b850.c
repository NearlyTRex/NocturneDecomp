// Name: FUN_0046b850
// Address: 0046b850
// Address Range: [[0046b850, 0046b8e8]]
// Convention: unknown
// Signature: void FUN_0046b850(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b850(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_00403920(param_2 + 8), iVar1 != 0)) {
    if (*(int *)(param_1 + 4) == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = &LAB_00560f31;
      }
      else {
        _DAT_01c6b5cc = &LAB_00561713;
      }
      _DAT_01c6e2b8 = 6;
      _DAT_01c6e2b4 = param_3;
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
