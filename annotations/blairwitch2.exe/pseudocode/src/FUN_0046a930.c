// Name: FUN_0046a930
// Address: 0046a930
// Address Range: [[0046a930, 0046a9f9]]
// Convention: unknown
// Signature: void FUN_0046a930(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a930(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1[3] == 0) || (iVar3 = FUN_00403970(param_2 + 8), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = param_2;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & *(uint *)(*param_1 + 0x10 + *(int *)(iVar1 + 0x18) * 0x30);
        iVar1 = iVar1 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (param_1[1] == 0) {
        if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = &LAB_0055b3b1;
        }
        else {
          _DAT_01c35e6c = &LAB_0055bb93;
        }
        _DAT_01c38b58 = 6;
        _DAT_01c38b54 = 0x367;
      }
      else {
        _DAT_01c38b54 = 0;
        _DAT_01c38b58 = 0;
        _DAT_01c35e6c = &LAB_0046e936;
      }
      FUN_00469590(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
    }
  }
  return;
}
