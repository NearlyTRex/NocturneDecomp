// Name: FUN_00443180
// Address: 00443180
// Address Range: [[00443180, 0044324e]]
// Convention: unknown
// Signature: void FUN_00443180(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443180(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  iVar7 = 0;
  iVar5 = 0;
  do {
    iVar2 = 0;
    iVar4 = iVar5;
    do {
      iVar3 = iVar2 >> 0x1f;
      iVar1 = iVar2 + iVar3 * -0x100;
      iVar2 = iVar2 + 0x280;
      (&DAT_0145b290)[iVar4] =
           (&DAT_01410290)
           [((int)(iVar1 - (uint)(iVar3 << 7 < 0)) >> 8) +
            ((int)((iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0)) >> 8) *
            0x280];
      iVar4 = iVar4 + 1;
    } while (iVar2 != 0x28000);
    iVar5 = iVar5 + 0x100;
    iVar7 = iVar7 + 0x1e0;
  } while (iVar5 != 0x10000);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005ad49c);
  puVar6 = (uint *)&DAT_0145b290;
  puVar8 = _DAT_01c02580;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(byte *)puVar8 = *(byte *)puVar6;
    puVar6 = (uint *)((int)puVar6 + (uint)bVar9 * -2 + 1);
    puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
  }
  puVar6 = (uint *)&DAT_00b0daf8;
  puVar8 = _DAT_01c00020;
  for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(byte *)puVar8 = *(byte *)puVar6;
    puVar6 = (uint *)((int)puVar6 + (uint)bVar9 * -2 + 1);
    puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
  }
  engine_drender_cpp_CDemonRenderer_updateTexture_FUN_00461f60
            (DAT_005ae704,&DAT_005ad49c,&DAT_00b0daf8);
  return;
}
