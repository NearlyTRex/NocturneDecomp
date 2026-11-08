// Name: FUN_00427680
// Address: 00427680
// Address Range: [[00427680, 0042772e]]
// Convention: unknown
// Signature: undefined4 FUN_00427680(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_00427680(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2814) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
    if (1 < iVar1) {
      return 0;
    }
  }
  else if (*param_2 != 3) {
    return 0;
  }
  if ((*param_2 != 1) && (*param_2 != 3)) {
    param_2[6] = (int)(*(float *)(param_1 + 0x3444) * *(float *)(param_1 + 0x2824));
    param_2[5] = (int)(*(float *)(param_1 + 0x3440) * *(float *)(param_1 + 0x2824));
    if ((float)param_2[6] < (float)param_2[5]) {
      param_2[6] = *(int *)(param_1 + 0x24fc);
    }
    param_2[7] = (int)(*(float *)(param_1 + 0x3434) * *(float *)(param_1 + 0x2824));
    return 2;
  }
  param_2[8] = param_1 + 0x2b4;
  return 1;
}
