// Name: FUN_0054aa70
// Address: 0054aa70
// Address Range: [[0054aa70, 0054ab75]]
// Convention: unknown
// Signature: void FUN_0054aa70(int param_1,int param_2)

#include "nocturne.h"

void FUN_0054aa70(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x10b38) != 1) {
    *(uint *)(param_2 + 0x30) = 100;
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 == 4) {
    *(uint *)(param_2 + 0x30) = 100;
  }
  else if ((iVar1 < 0xc) || (iVar1 == 0x6b)) goto LAB_0054aaa4;
  *(uint *)(param_2 + 4) = 0;
LAB_0054aaa4:
  if (0.0 < *(float *)(param_2 + 4)) {
    FUN_0054a790(param_1,param_2);
  }
  fVar2 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x2b4;
  *(float *)(param_1 + 0x25a8) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar3 = FUN_005035c0(iVar1);
    if ((*(int *)(iVar3 + 0x24) != 8) && (*(int *)(iVar3 + 0x24) != 7)) {
      FUN_00503620(iVar1,7,1);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"@smiley_die??.wav" + 1);
    }
    FUN_00488890(param_1,param_2);
    return;
  }
  FUN_00503620(iVar1,3,1);
  FUN_00488890(param_1,param_2);
  return;
}
