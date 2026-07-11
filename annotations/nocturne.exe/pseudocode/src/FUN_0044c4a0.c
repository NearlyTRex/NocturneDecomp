// Name: FUN_0044c4a0
// Address: 0044c4a0
// Address Range: [[0044c4a0, 0044c530]]
// Convention: unknown
// Signature: void FUN_0044c4a0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c4a0(int *param_1)

{
  int iVar1;
  uint extraout_ECX;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  
  bVar5 = 0;
  iVar1 = FUN_0044be60(0x014B8DE8,"movscrn.raw");
  if ((iVar1 != 0) && (param_1[1] != 0)) {
    param_1[2] = (int)(*(float *)(0x01C775EC + 0x264) * (float)_DAT_0057c105 + (float)param_1[2]);
    if ((float)*param_1 <= (float)param_1[2]) {
      param_1[2] = 0;
    }
    fVar6 = (float10)(float)param_1[2];
    FUN_00563a30();
    puVar3 = (uint *)(param_1[1] + (int)ROUND(fVar6) * 0x2000);
    puVar4 = (uint *)(*(int *)(iVar1 + 0x48) + 0x1000);
    for (uVar2 = extraout_ECX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    for (uVar2 = extraout_ECX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(byte *)puVar4 = *(byte *)puVar3;
      puVar3 = (uint *)((int)puVar3 + (uint)bVar5 * -2 + 1);
      puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
    }
  }
  return;
}
