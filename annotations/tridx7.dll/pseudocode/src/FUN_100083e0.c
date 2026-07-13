// Name: FUN_100083e0
// Address: 100083e0
// Address Range: [[100083e0, 10008574]]
// Convention: unknown
// Signature: LPSTR FUN_100083e0(void)

#include "nocturne.h"

LPSTR FUN_100083e0(void)

{
  char cVar1;
  WCHAR WVar2;
  LPWCH pWVar3;
  int iVar4;
  LPSTR pCVar5;
  uint uVar6;
  LPWCH pWVar7;
  char *pcVar8;
  WCHAR *pWVar9;
  int cchWideChar;
  LPSTR pCVar11;
  byte bVar12;
  LPWCH local_4;
  WCHAR *pWVar10;
  
  bVar12 = 0;
  pWVar3 = local_4;
  if (DAT_10016ff4 == 0) {
    pWVar3 = GetEnvironmentStringsW();
    if (pWVar3 == (LPWCH)0x0) {
      local_4 = (LPWCH)GetEnvironmentStrings();
      if (local_4 == (LPWCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_10016ff4 = 2;
    }
    else {
      DAT_10016ff4 = 1;
    }
  }
  if (DAT_10016ff4 != 1) {
    if (DAT_10016ff4 != 2) {
      return (LPSTR)0x0;
    }
    if ((local_4 == (LPWCH)0x0) && (local_4 = (LPWCH)GetEnvironmentStrings(), local_4 == (LPWCH)0x0)
       ) {
      return (LPSTR)0x0;
    }
    cVar1 = (char)*local_4;
    pWVar3 = local_4;
    while (cVar1 != '\0') {
      do {
        pWVar7 = pWVar3;
        pWVar3 = (LPWCH)((int)pWVar7 + 1);
      } while (*(char *)pWVar3 != '\0');
      pWVar3 = pWVar7 + 1;
      cVar1 = (char)*pWVar3;
    }
    pcVar8 = (char *)((int)pWVar3 + (1 - (int)local_4));
    pCVar5 = (LPSTR)FUN_10008830(pcVar8);
    if (pCVar5 == (LPSTR)0x0) {
      FreeEnvironmentStringsA((LPCH)local_4);
      return (LPSTR)0x0;
    }
    pWVar3 = local_4;
    pCVar11 = pCVar5;
    for (uVar6 = (uint)pcVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint *)pCVar11 = *(uint *)pWVar3;
      pWVar3 = pWVar3 + (uint)bVar12 * -4 + 2;
      pCVar11 = pCVar11 + (uint)bVar12 * -8 + 4;
    }
    for (uVar6 = (uint)pcVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pCVar11 = (CHAR)*pWVar3;
      pWVar3 = (LPWCH)((int)pWVar3 + (uint)bVar12 * -2 + 1);
      pCVar11 = pCVar11 + (uint)bVar12 * -2 + 1;
    }
    FreeEnvironmentStringsA((LPCH)local_4);
    return pCVar5;
  }
  if ((pWVar3 == (LPWCH)0x0) && (pWVar3 = GetEnvironmentStringsW(), pWVar3 == (LPWCH)0x0)) {
    return (LPSTR)0x0;
  }
  WVar2 = *pWVar3;
  pWVar9 = pWVar3;
  while (WVar2 != L'\0') {
    do {
      pWVar10 = pWVar9;
      pWVar9 = pWVar10 + 1;
    } while (*pWVar9 != L'\0');
    pWVar9 = pWVar10 + 2;
    WVar2 = *pWVar9;
  }
  cchWideChar = ((int)pWVar9 - (int)pWVar3 >> 1) + 1;
  iVar4 = WideCharToMultiByte(0,0,pWVar3,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((iVar4 != 0) && (pCVar5 = (LPSTR)FUN_10008830(iVar4), pCVar5 != (LPSTR)0x0)) {
    iVar4 = WideCharToMultiByte(0,0,pWVar3,cchWideChar,pCVar5,iVar4,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar4 == 0) {
      FUN_10005b30(pCVar5);
      pCVar5 = (LPSTR)0x0;
    }
    FreeEnvironmentStringsW(pWVar3);
    return pCVar5;
  }
  FreeEnvironmentStringsW(pWVar3);
  return (LPSTR)0x0;
}
