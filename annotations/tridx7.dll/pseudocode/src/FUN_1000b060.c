// Name: FUN_1000b060
// Address: 1000b060
// Address Range: [[1000b060, 1000b14f]]
// Convention: unknown
// Signature: char * FUN_1000b060(void)

#include "nocturne.h"

char * FUN_1000b060(void)

{
  byte **ppuVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte **ppuVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  byte bVar15;
  
  bVar15 = 0;
  bVar4 = true;
  if (DAT_10017794 == (char *)0x0) {
    DAT_10017794 = (char *)FUN_10008830(0x351);
  }
  *DAT_10017794 = '\0';
  ppuVar9 = &PTR_DAT_100177a0;
  do {
    FUN_1000b330(DAT_10017794,3,ppuVar9[-1],&DAT_1001275c,*ppuVar9);
    if ((byte **)((int)&PTR_s_LC_TIME_100177cc + 3) < ppuVar9) {
      if (bVar4) {
        FUN_10005b30(DAT_10017794);
        DAT_10017794 = (char *)0x0;
        return PTR_DAT_100177ac;
      }
      return DAT_10017794;
    }
    uVar6 = 0xffffffff;
    pcVar10 = ";";
    do {
      pcVar12 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar10 + (uint)bVar15 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = DAT_10017794;
    do {
      pcVar13 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar10 + (uint)bVar15 * -2 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar2 != '\0');
    pcVar10 = pcVar12 + -uVar6;
    pcVar12 = pcVar13 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(uint *)pcVar12 = *(uint *)pcVar10;
      pcVar10 = pcVar10 + (uint)bVar15 * -8 + 4;
      pcVar12 = pcVar12 + (uint)bVar15 * -8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar15 * -2 + 1;
      pcVar12 = pcVar12 + (uint)bVar15 * -2 + 1;
    }
    ppuVar1 = ppuVar9 + 3;
    pbVar5 = *ppuVar9;
    pbVar11 = *ppuVar1;
    do {
      bVar3 = *pbVar5;
      bVar14 = bVar3 < *pbVar11;
      if (bVar3 != *pbVar11) {
LAB_1000b113:
        iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_1000b118;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar5[1];
      bVar14 = bVar3 < pbVar11[1];
      if (bVar3 != pbVar11[1]) goto LAB_1000b113;
      pbVar5 = pbVar5 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_1000b118:
    ppuVar9 = ppuVar1;
    if (iVar7 != 0) {
      bVar4 = false;
    }
  } while( true );
}
