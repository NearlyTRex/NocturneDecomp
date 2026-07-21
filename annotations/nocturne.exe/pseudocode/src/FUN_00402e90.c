// Name: FUN_00402e90
// Address: 00402e90
// Address Range: [[00402e90, 00403061]]
// Convention: unknown
// Signature: void FUN_00402e90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402e90(int param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  byte uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte unaff_SI;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float local_44;
  float local_38;
  float local_28;
  float local_18;
  
  _DAT_006af634 = param_1;
  param_1 = param_1 * 3;
  iVar7 = 0x1000;
  bVar1 = (&DAT_01c00648)[param_1];
  iVar8 = 0;
  bVar2 = *(byte *)(param_1 + 0x1c00649);
  local_38 = (float)*(byte *)(param_1 + 0x1c0064a);
  do {
    local_18 = (float)(byte)(&DAT_01c00648)[iVar8];
    fVar3 = ((float)bVar1 - local_18) * _DAT_00577188;
    local_28 = (float)*(byte *)(iVar8 + 0x1c00649);
    local_44 = ((float)bVar2 - local_28) * _DAT_00577188;
    uRam01bd1ea0 = 0;
    iVar5 = 0x100;
    do {
      uVar15 = 10;
      local_18 = local_18 + fVar3;
      local_28 = local_28 + local_44;
      uVar14 = 0x402fc3;
      fVar9 = (float10)round();
      uVar13 = 0x402fca;
      fVar10 = (float10)round((float10)local_28);
      iVar12 = (int)ROUND(fVar9);
      local_44 = (float)(int)ROUND(fVar10);
      uVar11 = 0x402fe2;
      fVar9 = (float10)round((float10)local_18);
      iVar6 = iVar5 + 0x100;
      uVar4 = engine_2d_c_findBestPaletteMatch_FUN_00401850
                        ((int)ROUND(fVar9),local_44,uVar11,iVar12,uVar13,uVar14,uVar15);
      *(byte *)(iVar5 + 0x1bd1ea0) = uVar4;
      iVar5 = iVar6;
    } while (iVar6 != iVar7);
    iVar8 = iVar8 + 3;
    local_38 = (float)((int)local_38 + 1);
    iVar7 = iVar7 + 1;
  } while ((int)local_38 < 0x100);
  local_38 = 0.0;
  do {
    *(byte *)((int)local_38 + 0x1bd1da0) = *(byte *)((int)local_38 + 0x1bd1ea0);
    iVar7 = (int)local_38 + 1;
    *(byte *)((int)local_38 + 0x1bd2da0) = unaff_SI;
    *(byte *)((int)local_38 + 0x1bd2ea0) = unaff_SI;
    local_38 = (float)iVar7;
  } while (iVar7 < 0x100);
  return;
}
