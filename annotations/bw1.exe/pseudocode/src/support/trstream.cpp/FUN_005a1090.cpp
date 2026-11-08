// Name: FUN_005a1090
// Address: 005a1090
// Address Range: [[005a1090, 005a1120]]
// Convention: unknown
// Signature: undefined4 FUN_005a1090(int *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a1090(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  _DAT_01d1d400 = "..\\support\\trstream.cpp";
  _DAT_01d1d404 = 0x714;
  FUN_005030e0("Hey, we're using windows handles for low-level file I/O!");
  (**(code **)(*param_1 + 0x24))(param_1);
  param_1[4] = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  FUN_005c170c(param_1[1],param_4 + param_1[4],0);
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
  if (iVar1 != 0) {
    FUN_005a0e10(param_1);
    return 1;
  }
  (**(code **)(*param_1 + 0x24))(param_1);
  return 0;
}
