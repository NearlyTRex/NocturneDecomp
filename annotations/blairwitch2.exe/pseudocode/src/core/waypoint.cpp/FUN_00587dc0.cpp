// Name: FUN_00587dc0
// Address: 00587dc0
// Address Range: [[00587dc0, 00587e85]]
// Convention: unknown
// Signature: void FUN_00587dc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00587dc0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  FUN_005778a0(param_1);
  iVar6 = 0;
  *(uint *)(param_1 + 0xf8) = 1;
  if (0 < *(int *)(param_1 + 0x4d0)) {
    iVar5 = param_1;
    do {
      iVar1 = *(int *)(iVar5 + 0x4d4);
      fVar2 = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
      fVar4 = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
      fVar3 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
      iVar6 = iVar6 + 1;
      *(float *)(iVar5 + 0x4d8) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      iVar5 = iVar5 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x4d0));
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    iVar6 = FUN_005b8130(param_1 + 0x78,0x5ee0bf);
    if ((iVar6 != 0) && (iVar6 = FUN_005b8130(param_1 + 0x78,0x5ee0c4), iVar6 != 0)) {
      _DAT_01d046a0 = "..\\core\\waypoint.cpp";
      _DAT_01d046a4 = 0x8b;
      FUN_004e4500("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
