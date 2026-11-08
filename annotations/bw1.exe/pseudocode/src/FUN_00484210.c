// Name: FUN_00484210
// Address: 00484210
// Address Range: [[00484210, 00484277]]
// Convention: unknown
// Signature: void FUN_00484210(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_00484210(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == -1) {
    param_4 = 0x2cd;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_00484280(param_1,param_2,param_3,0x48,param_4);
    return;
  }
  iVar1 = 0;
  if (0 < param_3) {
    do {
      iVar1 = iVar1 + 1;
      FUN_00484b20(param_1,param_2,param_4);
      param_2 = param_2 + 0x48;
    } while (iVar1 < param_3);
  }
  return;
}
