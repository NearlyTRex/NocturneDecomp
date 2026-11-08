// Name: FUN_0053e9a0
// Address: 0053e9a0
// Address Range: [[0053e9a0, 0053e9fc]]
// Convention: unknown
// Signature: void FUN_0053e9a0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053e9a0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == *(int *)(param_1 + 0x10b14)) {
    param_2[1] = param_2[1];
    return;
  }
  if ((iVar1 != *(int *)(param_1 + 0x10b0c)) && (iVar1 != *(int *)(param_1 + 0x10b10))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005e6785);
    return;
  }
  param_2[1] = (int)((float)param_2[1] * (float)_DAT_005e678d);
  return;
}
