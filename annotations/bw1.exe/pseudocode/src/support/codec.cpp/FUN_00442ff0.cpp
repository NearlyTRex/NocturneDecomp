// Name: FUN_00442ff0
// Address: 00442ff0
// Address Range: [[00442ff0, 00443067]]
// Convention: unknown
// Signature: void FUN_00442ff0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442ff0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != *param_1) || (param_1[4] == 0)) {
    *param_1 = param_2;
    iVar1 = FUN_005c10d0(param_1[4],param_2 << 4);
    param_1[4] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\support\\codec.cpp";
      _DAT_01d1d404 = 0x348;
      FUN_005030e0("CLZWDictionary::init - out of memory");
      param_1[1] = param_3;
      FUN_00443070(param_1);
      return;
    }
  }
  param_1[1] = param_3;
  FUN_00443070(param_1);
  return;
}
