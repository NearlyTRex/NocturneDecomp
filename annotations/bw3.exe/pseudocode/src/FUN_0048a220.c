// Name: FUN_0048a220
// Address: 0048a220
// Address Range: [[0048a220, 0048a2a7]]
// Convention: unknown
// Signature: void FUN_0048a220(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0048a220(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if ((0 < iVar1) && (*(int *)(param_1 + 0xcecc) == 0)) {
    FUN_00489c90(param_1);
  }
  if (*(float *)(param_1 + 0x2538) <= 0.0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
    if (iVar1 < 1) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0xdc))(param_1,0,0,0xbf800000);
      FUN_0042cd70(param_1,param_2);
      return;
    }
  }
  FUN_0042cd70(param_1,param_2);
  return;
}
