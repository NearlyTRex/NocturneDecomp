// Name: FUN_00520e40
// Address: 00520e40
// Address Range: [[00520e40, 00520f45]]
// Convention: unknown
// Signature: void FUN_00520e40(int param_1,int param_2)

#include "nocturne.h"

void FUN_00520e40(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xbd64) != 1) {
    *(uint *)(param_2 + 0x30) = 100;
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 == 4) {
    *(uint *)(param_2 + 0x30) = 100;
  }
  else if ((iVar1 < 0xc) || (iVar1 == 0x6b)) goto LAB_00520e74;
  *(uint *)(param_2 + 4) = 0;
LAB_00520e74:
  if (0.0 < *(float *)(param_2 + 4)) {
    FUN_00520b60(param_1,param_2);
  }
  fVar2 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar3 = FUN_004e1660(iVar1);
    if ((*(int *)(iVar3 + 0x24) != 8) && (*(int *)(iVar3 + 0x24) != 7)) {
      FUN_004e16b0(iVar1,7,1);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"@smiley_die??.wav" + 1);
    }
    FUN_00479f70(param_1,param_2);
    return;
  }
  FUN_004e16b0(iVar1,3,1);
  FUN_00479f70(param_1,param_2);
  return;
}
