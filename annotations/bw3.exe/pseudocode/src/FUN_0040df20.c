// Name: FUN_0040df20
// Address: 0040df20
// Address Range: [[0040df20, 0040dfbd]]
// Convention: unknown
// Signature: int FUN_0040df20(int param_1)

#include "nocturne.h"

int FUN_0040df20(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  uint auStack_40 [6];
  uint auStack_28 [6];
  int iStack_10;
  
  bVar4 = 0;
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_28;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(auStack_40);
  if (iVar1 == 0) {
    FUN_00408830(param_1);
    return 0;
  }
  fVar5 = (float10)*(float *)(param_1 + 0x31c);
  FUN_005a3120();
  iStack_10 = (int)ROUND(fVar5);
  FUN_00462540(param_1 + 0x158,(float)iStack_10,0xffffffff);
  FUN_00408830(param_1);
  return iVar1;
}
