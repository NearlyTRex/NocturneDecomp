// Name: FUN_004e1f70
// Address: 004e1f70
// Address Range: [[004e1f70, 004e20db]]
// Convention: unknown
// Signature: void FUN_004e1f70(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e1f70(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(float *)(param_1 + 0x438) != param_2) {
    if (*(int *)(0x01D182F0 + 0x1008) == 0) {
      if ((param_2 <= 0.0) && (0.0 < *(float *)(param_1 + 0x438))) {
        FUN_004894f0(0x01C38BC0,param_1 + 0x4a0);
      }
      if ((1.0 <= param_2) && (*(float *)(param_1 + 0x438) < 1.0)) {
        FUN_004894f0(0x01C38BC0,param_1 + 0x43c);
      }
    }
    if (((0.0 < param_2) && (*(float *)(param_1 + 0x438) <= 0.0)) ||
       (((int)param_2 < 0x3f800000 && (1.0 <= *(float *)(param_1 + 0x438))))) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x504);
    }
    *(float *)(param_1 + 0x438) = param_2;
    if (*(int *)(param_1 + 0x56c) != 0) {
      FUN_004e1f70(*(int *)(param_1 + 0x56c),param_2);
    }
    iVar2 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(0x01E661B8 + 0x14d164); iVar3 = iVar3 + 1) {
      iVar1 = FUN_0040c8f0(*(uint *)(iVar2 + 0x14d168 + 0x01E661B8),_DAT_01d03500);
      if ((iVar1 != 0) && (param_1 == *(int *)(iVar1 + 0x56c))) {
        FUN_004e1f70(iVar1,param_2);
      }
      iVar2 = iVar2 + 4;
    }
  }
  return;
}
