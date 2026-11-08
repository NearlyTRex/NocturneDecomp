// Name: FUN_004f91d0
// Address: 004f91d0
// Address Range: [[004f91d0, 004f9294]]
// Convention: unknown
// Signature: void FUN_004f91d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004f91d0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  FUN_004f9050(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_004fc070(param_1 + 0x158);
    if ((*(int *)(iVar2 + 0x24) != 7) && (*(int *)(iVar2 + 0x24) != 6)) {
      FUN_004fc0d0(param_1 + 0x158,6,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    }
  }
  iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xcdd4));
  if (iVar2 != 0) {
    FUN_00430d60(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"cow?.wav");
  *(uint *)(param_1 + 0xcdd4) = uVar3;
  FUN_00430d60(param_1,param_2);
  return;
}
