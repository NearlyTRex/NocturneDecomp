// Name: FUN_00402880
// Address: 00402880
// Address Range: [[00402880, 0040293a]]
// Convention: unknown
// Signature: void FUN_00402880(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402880(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  float fVar4;
  byte uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *puVar10;
  byte *puVar11;
  
  iVar6 = 0;
  fVar4 = (float)_DAT_005ca08c;
  iVar8 = 0;
  do {
    pbVar1 = &DAT_01c35838 + iVar6;
    pbVar2 = &DAT_01c35839 + iVar6;
    pbVar3 = &DAT_01c3583a + iVar6;
    iVar9 = iVar8 + 4;
    iVar6 = iVar6 + 3;
    *(float *)((int)&DAT_0070c638 + iVar8) =
         SQRT((float)*pbVar3 * (float)*pbVar3 +
              (float)*pbVar2 * (float)*pbVar2 + (float)*pbVar1 * (float)*pbVar1) * fVar4;
    iVar8 = iVar9;
  } while (iVar9 != 0x400);
  puVar10 = &DAT_01c2c910;
  iVar8 = 0;
  do {
    iVar6 = 0;
    do {
      iVar9 = 0;
      puVar11 = puVar10;
      do {
        puVar10 = puVar11 + 1;
        iVar7 = iVar9 + 8;
        uVar5 = FUN_00401450(iVar8,iVar6,iVar9,10,0xe5);
        *puVar11 = uVar5;
        iVar9 = iVar7;
        puVar11 = puVar10;
      } while (iVar7 < 0x100);
      iVar6 = iVar6 + 8;
    } while (iVar6 < 0x100);
    iVar8 = iVar8 + 8;
  } while (iVar8 < 0x100);
  DAT_01c2c910 = 0;
  return;
}
