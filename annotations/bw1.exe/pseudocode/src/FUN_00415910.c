// Name: FUN_00415910
// Address: 00415910
// Address Range: [[00415910, 004159b1]]
// Convention: unknown
// Signature: void FUN_00415910(int param_1,int param_2)

#include "nocturne.h"

void FUN_00415910(int param_1,int param_2)

{
  float fVar1;
  byte *puVar2;
  
  puVar2 = (byte *)(**(code **)(*(int *)(param_1 + 0x154) + 0xcc))(param_1);
  if (puVar2 == &DAT_007c3910) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
      FUN_004328c0(param_1);
      puVar2 = &DAT_005d3d6a;
    }
    else {
      if ((*(float *)(param_2 + 4) <= 0.0) || (*(int *)(param_1 + 0x26fc) != 0)) goto LAB_00415973;
      puVar2 = &DAT_005d3d6e;
    }
    FUN_00415830(param_1 + 0x158,puVar2);
  }
LAB_00415973:
  FUN_004319e0(param_1,param_2);
  return;
}
