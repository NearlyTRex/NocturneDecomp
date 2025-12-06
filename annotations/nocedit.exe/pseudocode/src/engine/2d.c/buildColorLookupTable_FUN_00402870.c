// Name: engine_2d.c_buildColorLookupTable_FUN_00402870
// Address: 00402870
// Address Range: [[00402870, 0040292a]]
// Convention: __cdecl
// Signature: void engine_2d.c_buildColorLookupTable_FUN_00402870(void)

#include "nocturne.h"

void __cdecl engine_2d_c_buildColorLookupTable_FUN_00402870(void)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  uchar *puVar9;
  
  iVar4 = 0;
  fVar2 = (float)0.57735027000000005;
  iVar6 = 0;
  do {
    pbVar1 = (byte *)(g_SourcePaletteData + iVar4);
    iVar3 = iVar4 + 1;
    iVar5 = iVar4 + 2;
    iVar7 = iVar6 + 4;
    iVar4 = iVar4 + 3;
    *(float *)((int)g_PaletteLuminanceCache + iVar6) =
         SQRT((float)(byte)g_SourcePaletteData[iVar5] * (float)(byte)g_SourcePaletteData[iVar5] +
              (float)(byte)g_SourcePaletteData[iVar3] * (float)(byte)g_SourcePaletteData[iVar3] +
              (float)*pbVar1 * (float)*pbVar1) * fVar2;
    iVar6 = iVar7;
  } while (iVar7 != 0x400);
  puVar8 = g_ColorCubeLookup;
  iVar6 = 0;
  do {
    iVar4 = 0;
    do {
      iVar3 = 0;
      puVar9 = puVar8;
      do {
        puVar8 = puVar9 + 1;
        iVar5 = iVar3 + 8;
        iVar3 = engine_2d_c_findBestPaletteMatch_FUN_00401460(iVar6,iVar4,iVar3,10,0xe5);
        *puVar9 = (uchar)iVar3;
        iVar3 = iVar5;
        puVar9 = puVar8;
      } while (iVar5 < 0x100);
      iVar4 = iVar4 + 8;
    } while (iVar4 < 0x100);
    iVar6 = iVar6 + 8;
  } while (iVar6 < 0x100);
  g_ColorCubeLookup[0] = '\0';
  return;
}
