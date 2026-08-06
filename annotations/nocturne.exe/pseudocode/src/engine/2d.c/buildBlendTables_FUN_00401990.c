// Name: engine_2d.c_buildBlendTables_FUN_00401990
// Address: 00401990
// Address Range: [[00401990, 00401bc5]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_buildBlendTables_FUN_00401990(char *filename)

#include "nocturne.h"

void __cdecl engine_2d_c_buildBlendTables_FUN_00401990(char *filename)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uchar uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int local_38;
  int local_34;
  int local_14;
  int local_10;
  
  local_34 = 0;
  local_38 = 0;
  do {
    bVar1 = g_SourcePaletteData[local_38];
    uVar5 = (uint)bVar1;
    bVar2 = g_SourcePaletteData[local_38 + 1];
    uVar6 = (uint)bVar2;
    bVar3 = g_SourcePaletteData[local_38 + 2];
    uVar7 = (uint)bVar3;
    local_14 = local_34;
    local_10 = local_34;
    iVar15 = 0;
    do {
      uVar9 = (uint)g_SourcePaletteData[iVar15];
      uVar12 = (uint)g_SourcePaletteData[iVar15 + 2];
      uVar13 = (uint)g_SourcePaletteData[iVar15 + 1];
      uVar8 = (uVar5 + uVar9) / 2;
      uVar11 = (uVar7 + uVar12) / 2;
      uVar14 = (uVar6 + uVar13) / 2;
      if (bVar3 == 0 && (bVar1 == 0 && bVar2 == 0)) {
        uVar8 = uVar9;
        uVar11 = uVar12;
        uVar14 = uVar13;
      }
      if ((uVar9 == 0 && uVar13 == 0) && uVar12 == 0) {
        uVar8 = uVar5;
        uVar11 = uVar7;
        uVar14 = uVar6;
      }
      uVar9 = uVar5 + uVar9;
      g_BlendTableAvg[0][local_14] =
           g_ColorCubeLookup
           [((int)uVar11 >> 3) + ((int)uVar8 >> 3) * 0x400 + ((int)uVar14 >> 3) * 0x20];
      if (0xff < uVar9) {
        uVar9 = 0xff;
      }
      uVar13 = uVar6 + uVar13;
      if (0xff < uVar13) {
        uVar13 = 0xff;
      }
      uVar12 = uVar7 + uVar12;
      if (0xff < uVar12) {
        uVar12 = 0xff;
      }
      iVar15 = iVar15 + 3;
      g_BlendTableAdd[0][local_10] =
           g_ColorCubeLookup
           [((int)uVar12 >> 3) + ((int)uVar9 >> 3) * 0x400 + ((int)uVar13 >> 3) * 0x20];
      local_10 = local_10 + 1;
      local_14 = local_14 + 1;
    } while (iVar15 != 0x300);
    local_34 = local_34 + 0x100;
    local_38 = local_38 + 3;
  } while (local_34 != 0x10000);
  iVar15 = 0;
  iVar10 = 0;
  do {
    uVar4 = (uchar)iVar15;
    g_BlendTableAdd[0][iVar10] = uVar4;
    g_BlendTableAvg[0][iVar10] = uVar4;
    g_BlendTableAdd[0][iVar15] = uVar4;
    iVar15 = iVar15 + 1;
    iVar10 = iVar10 + 0x100;
  } while (iVar15 < 0x100);
  return;
}
