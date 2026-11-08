// Name: FUN_004d30d0
// Address: 004d30d0
// Address Range: [[004d30d0, 004d31cf]]
// Convention: unknown
// Signature: void FUN_004d30d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004d30d0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x246f8) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    FUN_00503620(param_1 + 0x2b4,6,1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0xb0))(param_1,0x32,0x41c80000);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x2468c);
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)(param_1 + 0x276c) == 0) {
      FUN_00503620(param_1 + 0x2b4,4,1);
      uVar3 = DAT_007bbff4;
      *(uint *)(param_1 + 0x2472c) = 0x40400000;
      *(uint *)(param_1 + 0x24728) = uVar3;
    }
    iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x246f0));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x24628);
      *(uint *)(param_1 + 0x246f0) = uVar3;
      FUN_00510b90(param_1,param_2);
      return;
    }
  }
  FUN_00510b90(param_1,param_2);
  return;
}
