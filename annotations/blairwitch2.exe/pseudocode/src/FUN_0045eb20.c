// Name: FUN_0045eb20
// Address: 0045eb20
// Address Range: [[0045eb20, 0045ebce]]
// Convention: unknown
// Signature: void FUN_0045eb20(int param_1,int param_2)

#include "nocturne.h"

void FUN_0045eb20(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = FUN_005035c0(param_1 + 0x2b4);
    if ((*(int *)(iVar2 + 0x24) == 7) || (*(int *)(iVar2 + 0x24) == 6)) goto LAB_0045eb55;
    uVar3 = 6;
  }
  else {
    uVar3 = 5;
  }
  FUN_00503620(param_1 + 0x2b4,uVar3,1);
LAB_0045eb55:
  iVar2 = FUN_0055af70(0x0264B290,*(uint *)(param_1 + 0x10b00));
  if (iVar2 != 0) {
    FUN_00488890(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"dog2.wav");
  *(uint *)(param_1 + 0x10b00) = uVar3;
  FUN_00488890(param_1,param_2);
  return;
}
