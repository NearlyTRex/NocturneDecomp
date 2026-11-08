// Name: FUN_0057af80
// Address: 0057af80
// Address Range: [[0057af80, 0057b020]]
// Convention: unknown
// Signature: int FUN_0057af80(int param_1)

#include "nocturne.h"

int FUN_0057af80(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar6 = 0;
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar4 = auStack_3c;
  puVar5 = auStack_24;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = FUN_0041daf0(auStack_24);
  if (iVar3 != 0) {
    FUN_00462540(param_1 + 0x158,0,0xffffffff);
  }
  FUN_00408830(param_1);
  uVar1 = DAT_005f2afc;
  *(uint *)(param_1 + 0x584) = 0;
  iVar2 = FUN_0046d540(uVar1);
  if ((iVar2 == 0) && (iVar3 != 0)) {
    *(uint *)(param_1 + 0x584) = 1;
    return iVar3;
  }
  return iVar3;
}
