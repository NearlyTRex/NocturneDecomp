// Name: FUN_004c7490
// Address: 004c7490
// Address Range: [[004c7490, 004c7572]]
// Convention: unknown
// Signature: void FUN_004c7490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c7490(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1000 [997];
  float local_60;
  float local_54;
  float local_48;
  uint local_18;
  
  bVar4 = 0;
  _DAT_01cb828c = 4;
  _DAT_01cb8290 = 0;
  _DAT_01cb8294 = 0;
  _DAT_01cb8298 = 0;
  _DAT_01cb829c = 0;
  _DAT_01cb82a0 = 0;
  _DAT_01cb82a4 = 1;
  _DAT_01cb82a8 = 2;
  _DAT_01cb82ac = 3;
  FUN_0046b650(DAT_0060b280);
  _DAT_01cb82b0 = local_18;
  *(uint *)(&DAT_01cb82b4 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)(&DAT_01cb82b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  _DAT_01cb82b4 = 0;
  puVar2 = (uint *)(DAT_007bda74 + 0x10);
  puVar3 = (uint *)&stack0xffffffc0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = (uint *)&stack0xffffffc0;
  puVar3 = (uint *)&stack0xffffff98;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fVar5 = (float10)_DAT_005d9432;
  fVar6 = (float10)local_60 * fVar5;
  fVar7 = (float10)local_54 * fVar5;
  fVar5 = (float10)local_48 * fVar5;
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  _DAT_01cb82bc = (int)ROUND(fVar6);
  _DAT_01cb82c0 = (int)ROUND(fVar7);
  _DAT_01cb82c4 = (int)ROUND(fVar5);
  return;
}
