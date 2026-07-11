// Name: FUN_004c6390
// Address: 004c6390
// Address Range: [[004c6390, 004c64f8]]
// Convention: unknown
// Signature: void FUN_004c6390(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c6390(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(float *)(param_1 + 0x2d4) != param_2) {
    if (*(int *)(0x01CC9450 + 4) == 0) {
      if ((param_2 <= 0.0) && (0.0 < *(float *)(param_1 + 0x2d4))) {
        FUN_0047ab70(0x01C03A10,param_1 + 0x33c);
      }
      if ((1.0 <= param_2) && (*(float *)(param_1 + 0x2d4) < 1.0)) {
        FUN_0047ab70(0x01C03A10,param_1 + 0x2d8);
      }
    }
    if (((0.0 < param_2) && (*(float *)(param_1 + 0x2d4) <= 0.0)) ||
       (((int)param_2 < 0x3f800000 && (1.0 <= *(float *)(param_1 + 0x2d4))))) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x3a0);
    }
    *(float *)(param_1 + 0x2d4) = param_2;
    if (*(int *)(param_1 + 0x408) != 0) {
      FUN_004c6390(*(int *)(param_1 + 0x408),param_2);
    }
    iVar2 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(0x01E57284 + 0x14cd6c); iVar3 = iVar3 + 1) {
      iVar1 = FUN_0040d890(*(uint *)(iVar2 + 0x14cd70 + 0x01E57284),_DAT_01cc3660);
      if ((iVar1 != 0) && (param_1 == *(int *)(iVar1 + 0x408))) {
        FUN_004c6390(iVar1,param_2);
      }
      iVar2 = iVar2 + 4;
    }
  }
  return;
}
