// Name: FUN_005792b0
// Address: 005792b0
// Address Range: [[005792b0, 0057937b]]
// Convention: unknown
// Signature: void FUN_005792b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005792b0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  FUN_0056e0f0(param_1);
  iVar5 = 0;
  *(uint *)(param_1 + 0xf8) = *(uint *)(0x01D81080 + 0x1008);
  if (0 < *(int *)(param_1 + 0x374)) {
    iVar6 = param_1;
    do {
      iVar1 = *(int *)(iVar6 + 0x378);
      fVar2 = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
      fVar4 = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
      fVar3 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
      iVar5 = iVar5 + 1;
      *(float *)(iVar6 + 0x37c) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      iVar6 = iVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x374));
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    iVar5 = FUN_005a3260(param_1 + 0x78,0x5d7394);
    if ((iVar5 != 0) && (iVar5 = FUN_005a3260(param_1 + 0x78,0x5d7399), iVar5 != 0)) {
      _DAT_01d71de0 = "..\\core\\waypoint.cpp";
      _DAT_01d71de4 = 0x81;
      FUN_004e4330("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
