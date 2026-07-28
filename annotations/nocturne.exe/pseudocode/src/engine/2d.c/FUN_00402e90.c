// Name: engine_2d.c_FUN_00402e90
// Address: 00402e90
// Address Range: [[00402e90, 00403061]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00402e90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_2d_c_FUN_00402e90(int param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte unaff_SI;
  int iVar9;
  double dVar10;
  double dVar11;
  int blue;
  int end_index;
  float local_44;
  float local_38;
  float local_28;
  float local_1c;
  float local_18;
  
  _DAT_006af634 = param_1;
  param_1 = param_1 * 3;
  iVar8 = 0x1000;
  bVar1 = (&DAT_01c00648)[param_1];
  iVar9 = 0;
  bVar2 = *(byte *)(param_1 + 0x1c00649);
  local_38 = (float)*(byte *)(param_1 + 0x1c0064a);
  do {
    local_18 = (float)(byte)(&DAT_01c00648)[iVar9];
    fVar3 = ((float)bVar1 - local_18) * 0.06666667f;
    local_28 = (float)*(byte *)(iVar9 + 0x1c00649);
    local_1c = (float)*(byte *)(iVar9 + 0x1c0064a);
    local_44 = ((float)bVar2 - local_28) * 0.06666667f;
    fVar4 = (local_38 - local_1c) * 0.06666667f;
    uRam01bd1ea0 = 0;
    iVar6 = 0x100;
    do {
      local_18 = local_18 + fVar3;
      local_28 = local_28 + local_44;
      local_1c = local_1c + fVar4;
      dVar10 = round((double)local_1c);
      end_index = 0x402fca;
      dVar11 = round((double)local_28);
      iVar5 = (int)ROUND(dVar10);
      local_44 = (float)(int)ROUND(dVar11);
      blue = 0x402fe2;
      dVar10 = round((double)local_18);
      iVar7 = iVar6 + 0x100;
      iVar5 = engine_2d_c_findBestPaletteMatch_FUN_00401850
                        ((int)ROUND(dVar10),(int)local_44,blue,iVar5,end_index);
      *(char *)(iVar6 + 0x1bd1ea0) = (char)iVar5;
      iVar6 = iVar7;
    } while (iVar7 != iVar8);
    iVar9 = iVar9 + 3;
    local_38 = (float)((int)local_38 + 1);
    iVar8 = iVar8 + 1;
  } while ((int)local_38 < 0x100);
  local_38 = 0.0;
  do {
    *(byte *)((int)local_38 + 0x1bd1da0) = *(byte *)((int)local_38 + 0x1bd1ea0);
    iVar8 = (int)local_38 + 1;
    *(byte *)((int)local_38 + 0x1bd2da0) = unaff_SI;
    *(byte *)((int)local_38 + 0x1bd2ea0) = unaff_SI;
    local_38 = (float)iVar8;
  } while (iVar8 < 0x100);
  return;
}
