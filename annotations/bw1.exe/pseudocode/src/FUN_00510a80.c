// Name: FUN_00510a80
// Address: 00510a80
// Address Range: [[00510a80, 00510af9]]
// Convention: unknown
// Signature: undefined4 FUN_00510a80(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00510a80(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  
  param_2[6] = *(int *)(param_1 + 0x2490);
  param_2[7] = 0x3f800000;
  if (*param_2 == 1) {
    param_2[5] = -0x42333333;
    fVar1 = (float)_DAT_005e8a80;
    param_2[6] = (int)((float)param_2[6] + _DAT_005e8a88);
    param_2[7] = (int)((float)param_2[7] * fVar1);
  }
  else {
    param_2[5] = 0x40000000;
  }
  iVar2 = FUN_00524770(param_1 + 0x158);
  if (*(int *)(iVar2 + 0x24) == 0xc) {
    return 0;
  }
  return 2;
}
