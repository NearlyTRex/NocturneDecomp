// Name: FUN_005964f0
// Address: 005964f0
// Address Range: [[005964f0, 00596521]]
// Convention: unknown
// Signature: void FUN_005964f0(int *param_1)

#include "nocturne.h"

void FUN_005964f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = param_1 + 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_00484f00(DAT_00612560,piVar2);
      piVar2 = piVar2 + 6;
    } while (iVar1 < *param_1);
  }
  return;
}
