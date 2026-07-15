// Name: crt_env.c___crtGetEnvironmentStringsA_FUN_100083e0
// Address: 100083e0
// Address Range: [[100083e0, 10008574]]
// Convention: __cdecl
// Signature: char * __cdecl crt_env_c___crtGetEnvironmentStringsA_FUN_100083e0(void)

#include "nocturne.h"

char * __cdecl __crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  LPWCH pWVar3;
  size_t size;
  LPSTR lpMultiByteStr;
  char *pcVar4;
  uint uVar5;
  LPWCH pWVar6;
  char *size_00;
  WCHAR *pWVar7;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  LPWCH local_4;
  WCHAR *pWVar8;
  
  bVar11 = 0;
  pWVar3 = local_4;
  if (DAT_10016ff4 == 0) {
    pWVar3 = GetEnvironmentStringsW();
    if (pWVar3 == (LPWCH)0x0) {
      local_4 = (LPWCH)GetEnvironmentStrings();
      if (local_4 == (LPWCH)0x0) {
        return (char *)0x0;
      }
      DAT_10016ff4 = 2;
    }
    else {
      DAT_10016ff4 = 1;
    }
  }
  if (DAT_10016ff4 != 1) {
    if (DAT_10016ff4 != 2) {
      return (char *)0x0;
    }
    if ((local_4 == (LPWCH)0x0) && (local_4 = (LPWCH)GetEnvironmentStrings(), local_4 == (LPWCH)0x0)
       ) {
      return (char *)0x0;
    }
    cVar1 = (char)*local_4;
    pWVar3 = local_4;
    while (cVar1 != '\0') {
      do {
        pWVar6 = pWVar3;
        pWVar3 = (LPWCH)((int)pWVar6 + 1);
      } while (*(char *)pWVar3 != '\0');
      pWVar3 = pWVar6 + 1;
      cVar1 = (char)*pWVar3;
    }
    size_00 = (char *)((int)pWVar3 + (1 - (int)local_4));
    pcVar4 = (char *)malloc((size_t)size_00);
    if (pcVar4 == (char *)0x0) {
      FreeEnvironmentStringsA((LPCH)local_4);
      return (char *)0x0;
    }
    pWVar3 = local_4;
    pcVar10 = pcVar4;
    for (uVar5 = (uint)size_00 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint *)pcVar10 = *(uint *)pWVar3;
      pWVar3 = pWVar3 + (uint)bVar11 * -4 + 2;
      pcVar10 = pcVar10 + (uint)bVar11 * -8 + 4;
    }
    for (uVar5 = (uint)size_00 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = (char)*pWVar3;
      pWVar3 = (LPWCH)((int)pWVar3 + (uint)bVar11 * -2 + 1);
      pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
    }
    FreeEnvironmentStringsA((LPCH)local_4);
    return pcVar4;
  }
  if ((pWVar3 == (LPWCH)0x0) && (pWVar3 = GetEnvironmentStringsW(), pWVar3 == (LPWCH)0x0)) {
    return (char *)0x0;
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
  iVar9 = ((int)pWVar7 - (int)pWVar3 >> 1) + 1;
  size = WideCharToMultiByte(0,0,pWVar3,iVar9,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((size != 0) &&
     (lpMultiByteStr = malloc(size), lpMultiByteStr != (LPSTR)0x0)) {
    iVar9 = WideCharToMultiByte(0,0,pWVar3,iVar9,lpMultiByteStr,size,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar9 == 0) {
      free(lpMultiByteStr);
      lpMultiByteStr = (LPSTR)0x0;
    }
    FreeEnvironmentStringsW(pWVar3);
    return lpMultiByteStr;
  }
  FreeEnvironmentStringsW(pWVar3);
  return (char *)0x0;
}
