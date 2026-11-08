// Name: FUN_005a4f50
// Address: 005a4f50
// Address Range: [[005a4f50, 005a4fad]]
// Convention: unknown
// Signature: void FUN_005a4f50(int param_1)

#include "nocturne.h"

void FUN_005a4f50(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *unaff_ESI;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  uint auStack_24 [6];
  int iStack_c;
  
  bVar6 = 0;
  fVar7 = (float10)*(float *)(param_1 + 0xc268);
  uVar1 = FUN_005c03a0();
  iStack_c = (int)ROUND(fVar7);
  iVar2 = FUN_00468900(uVar1);
  puVar4 = (uint *)(*(int *)(iVar2 + 0x350) + iStack_c * 0x18);
  puVar5 = auStack_24;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
