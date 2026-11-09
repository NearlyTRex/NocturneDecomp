// Name: engine_2d.c_buildColorLookupTable_FUN_00402880
// Address: 00402880
// Address Range: [[00402880, 0040293a]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_buildColorLookupTable_FUN_00402880(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_buildColorLookupTable_FUN_00402880(void)

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
  fVar4 = (float)_DAT_005ca08c;
  iVar7 = 0;
  do {
    pbVar1 = &DAT_01c35838 + iVar5;
    pbVar2 = &DAT_01c35839 + iVar5;
    pbVar3 = &DAT_01c3583a + iVar5;
    iVar8 = iVar7 + 4;
    iVar5 = iVar5 + 3;
    *(float *)((int)&DAT_0070c638 + iVar7) =
         SQRT((float)*pbVar3 * (float)*pbVar3 +
              (float)*pbVar2 * (float)*pbVar2 + (float)*pbVar1 * (float)*pbVar1) * fVar4;
    iVar7 = iVar8;
  } while (iVar8 != 0x400);
  puVar9 = &DAT_01c2c910;
  iVar7 = 0;
  do {
    iVar5 = 0;
    do {
      iVar8 = 0;
      puVar10 = puVar9;
      do {
        puVar9 = puVar10 + 1;
        iVar6 = iVar8 + 8;
        iVar8 = engine_2d_c_FUN_00401450(iVar7,iVar5,iVar8,10,0xe5);
        *puVar10 = (char)iVar8;
        iVar8 = iVar6;
        puVar10 = puVar9;
      } while (iVar6 < 0x100);
      iVar5 = iVar5 + 8;
    } while (iVar5 < 0x100);
    iVar7 = iVar7 + 8;
  } while (iVar7 < 0x100);
  DAT_01c2c910 = 0;
  return;
}
