// Name: FUN_00430430
// Address: 00430430
// Address Range: [[00430430, 004304d9]]
// Convention: unknown
// Signature: undefined4 FUN_00430430(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_00430430(int param_1,int *param_2)

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
    goto LAB_0043045b;
  }
  if ((*param_2 != 1) && (*param_2 != 3)) {
    param_2[6] = (int)(*(float *)(param_1 + 0x3280) * *(float *)(param_1 + 0x27b8));
    param_2[5] = (int)(*(float *)(param_1 + 0x327c) * *(float *)(param_1 + 0x27b8));
    if ((float)param_2[6] < (float)param_2[5]) {
      param_2[6] = *(int *)(param_1 + 0x2490);
    }
    param_2[7] = (int)(*(float *)(param_1 + 0x3270) * *(float *)(param_1 + 0x27b8));
    return 2;
  }
LAB_0043045b:
  param_2[8] = param_1 + 0x158;
  return 1;
}
