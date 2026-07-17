// Name: engine_2d.c_buildColorLookupTable_FUN_00402870
// Address: 00402870
// MANUAL RECONSTRUCTION
// Address Range: [[00402870, 0040292a]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_buildColorLookupTable_FUN_00402870(void)

#include "nocturne.h"

void __cdecl engine_2d_c_buildColorLookupTable_FUN_00402870(void)

{
  int iVar1;
  int iVar3;
  int iVar4;
  int iVar2;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar8;
  byte *pbVar1;
  float fVar2;
  
  iVar4 = 0;
  fVar2 = (float)0.57735027000000005;
  iVar8 = 0;
  do {
    pbVar1 = g_SourcePaletteData + iVar4;
    iVar2 = iVar4 + 1;
    iVar1 = iVar4 + 2;
    iVar7 = iVar8 + 4;
    iVar4 = iVar4 + 3;
    g_PaletteLuminanceCache[iVar8 / 4] =
         SQRT((float)g_SourcePaletteData[iVar1] * (float)g_SourcePaletteData[iVar1] +
              (float)g_SourcePaletteData[iVar2] * (float)g_SourcePaletteData[iVar2] +
              (float)*pbVar1 * (float)*pbVar1) * fVar2;
    iVar8 = iVar7;
  } while (iVar7 != 0x400);
  puVar8 = g_ColorCubeLookup;
  iVar6 = 0;
  do {
    iVar8 = 0;
    do {
      iVar2 = 0;
      puVar9 = puVar8;
      do {
        puVar8 = puVar9 + 1;
        iVar5 = iVar2 + 8;
        iVar3 = engine_2d_c_findBestPaletteMatch_FUN_00401460(iVar6,iVar8,iVar2,10,0xe5);
        *puVar9 = (uchar)iVar3;
        iVar2 = iVar5;
        puVar9 = puVar8;
      } while (iVar5 < 0x100);
      iVar8 = iVar8 + 8;
    } while (iVar8 < 0x100);
    iVar6 = iVar6 + 8;
  } while (iVar6 < 0x100);
  g_ColorCubeLookup[0] = '\0';
  return;
}
