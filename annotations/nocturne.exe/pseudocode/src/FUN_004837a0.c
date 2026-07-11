// Name: FUN_004837a0
// Address: 004837a0
// Address Range: [[004837a0, 004838bf]]
// Convention: unknown
// Signature: void FUN_004837a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004837a0(void)

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
  _DAT_01c08d24 = 4;
  _DAT_01c08d28 = 0;
  _DAT_01c08d2c = 0;
  _DAT_01c08d30 = 0;
  _DAT_01c08d34 = 0;
  _DAT_01c08d38 = 0;
  _DAT_01c08d3c = 1;
  DAT_005c502c = 0x80000;
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  _DAT_005c5090 = 0x80000;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
  _DAT_01c08d40 = 2;
  _DAT_01c08d44 = 3;
  FUN_00460d90(DAT_005ae704);
  _DAT_01c08d08 = local_18;
  *(uint *)(&DAT_01c08d0c + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)(&DAT_01c08d10 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  _DAT_01c08d0c = 0;
  puVar2 = (uint *)(_DAT_007f7370 + 0x110);
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
  fVar5 = (float10)_DAT_005810d4;
  fVar6 = (float10)local_60 * fVar5;
  fVar7 = (float10)local_54 * fVar5;
  fVar5 = (float10)local_48 * fVar5;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  _DAT_01c08d14 = (int)ROUND(fVar6);
  _DAT_01c08d18 = (int)ROUND(fVar7);
  _DAT_01c08d1c = (int)ROUND(fVar5);
  return;
}
