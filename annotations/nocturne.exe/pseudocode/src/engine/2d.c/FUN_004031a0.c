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
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  int blue;
  int end_index;
  float local_58;
  float local_40;
  float local_2c;
  float local_28;
  float local_24;
  int local_18;
  
  iVar7 = 0x1000;
  iVar8 = 0;
  local_18 = 0;
  bVar1 = g_SourcePaletteData[param_1 * 3 + 2];
  do {
    fVar2 = ((float)g_SourcePaletteData[iVar8 + 2] - (float)bVar1) * 0.0625f;
    local_24 = 0.0;
    iVar5 = local_18;
    do {
      local_24 = local_24 + fVar2;
      g_LightTable[1][iVar5] = '\0';
      iVar5 = iVar5 + 0x100;
    } while (iVar5 != iVar7);
    local_40 = (float)g_SourcePaletteData[iVar8];
    fVar2 = (255.0f - local_40) * 0.0625f;
    local_28 = (float)g_SourcePaletteData[iVar8 + 1];
    local_2c = (float)g_SourcePaletteData[iVar8 + 2];
    fVar3 = (255.0f - local_28) * 0.0625f;
    local_58 = (255.0f - local_2c) * 0.0625f;
    iVar5 = local_18;
    do {
      local_40 = local_40 + fVar2;
      local_28 = local_28 + fVar3;
      local_2c = local_2c + local_58;
      dVar9 = round((double)local_2c);
      end_index = 0x4033eb;
      dVar10 = round((double)local_28);
      iVar4 = (int)ROUND(dVar9);
      local_58 = (float)(int)ROUND(dVar10);
      blue = 0x403403;
      dVar9 = round((double)local_40);
      iVar6 = iVar5 + 0x100;
      iVar4 = engine_2d_c_findBestPaletteMatch_FUN_00401850
                        ((int)ROUND(dVar9),(int)local_58,blue,iVar4,end_index);
      g_LightTable[0x11][iVar5] = (uchar)iVar4;
      iVar5 = iVar6;
    } while (iVar6 != iVar7);
    iVar8 = iVar8 + 3;
    iVar7 = iVar7 + 1;
  } while ((int)local_24 + 1 < 0x100);
  return;
}
