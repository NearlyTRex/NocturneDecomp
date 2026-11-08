// Name: FUN_00440c50
// Address: 00440c50
// Address Range: [[00440c50, 00440cc7]]
// Convention: unknown
// Signature: void FUN_00440c50(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440c50(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != *param_1) || (param_1[4] == 0)) {
    *param_1 = param_2;
    iVar1 = FUN_005a3e50(param_1[4],param_2 << 4);
    param_1[4] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\support\\codec.cpp";
      _DAT_01d71de4 = 0x348;
      FUN_004e4330("CLZWDictionary::init - out of memory");
      param_1[1] = param_3;
      FUN_00440cd0(param_1);
      return;
    }
  }
  param_1[1] = param_3;
  FUN_00440cd0(param_1);
  return;
}
