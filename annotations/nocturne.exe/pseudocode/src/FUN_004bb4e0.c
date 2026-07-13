// Name: FUN_004bb4e0
// Address: 004bb4e0
// Address Range: [[004bb4e0, 004bb68d]]
// Convention: unknown
// Signature: void FUN_004bb4e0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004bb4e0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00527230(*(uint *)(param_1 + 0x1fa44));
  if ((*(uint *)(param_1 + 0xbc8c) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01C775EC + 0x1d0) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01C775EC + 0x22c) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)(param_1 + 0xbc8c) = 0x40400000;
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar3 = FUN_004e1660(iVar2);
    if (*(int *)(iVar3 + 0x24) != 9) {
      iVar3 = FUN_004e1660(iVar2);
      if (*(int *)(iVar3 + 0x24) != 8) {
        *(uint *)(param_1 + 0x2590) = 0;
        FUN_004e16b0(iVar2,8,1);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
        FUN_004b0670(0x01C78C7C,param_1,0x32,0x42480000,0);
        FUN_00527230(*(uint *)(param_1 + 0x1fa48));
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"icepick_die01.wav");
        FUN_00428510(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)(param_1 + 0x1fa3c) == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 0xb;
    }
    FUN_004e16b0(iVar2,uVar4,1);
    iVar2 = FUN_00526c50(*(uint *)(param_1 + 0x1fa48));
    if (iVar2 == 0) {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                        (param_1,"icepick_injured??.wav");
      *(uint *)(param_1 + 0x1fa48) = uVar4;
      FUN_00428510(param_1,param_2);
      return;
    }
  }
  FUN_00428510(param_1,param_2);
  return;
}
