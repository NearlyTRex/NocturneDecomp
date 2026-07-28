// Name: engine_2d.c_buildColorLookupTable_FUN_00403570
// Address: 00403570
// Address Range: [[00403570, 0040362a]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_buildColorLookupTable_FUN_00403570(void)

#include "nocturne.h"

void __cdecl engine_2d_c_buildColorLookupTable_FUN_00403570(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *puVar9;
  byte *puVar10;
  
  iVar5 = 0;
  fVar4 = (float)0.57735027000000005;
  iVar7 = 0;
  do {
    pbVar1 = &DAT_01c00648 + iVar5;
    pbVar2 = (byte *)(iVar5 + 0x1c00649);
    pbVar3 = (byte *)(iVar5 + 0x1c0064a);
    iVar8 = iVar7 + 4;
    iVar5 = iVar5 + 3;
    *(float *)((int)&DAT_006af638 + iVar7) =
         SQRT((float)*pbVar3 * (float)*pbVar3 +
              (float)*pbVar2 * (float)*pbVar2 + (float)*pbVar1 * (float)*pbVar1) * fVar4;
    iVar7 = iVar8;
  } while (iVar8 != 0x400);
  puVar9 = &DAT_01bf7720;
  iVar7 = 0;
  do {
    iVar5 = 0;
    do {
      iVar8 = 0;
      puVar10 = puVar9;
      do {
        puVar9 = puVar10 + 1;
        iVar6 = iVar8 + 8;
        iVar8 = engine_2d_c_findBestPaletteMatch_FUN_00401850(iVar7,iVar5,iVar8,10,0xe5);
        *puVar10 = (char)iVar8;
        iVar8 = iVar6;
        puVar10 = puVar9;
      } while (iVar6 < 0x100);
      iVar5 = iVar5 + 8;
    } while (iVar5 < 0x100);
    iVar7 = iVar7 + 8;
  } while (iVar7 < 0x100);
  DAT_01bf7720 = 0;
  return;
}
