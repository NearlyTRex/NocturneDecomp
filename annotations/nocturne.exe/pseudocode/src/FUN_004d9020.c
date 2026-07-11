// Name: FUN_004d9020
// Address: 004d9020
// Address Range: [[004d9020, 004d9098]]
// Convention: unknown
// Signature: void FUN_004d9020(int *param_1,int param_2)

#include "nocturne.h"

void FUN_004d9020(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != *param_1) {
    *param_1 = param_2;
    FUN_00506f10(0x01E57284,param_1 + param_2 * 0x40 + 0x45);
    FUN_004d8ee0(param_1);
    if (param_1[0x214] == 0) {
      FUN_004d8db0(param_1);
    }
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x14cd6c); iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(iVar3 + 0x14cd70 + 0x01E57284);
      iVar3 = iVar3 + 4;
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0x48))(iVar1);
    }
  }
  return;
}
