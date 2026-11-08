// Name: FUN_004342d0
// Address: 004342d0
// Address Range: [[004342d0, 00434347]]
// Convention: unknown
// Signature: void FUN_004342d0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004342d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != *param_1) || (param_1[4] == 0)) {
    *param_1 = param_2;
    iVar1 = FUN_005b8ce0(param_1[4],param_2 << 4);
    param_1[4] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\support\\codec.cpp";
      _DAT_01d046a4 = 0x342;
      FUN_004e4500("CLZWDictionary::init - out of memory");
      param_1[1] = param_3;
      FUN_00434350(param_1);
      return;
    }
  }
  param_1[1] = param_3;
  FUN_00434350(param_1);
  return;
}
