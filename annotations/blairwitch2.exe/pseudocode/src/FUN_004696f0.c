// Name: FUN_004696f0
// Address: 004696f0
// Address Range: [[004696f0, 00469799]]
// Convention: unknown
// Signature: void FUN_004696f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004696f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_00403970(param_2 + 8), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = param_2;
      iVar2 = 0;
      do {
        *(uint *)(&DAT_01ba5c84 + iVar2) = *(uint *)(iVar1 + 0x18);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0xc;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (*(int *)(param_1 + 4) == 0) {
      _DAT_01c38b54 = 0xc0;
      _DAT_01c38b58 = 6;
      _DAT_01c35e6c = &LAB_0046ec58;
    }
    else {
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = &LAB_0046e936;
    }
    FUN_00469590(param_1,*(uint *)(param_2 + 4),&DAT_01ba5c84);
  }
  return;
}
