// Name: crt_env.c___crtGetEnvironmentStringsW_FUN_100081e0
// Address: 100081e0
// Address Range: [[100081e0, 100083dc]]
// Convention: __cdecl
// Signature: LPWSTR __cdecl crt_env_c___crtGetEnvironmentStringsW_FUN_100081e0(void)

#include "nocturne.h"

LPWSTR __cdecl __crtGetEnvironmentStringsW(void)

{
  char cVar1;
  WCHAR WVar2;
  wchar_t *lpWideCharStr;
  LPWSTR in_EAX;
  LPWCH pWVar3;
  LPWSTR pWVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  WCHAR *pWVar8;
  uint uVar10;
  LPWCH pWVar11;
  LPWSTR pWVar12;
  LPWCH pWVar13;
  byte bVar14;
  int iStack_4;
  WCHAR *pWVar9;
  
  bVar14 = 0;
  iStack_4 = 0;
  pWVar3 = (LPWCH)0x0;
  if (DAT_10016ff0 == 0) {
    in_EAX = GetEnvironmentStringsW();
    if (in_EAX == (LPWCH)0x0) {
      in_EAX = (LPWSTR)GetEnvironmentStrings();
      if (in_EAX == (LPWCH)0x0) {
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
    if ((pWVar3 == (LPWCH)0x0) && (pWVar3 = GetEnvironmentStringsW(), pWVar3 == (LPWCH)0x0)) {
      return (LPWSTR)0x0;
    }
    WVar2 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar2 != L'\0') {
      do {
        pWVar9 = pWVar8;
        pWVar8 = pWVar9 + 1;
      } while (*pWVar8 != L'\0');
      pWVar8 = pWVar9 + 2;
      WVar2 = *pWVar8;
    }
    uVar10 = (int)pWVar8 + (2 - (int)pWVar3);
    pWVar4 = malloc(uVar10);
    if (pWVar4 != (LPWSTR)0x0) {
      pWVar11 = pWVar3;
      pWVar12 = pWVar4;
      for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint *)pWVar12 = *(uint *)pWVar11;
        pWVar11 = pWVar11 + (uint)bVar14 * -4 + 2;
        pWVar12 = pWVar12 + (uint)bVar14 * -4 + 2;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(char *)pWVar12 = (char)*pWVar11;
        pWVar11 = (LPWCH)((int)pWVar11 + (uint)bVar14 * -2 + 1);
        pWVar12 = (LPWSTR)((int)pWVar12 + (uint)bVar14 * -2 + 1);
      }
      FreeEnvironmentStringsW(pWVar3);
      return pWVar4;
    }
    FreeEnvironmentStringsW(pWVar3);
    return (LPWSTR)0x0;
  }
  if (DAT_10016ff0 == 2) {
    if ((pWVar3 == (LPWCH)0x0) && (pWVar3 = (LPWCH)GetEnvironmentStrings(), pWVar3 == (LPWCH)0x0)) {
      return (LPWSTR)0x0;
    }
    cVar1 = (char)*pWVar3;
    pWVar11 = pWVar3;
    while (cVar1 != '\0') {
      iVar5 = MultiByteToWideChar(DAT_10017770,1,(LPCSTR)pWVar11,-1,(LPWSTR)0x0,0);
      if (iVar5 == 0) {
        return (LPWSTR)0x0;
      }
      uVar10 = 0xffffffff;
      iStack_4 = iStack_4 + iVar5;
      pWVar13 = pWVar11;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        WVar2 = *pWVar13;
        pWVar13 = (LPWCH)((int)pWVar13 + (uint)bVar14 * -2 + 1);
      } while ((char)WVar2 != '\0');
      pWVar11 = (LPWCH)((int)pWVar11 + ~uVar10);
      cVar1 = (char)*pWVar11;
    }
    in_EAX = malloc((iStack_4 + 1) * 2);
    if (in_EAX == (wchar_t *)0x0) {
      FreeEnvironmentStringsA((LPCH)pWVar3);
      return (LPWSTR)0x0;
    }
    cVar1 = (char)*pWVar3;
    lpWideCharStr = in_EAX;
    pWVar11 = pWVar3;
    while (cVar1 != '\0') {
      iVar5 = MultiByteToWideChar(DAT_10017770,1,(LPCSTR)pWVar11,-1,lpWideCharStr,
                                  (iStack_4 + 1) - ((int)lpWideCharStr - (int)in_EAX >> 1));
      if (iVar5 == 0) {
        free(in_EAX);
        FreeEnvironmentStringsA((LPCH)pWVar3);
        return (LPWSTR)0x0;
      }
      uVar10 = 0xffffffff;
      pWVar13 = pWVar11;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        WVar2 = *pWVar13;
        pWVar13 = (LPWCH)((int)pWVar13 + (uint)bVar14 * -2 + 1);
      } while ((char)WVar2 != '\0');
      pWVar11 = (LPWCH)((int)pWVar11 + ~uVar10);
      sVar6 = wcslen(lpWideCharStr);
      lpWideCharStr = lpWideCharStr + sVar6 + 1;
      cVar1 = (char)*pWVar11;
    }
    *lpWideCharStr = L'\0';
    FreeEnvironmentStringsA((LPCH)pWVar3);
  }
  return in_EAX;
}
