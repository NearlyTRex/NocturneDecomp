// Name: FUN_005aba00
// Address: 005aba00
// Address Range: [[005aba00, 005abacb]]
// Convention: unknown
// Signature: void FUN_005aba00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aba00(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  FUN_0059b100(param_1);
  iVar5 = 0;
  *(uint *)(param_1 + 0xf8) = *(uint *)(0x01D2C900 + 0x1008);
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
    iVar5 = FUN_005c04e0(param_1 + 0x78,0x5f941b);
    if ((iVar5 != 0) && (iVar5 = FUN_005c04e0(param_1 + 0x78,0x5f9420), iVar5 != 0)) {
      _DAT_01d1d400 = "..\\core\\waypoint.cpp";
      _DAT_01d1d404 = 0x81;
      FUN_005030e0("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
