// Name: FUN_100081e0
// Address: 100081e0
// Address Range: [[100081e0, 100083dc]]
// Convention: unknown
// Signature: LPWSTR FUN_100081e0(void)

#include "nocturne.h"

LPWSTR FUN_100081e0(void)

{
  char cVar1;
  WCHAR WVar2;
  LPWSTR in_EAX;
  LPWSTR pWVar3;
  LPWSTR pWVar4;
  int iVar5;
  uint uVar6;
  WCHAR *pWVar7;
  uint uVar9;
  LPWCH pWVar10;
  LPWSTR pWVar11;
  LPWSTR pWVar12;
  byte bVar13;
  int iStack_4;
  WCHAR *pWVar8;
  
  bVar13 = 0;
  iStack_4 = 0;
  pWVar3 = (LPWSTR)0x0;
  if (DAT_10016ff0 == 0) {
    in_EAX = GetEnvironmentStringsW();
    if (in_EAX == (LPWCH)0x0) {
      in_EAX = (LPWSTR)GetEnvironmentStrings();
      if (in_EAX == (LPWSTR)0x0) {
        return (LPWSTR)0x0;
      }
      DAT_10016ff0 = 2;
      pWVar3 = in_EAX;
    }
    else {
      DAT_10016ff0 = 1;
      pWVar3 = in_EAX;
    }
  }
  if (DAT_10016ff0 == 1) {
    if ((pWVar3 == (LPWSTR)0x0) && (pWVar3 = GetEnvironmentStringsW(), pWVar3 == (LPWCH)0x0)) {
      return (LPWSTR)0x0;
    }
    WVar2 = *pWVar3;
    pWVar7 = pWVar3;
    while (WVar2 != L'\0') {
      do {
        pWVar8 = pWVar7;
        pWVar7 = pWVar8 + 1;
      } while (*pWVar7 != L'\0');
      pWVar7 = pWVar8 + 2;
      WVar2 = *pWVar7;
    }
    uVar9 = (int)pWVar7 + (2 - (int)pWVar3);
    pWVar4 = (LPWSTR)FUN_10008830(uVar9);
    if (pWVar4 != (LPWSTR)0x0) {
      pWVar10 = pWVar3;
      pWVar11 = pWVar4;
      for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pWVar11 = *(uint *)pWVar10;
        pWVar10 = pWVar10 + (uint)bVar13 * -4 + 2;
        pWVar11 = pWVar11 + (uint)bVar13 * -4 + 2;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)pWVar11 = (char)*pWVar10;
        pWVar10 = (LPWCH)((int)pWVar10 + (uint)bVar13 * -2 + 1);
        pWVar11 = (LPWSTR)((int)pWVar11 + (uint)bVar13 * -2 + 1);
      }
      FreeEnvironmentStringsW(pWVar3);
      return pWVar4;
    }
    FreeEnvironmentStringsW(pWVar3);
    return (LPWSTR)0x0;
  }
  if (DAT_10016ff0 == 2) {
    if ((pWVar3 == (LPWSTR)0x0) && (pWVar3 = (LPWSTR)GetEnvironmentStrings(), pWVar3 == (LPWSTR)0x0)
       ) {
      return (LPWSTR)0x0;
    }
    cVar1 = (char)*pWVar3;
    pWVar4 = pWVar3;
    while (cVar1 != '\0') {
      iVar5 = MultiByteToWideChar(DAT_10017770,1,(LPCSTR)pWVar4,-1,(LPWSTR)0x0,0);
      if (iVar5 == 0) {
        return (LPWSTR)0x0;
      }
      uVar9 = 0xffffffff;
      iStack_4 = iStack_4 + iVar5;
      pWVar11 = pWVar4;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        WVar2 = *pWVar11;
        pWVar11 = (LPWSTR)((int)pWVar11 + (uint)bVar13 * -2 + 1);
      } while ((char)WVar2 != '\0');
      pWVar4 = (LPWSTR)((int)pWVar4 + ~uVar9);
      cVar1 = (char)*pWVar4;
    }
    in_EAX = (LPWSTR)FUN_10008830((iStack_4 + 1) * 2);
    if (in_EAX == (LPWSTR)0x0) {
      FreeEnvironmentStringsA((LPCH)pWVar3);
      return (LPWSTR)0x0;
    }
    cVar1 = (char)*pWVar3;
    pWVar4 = in_EAX;
    pWVar11 = pWVar3;
    while (cVar1 != '\0') {
      iVar5 = MultiByteToWideChar(DAT_10017770,1,(LPCSTR)pWVar11,-1,pWVar4,
                                  (iStack_4 + 1) - ((int)pWVar4 - (int)in_EAX >> 1));
      if (iVar5 == 0) {
        FUN_10005b30(in_EAX);
        FreeEnvironmentStringsA((LPCH)pWVar3);
        return (LPWSTR)0x0;
      }
      uVar9 = 0xffffffff;
      pWVar12 = pWVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        WVar2 = *pWVar12;
        pWVar12 = (LPWSTR)((int)pWVar12 + (uint)bVar13 * -2 + 1);
      } while ((char)WVar2 != '\0');
      pWVar11 = (LPWSTR)((int)pWVar11 + ~uVar9);
      iVar5 = FUN_1000a930(pWVar4);
      pWVar4 = pWVar4 + iVar5 + 1;
      cVar1 = (char)*pWVar11;
    }
    *pWVar4 = L'\0';
    FreeEnvironmentStringsA((LPCH)pWVar3);
  }
  return in_EAX;
}
