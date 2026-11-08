// Name: FUN_004152e0
// Address: 004152e0
// Address Range: [[004152e0, 00415382]]
// Convention: unknown
// Signature: void FUN_004152e0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004152e0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x281c) != 0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    uVar3 = 7;
    *(uint *)(param_1 + 0x25a8) = 0;
  }
  else {
    iVar2 = FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      FUN_00503620(param_1 + 0x2b4,4,1);
    }
    if (iVar2 == 1) {
      FUN_00503620(param_1 + 0x2b4,5,1);
    }
    if (iVar2 != 2) goto LAB_00415364;
    uVar3 = 6;
  }
  FUN_00503620(param_1 + 0x2b4,uVar3,1);
LAB_00415364:
  FUN_00488890(param_1,param_2);
  return;
}
