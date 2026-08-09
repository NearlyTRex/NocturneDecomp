// Name: engine_2d.c_buildFogTable_FUN_00402e90
// Address: 00402e90
// Address Range: [[00402e90, 00403061]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_buildFogTable_FUN_00402e90(int fog_color_index)

#include "nocturne.h"

void __cdecl engine_2d_c_buildFogTable_FUN_00402e90(int fog_color_index)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uchar unaff_SI;
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
  
  g_FogColorIndex = fog_color_index;
  iVar6 = fog_color_index * 3;
  iVar8 = 0x1000;
  bVar1 = g_SourcePaletteData[iVar6];
  iVar9 = 0;
  bVar2 = g_SourcePaletteData[iVar6 + 1];
  local_38 = (float)g_SourcePaletteData[iVar6 + 2];
  do {
    local_18 = (float)g_SourcePaletteData[iVar9];
    fVar3 = ((float)bVar1 - local_18) * 0.06666667f;
    local_28 = (float)g_SourcePaletteData[iVar9 + 1];
    local_1c = (float)g_SourcePaletteData[iVar9 + 2];
    local_44 = ((float)bVar2 - local_28) * 0.06666667f;
    fVar4 = (local_38 - local_1c) * 0.06666667f;
    g_FogTable[1][0] = '\0';
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
      g_FogTable[1][iVar6] = (uchar)iVar5;
      iVar6 = iVar7;
    } while (iVar7 != iVar8);
    iVar9 = iVar9 + 3;
    local_38 = (float)((int)local_38 + 1);
    iVar8 = iVar8 + 1;
  } while ((int)local_38 < 0x100);
  local_38 = 0.0;
  do {
    g_FogTable[0][(int)local_38] = g_FogTable[1][(int)local_38];
    iVar6 = (int)local_38 + 1;
    g_FogTable[0x10][(int)local_38] = unaff_SI;
    g_FogTable[0x11][(int)local_38] = unaff_SI;
    local_38 = (float)iVar6;
  } while (iVar6 < 0x100);
  return;
}
