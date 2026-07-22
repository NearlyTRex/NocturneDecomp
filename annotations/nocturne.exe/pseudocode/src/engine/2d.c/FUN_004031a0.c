// Name: engine_2d.c_FUN_004031a0
// Address: 004031a0
// Address Range: [[004031a0, 00403452]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_004031a0(int param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004032bc) */
/* WARNING: Removing unreachable block (ram,0x004032c7) */

void engine_2d_c_FUN_004031a0(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  byte uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float local_40;
  float local_28;
  float local_24;
  int local_18;
  
  iVar7 = 0x1000;
  iVar8 = 0;
  local_18 = 0;
  bVar1 = *(byte *)(param_1 * 3 + 0x1c0064a);
  do {
    fVar2 = ((float)*(byte *)(iVar8 + 0x1c0064a) - (float)bVar1) * 0.0625f;
    local_24 = 0.0;
    iVar5 = local_18;
    do {
      local_24 = local_24 + fVar2;
      *(byte *)(iVar5 + 0x1bf5620) = 0;
      iVar5 = iVar5 + 0x100;
    } while (iVar5 != iVar7);
    local_40 = (float)(byte)(&DAT_01c00648)[iVar8];
    fVar2 = (255.0f - local_40) * 0.0625f;
    local_28 = (float)*(byte *)(iVar8 + 0x1c00649);
    fVar3 = (255.0f - local_28) * 0.0625f;
    iVar5 = local_18;
    do {
      uVar16 = 0xf5;
      uVar15 = 10;
      local_40 = local_40 + fVar2;
      local_28 = local_28 + fVar3;
      uVar14 = 0x4033e4;
      fVar9 = (float10)round();
      uVar13 = 0x4033eb;
      fVar10 = (float10)round((float10)local_28);
      iVar12 = (int)ROUND(fVar9);
      uVar11 = 0x403403;
      fVar9 = (float10)round((float10)local_40);
      iVar6 = iVar5 + 0x100;
      uVar4 = engine_2d_c_findBestPaletteMatch_FUN_00401850
                        ((int)ROUND(fVar9),(int)ROUND(fVar10),uVar11,iVar12,uVar13,uVar14,uVar15,
                         uVar16);
      *(byte *)(iVar5 + 0x1bf6620) = uVar4;
      iVar5 = iVar6;
    } while (iVar6 != iVar7);
    iVar8 = iVar8 + 3;
    iVar7 = iVar7 + 1;
  } while ((int)local_24 + 1 < 0x100);
  return;
}
