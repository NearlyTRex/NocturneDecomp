// Name: FUN_004e04b0
// Address: 004e04b0
// Address Range: [[004e04b0, 004e0620]]
// Convention: unknown
// Signature: void FUN_004e04b0(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e04b0(int param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(float *)(param_1 + 0x2dc) != param_2) {
    if (*(int *)(0x01D81080 + 0x1008) == 0) {
      if ((param_2 <= 0.0) && (0.0 < *(float *)(param_1 + 0x2dc))) {
        FUN_0048c150(0x01C6E360,param_1 + 0x344);
      }
      if ((1.0 <= param_2) && (*(float *)(param_1 + 0x2dc) < 1.0)) {
        FUN_0048c150(0x01C6E360,param_1 + 0x2e0);
      }
    }
    if ((param_3 == 0) &&
       (((0.0 < param_2 && (*(float *)(param_1 + 0x2dc) <= 0.0)) ||
        (((int)param_2 < 0x3f800000 && (1.0 <= *(float *)(param_1 + 0x2dc))))))) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x3a8);
    }
    *(float *)(param_1 + 0x2dc) = param_2;
    if (*(int *)(param_1 + 0x410) != 0) {
      FUN_004e04b0(*(int *)(param_1 + 0x410),param_2,param_3);
    }
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < *(int *)(0x01ED78C8 + 0x14d164); iVar2 = iVar2 + 1) {
      iVar1 = FUN_0040c840(*(uint *)(iVar3 + 0x14d168 + 0x01ED78C8),_DAT_01d70c34);
      if ((iVar1 != 0) && (param_1 == *(int *)(iVar1 + 0x410))) {
        FUN_004e04b0(iVar1,param_2,param_3);
      }
      iVar3 = iVar3 + 4;
    }
  }
  return;
}
