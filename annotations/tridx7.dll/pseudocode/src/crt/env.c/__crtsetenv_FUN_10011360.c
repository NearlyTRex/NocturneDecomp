// Name: crt_env.c___crtsetenv_FUN_10011360
// Address: 10011360
// Address Range: [[10011360, 100115a9]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c___crtsetenv_FUN_10011360(char *option,int primary)

#include "nocturne.h"

int __cdecl __crtsetenv(char *option,int primary)

{
  char cVar1;
  char **ppcVar2;
  uchar *puVar3;
  int iVar4;
  char **ppcVar5;
  LPCSTR lpName;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  
  bVar11 = 0;
  if (((option == (char *)0x0) ||
      (puVar3 = _mbschr((uchar *)option,0x3d), puVar3 == (uchar *)0x0)) ||
     ((uchar *)option == puVar3)) {
    return -1;
  }
  bVar10 = puVar3[1] == '\0';
  if (DAT_10016d84 == DAT_10016d80) {
    DAT_10016d80 = copy_environ(DAT_10016d80);
  }
  if (DAT_10016d80 == (char **)0x0) {
    if ((primary == 0) || (DAT_10016d88 == (uint *)0x0)) {
      if (bVar10) {
        return 0;
      }
      DAT_10016d80 = malloc(4);
      if (DAT_10016d80 == (char **)0x0) {
        return -1;
      }
      *DAT_10016d80 = (char *)0x0;
      if (DAT_10016d88 == (uint *)0x0) {
        DAT_10016d88 = malloc(4);
        if (DAT_10016d88 == (uint *)0x0) {
          return -1;
        }
        *DAT_10016d88 = 0;
      }
    }
    else {
      iVar4 = _build_ansi_environ();
      if (iVar4 != 0) {
        return -1;
      }
    }
  }
  ppcVar5 = DAT_10016d80;
  iVar4 = findenv(option,(int)puVar3 - (int)option);
  if ((iVar4 < 0) || (*ppcVar5 == (char *)0x0)) {
    if (bVar10) {
      return 0;
    }
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    ppcVar5 = (char **)realloc(ppcVar5,iVar4 * 4 + 8);
    if (ppcVar5 == (char **)0x0) {
      return -1;
    }
    ppcVar5[iVar4] = option;
    (ppcVar5 + iVar4)[1] = (char *)0x0;
  }
  else {
    if (!bVar10) {
      ppcVar5[iVar4] = option;
      goto LAB_1001151d;
    }
    ppcVar2 = ppcVar5 + iVar4;
    free(*ppcVar2);
    pcVar8 = *ppcVar2;
    while (pcVar8 != (char *)0x0) {
      iVar4 = iVar4 + 1;
      *ppcVar2 = ppcVar2[1];
      pcVar8 = ppcVar2[1];
      ppcVar2 = ppcVar2 + 1;
    }
    ppcVar5 = (char **)realloc(ppcVar5,iVar4 << 2);
    if (ppcVar5 == (char **)0x0) goto LAB_1001151d;
  }
  DAT_10016d80 = ppcVar5;
LAB_1001151d:
  if (primary != 0) {
    uVar6 = 0xffffffff;
    pcVar8 = option;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    lpName = malloc(~uVar6 + 1);
    if (lpName != (LPCSTR)0x0) {
      uVar6 = 0xffffffff;
      pcVar8 = option;
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = lpName;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint *)pcVar9 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + (uint)bVar11 * -8 + 4;
        pcVar9 = pcVar9 + (uint)bVar11 * -8 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
      }
      lpName[(int)puVar3 - (int)option] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(-(uint)!bVar10 & (uint)(lpName + ((int)puVar3 - (int)option) + 1)))
      ;
      free(lpName);
    }
  }
  return 0;
}
