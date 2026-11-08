// Name: FUN_004ef300
// Address: 004ef300
// Address Range: [[004ef300, 004ef3ff]]
// Convention: unknown
// Signature: void FUN_004ef300(int param_1,int param_2)

#include "nocturne.h"

void FUN_004ef300(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1fe68) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    FUN_005247c0(param_1 + 0x158,6,1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x1fdfc);
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)(param_1 + 0x26fc) == 0) {
      FUN_005247c0(param_1 + 0x158,4,1);
      uVar3 = DAT_007c2ff4;
      *(uint *)(param_1 + 0x1fe9c) = 0x40400000;
      *(uint *)(param_1 + 0x1fe98) = uVar3;
    }
    iVar2 = FUN_005735a0(*(uint *)(param_1 + 0x1fe60));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x1fd98);
      *(uint *)(param_1 + 0x1fe60) = uVar3;
      FUN_00531da0(param_1,param_2);
      return;
    }
  }
  FUN_00531da0(param_1,param_2);
  return;
}
