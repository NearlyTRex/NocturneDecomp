// Name: FUN_00469c60
// Address: 00469c60
// Address Range: [[00469c60, 00469cf8]]
// Convention: unknown
// Signature: void FUN_00469c60(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469c60(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_00403970(param_2 + 8), iVar1 != 0)) {
    if (*(int *)(param_1 + 4) == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = &LAB_0055b3b1;
      }
      else {
        _DAT_01c35e6c = &LAB_0055bb93;
      }
      _DAT_01c38b58 = 6;
      _DAT_01c38b54 = param_3;
    }
    else {
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = &LAB_0046e936;
    }
    FUN_00469590(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  }
  return;
}
