// Name: FUN_00439b30
// Address: 00439b30
// Address Range: [[00439b30, 00439be3]]
// Convention: unknown
// Signature: void FUN_00439b30(int param_1,int param_2)

#include "nocturne.h"

void FUN_00439b30(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  FUN_004398b0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = FUN_005035c0(param_1 + 0x2b4);
    if ((*(int *)(iVar2 + 0x24) == 5) || (*(int *)(iVar2 + 0x24) == 4)) goto LAB_00439b70;
    uVar3 = 4;
  }
  else {
    uVar3 = 3;
  }
  FUN_00503620(param_1 + 0x2b4,uVar3,1);
LAB_00439b70:
  iVar2 = FUN_0055af70(0x0264B290,*(uint *)(param_1 + 0x10b00));
  if (iVar2 != 0) {
    FUN_00488890(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"cow?.wav");
  *(uint *)(param_1 + 0x10b00) = uVar3;
  FUN_00488890(param_1,param_2);
  return;
}
