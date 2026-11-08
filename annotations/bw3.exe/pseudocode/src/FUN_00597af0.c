// Name: FUN_00597af0
// Address: 00597af0
// Address Range: [[00597af0, 00597bd5]]
// Convention: unknown
// Signature: void FUN_00597af0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00597af0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x30) != 0x70) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    iVar3 = param_1 + 0x158;
    *(float *)(param_1 + 0x2538) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2540) = 0;
      *(uint *)(param_1 + 0x2538) = 0;
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
      iVar2 = FUN_004fc070(iVar3);
      if ((*(int *)(iVar2 + 0x24) != 9) && (*(int *)(iVar2 + 0x24) != 8)) {
        FUN_004fc0d0(iVar3,8,1);
        (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
        FUN_00489b80(param_1,param_2);
        return;
      }
    }
    else {
      iVar2 = FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
      if (iVar2 != 0) {
        FUN_004fc0d0(iVar3,7,1);
      }
      iVar3 = FUN_0040cea0(0,100);
      if (0x5a < iVar3) {
        FUN_00597be0(param_1,0);
      }
    }
    FUN_00489b80(param_1,param_2);
  }
  return;
}
