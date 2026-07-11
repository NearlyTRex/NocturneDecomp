// Name: FUN_004613d0
// Address: 004613d0
// Address Range: [[004613d0, 00461437]]
// Convention: unknown
// Signature: void FUN_004613d0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_004613d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == -1) {
    param_4 = 0x2cd;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_004614b0(param_1,param_2,param_3,0x3c,param_4);
    return;
  }
  iVar1 = 0;
  if (0 < param_3) {
    do {
      iVar1 = iVar1 + 1;
      FUN_00461a30(param_1,param_2,param_4);
      param_2 = param_2 + 0x3c;
    } while (iVar1 < param_3);
  }
  return;
}
