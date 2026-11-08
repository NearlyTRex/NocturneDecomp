// Name: FUN_0040f200
// Address: 0040f200
// Address Range: [[0040f200, 0040f282]]
// Convention: unknown
// Signature: int FUN_0040f200(int param_1)

#include "nocturne.h"

int FUN_0040f200(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_3c;
  puVar3 = auStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(auStack_24);
  if (iVar1 == 0) {
    FUN_00408830(param_1);
    return 0;
  }
  FUN_00462540(param_1 + 0x188,*(uint *)(param_1 + 0x184),0xffffffff);
  FUN_00408830(param_1);
  return iVar1;
}
