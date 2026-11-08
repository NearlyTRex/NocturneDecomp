// Name: FUN_004c4bc0
// Address: 004c4bc0
// Address Range: [[004c4bc0, 004c4cbd]]
// Convention: unknown
// Signature: void FUN_004c4bc0(int param_1)

#include "nocturne.h"

void FUN_004c4bc0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x298) == '\0') {
    if (*(int *)(param_1 + 0x2fc) != 0) {
      FUN_00556c10(*(int *)(param_1 + 0x2fc),0,0x40000000,1);
      *(uint *)(param_1 + 0x2fc) = 0;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x2fc) != 0) {
      iVar1 = FUN_00556700(*(int *)(param_1 + 0x2fc));
      if (iVar1 != 0) goto LAB_004c4be7;
    }
    FUN_004c4a60(param_1,param_1 + 0x298,*(uint *)(param_1 + 0x300),
                 *(uint *)(param_1 + 0x304));
  }
LAB_004c4be7:
  if (*(int *)(param_1 + 0x2fc) != 0) {
    if (*(int *)(param_1 + 0x24c) == 0) {
      if (*(float *)(param_1 + 0x308) < 1.0) {
        *(uint *)(param_1 + 0x308) = 0x3f800000;
        FUN_00556c10(*(uint *)(param_1 + 0x2fc),*(uint *)(param_1 + 0x308),0x40000000,0)
        ;
        return;
      }
    }
    else if (*(int *)(param_1 + 0x308) == 0x3f800000) {
      *(uint *)(param_1 + 0x308) = 0x3e99999a;
      FUN_00556c10(*(uint *)(param_1 + 0x2fc),*(uint *)(param_1 + 0x308),0x40000000,0);
      return;
    }
  }
  return;
}
