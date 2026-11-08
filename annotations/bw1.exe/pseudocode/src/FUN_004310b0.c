// Name: FUN_004310b0
// Address: 004310b0
// Address Range: [[004310b0, 00431159]]
// Convention: unknown
// Signature: undefined4 FUN_004310b0(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_004310b0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x27a8) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
    if (1 < iVar1) {
      return 0;
    }
  }
  else if (iVar1 != 4) {
    if (iVar1 != 3) {
      return 0;
    }
    goto LAB_004310db;
  }
  if ((*param_2 != 1) && (*param_2 != 3)) {
    param_2[6] = (int)(*(float *)(param_1 + 0x3000) * *(float *)(param_1 + 0x27b8));
    param_2[5] = (int)(*(float *)(param_1 + 0x2ffc) * *(float *)(param_1 + 0x27b8));
    if ((float)param_2[6] < (float)param_2[5]) {
      param_2[6] = *(int *)(param_1 + 0x2490);
    }
    param_2[7] = (int)(*(float *)(param_1 + 0x2ff0) * *(float *)(param_1 + 0x27b8));
    return 2;
  }
LAB_004310db:
  param_2[8] = param_1 + 0x158;
  return 1;
}
