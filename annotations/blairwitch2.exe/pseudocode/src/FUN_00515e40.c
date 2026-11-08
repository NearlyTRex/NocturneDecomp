// Name: FUN_00515e40
// Address: 00515e40
// Address Range: [[00515e40, 00515ebe]]
// Convention: unknown
// Signature: int FUN_00515e40(int param_1)

#include "nocturne.h"

int FUN_00515e40(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar2 = auStack_3c;
  puVar3 = auStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041a840(auStack_24);
  if (iVar1 == 0) {
    FUN_00408a10(param_1);
    return 0;
  }
  FUN_0044fcc0(param_1 + 0x2b4,0,0xffffffff);
  FUN_00408a10(param_1);
  return iVar1;
}
