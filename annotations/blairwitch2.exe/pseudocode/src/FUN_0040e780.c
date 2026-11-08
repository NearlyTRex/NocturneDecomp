// Name: FUN_0040e780
// Address: 0040e780
// Address Range: [[0040e780, 0040e81c]]
// Convention: unknown
// Signature: int FUN_0040e780(int param_1)

#include "nocturne.h"

int FUN_0040e780(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_44 [6];
  uint auStack_2c [6];
  int iStack_14;
  
  bVar5 = 0;
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar3 = auStack_2c;
  puVar4 = auStack_44;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_0041a840(auStack_44);
  if (iVar2 == 0) {
    FUN_00408a10(param_1);
    return 0;
  }
  iVar1 = FUN_0044fd20(param_1 + 0x2b4,0xffffffff);
  iStack_14 = *(int *)(iVar1 + 0x100) + -1;
  FUN_0044fcc0(param_1 + 0x2b4,(float)iStack_14 * *(float *)(param_1 + 0x478));
  FUN_00408a10(param_1);
  return iVar2;
}
