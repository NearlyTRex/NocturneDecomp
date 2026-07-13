// Name: FUN_10011360
// Address: 10011360
// Address Range: [[10011360, 100115a9]]
// Convention: unknown
// Signature: undefined4 FUN_10011360(char *param_1,int param_2)

#include "nocturne.h"

uint FUN_10011360(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  LPCSTR lpName;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  byte bVar12;
  
  bVar12 = 0;
  if (((param_1 == (char *)0x0) ||
      (pcVar4 = (char *)FUN_100116f0(param_1,0x3d), pcVar4 == (char *)0x0)) || (param_1 == pcVar4))
  {
    return 0xffffffff;
  }
  bVar11 = pcVar4[1] == '\0';
  if (DAT_10016d84 == DAT_10016d80) {
    DAT_10016d80 = (int *)FUN_10011610(DAT_10016d80);
  }
  if (DAT_10016d80 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_10016d88 == (uint *)0x0)) {
      if (bVar11) {
        return 0;
      }
      DAT_10016d80 = (int *)FUN_10008830(4);
      if (DAT_10016d80 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_10016d80 = 0;
      if (DAT_10016d88 == (uint *)0x0) {
        DAT_10016d88 = (uint *)FUN_10008830(4);
        if (DAT_10016d88 == (uint *)0x0) {
          return 0xffffffff;
        }
        *DAT_10016d88 = 0;
      }
    }
    else {
      iVar5 = FUN_10010d30();
      if (iVar5 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar6 = DAT_10016d80;
  iVar5 = FUN_100115b0(param_1,(int)pcVar4 - (int)param_1);
  if ((iVar5 < 0) || (*piVar6 == 0)) {
    if (bVar11) {
      return 0;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    piVar6 = (int *)FUN_10011680(piVar6,iVar5 * 4 + 8);
    if (piVar6 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar6[iVar5] = (int)param_1;
    (piVar6 + iVar5)[1] = 0;
  }
  else {
    if (!bVar11) {
      piVar6[iVar5] = (int)param_1;
      goto LAB_1001151d;
    }
    piVar3 = piVar6 + iVar5;
    FUN_10005b30(*piVar3);
    iVar2 = *piVar3;
    while (iVar2 != 0) {
      iVar5 = iVar5 + 1;
      *piVar3 = piVar3[1];
      iVar2 = piVar3[1];
      piVar3 = piVar3 + 1;
    }
    piVar6 = (int *)FUN_10011680(piVar6,iVar5 << 2);
    if (piVar6 == (int *)0x0) goto LAB_1001151d;
  }
  DAT_10016d80 = piVar6;
LAB_1001151d:
  if (param_2 != 0) {
    uVar7 = 0xffffffff;
    pcVar9 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    lpName = (LPCSTR)FUN_10008830(~uVar7 + 1);
    if (lpName != (LPCSTR)0x0) {
      uVar7 = 0xffffffff;
      pcVar9 = param_1;
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = lpName;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(uint *)pcVar10 = *(uint *)pcVar9;
        pcVar9 = pcVar9 + (uint)bVar12 * -8 + 4;
        pcVar10 = pcVar10 + (uint)bVar12 * -8 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
        pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
      }
      lpName[(int)pcVar4 - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(-(uint)!bVar11 & (uint)(lpName + ((int)pcVar4 - (int)param_1) + 1))
                );
      FUN_10005b30(lpName);
    }
  }
  return 0;
}
