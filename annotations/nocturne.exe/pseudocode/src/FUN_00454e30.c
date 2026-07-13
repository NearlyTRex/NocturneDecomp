// Name: FUN_00454e30
// Address: 00454e30
// Address Range: [[00454e30, 00454ede]]
// Convention: unknown
// Signature: void FUN_00454e30(int param_1,int param_2)

#include "nocturne.h"

void FUN_00454e30(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar2 + 0x24) == 7) || (*(int *)(iVar2 + 0x24) == 6)) goto LAB_00454e65;
    uVar3 = 6;
  }
  else {
    uVar3 = 5;
  }
  FUN_004e16b0(param_1 + 0x150,uVar3,1);
LAB_00454e65:
  iVar2 = FUN_0052eba0(0x02DC9450,*(uint *)(param_1 + 0xbd2c));
  if (iVar2 != 0) {
    FUN_00479f70(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"dog2.wav");
  *(uint *)(param_1 + 0xbd2c) = uVar3;
  FUN_00479f70(param_1,param_2);
  return;
}
