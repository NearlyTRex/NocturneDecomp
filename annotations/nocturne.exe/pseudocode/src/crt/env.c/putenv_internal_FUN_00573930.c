// Name: crt_env.c_putenv_internal_FUN_00573930
// Address: 00573930
// Address Range: [[00573930, 00573afb]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c_putenv_internal_FUN_00573930(char *envstr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl putenv_internal(char *envstr)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  LPCSTR lpName;
  BOOL BVar4;
  void *pvVar5;
  uint uVar6;
  CHAR *pCVar7;
  LPCSTR pCVar8;
  char *pcVar9;
  byte bVar10;
  int iVar11;
  LPCSTR pCStack_18;
  
  bVar10 = 0;
  iVar11 = 2;
  pcVar1 = (char *)char_in_set(envstr,0x3d,1,2);
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    if (pcVar1 == envstr) {
      return -1;
    }
    uVar3 = (int)pcVar1 - (int)envstr;
    lpName = malloc(uVar3 + 1);
    if (lpName == (LPCSTR)0x0) {
      return -1;
    }
    pCVar7 = envstr;
    pCVar8 = lpName;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint *)pCVar8 = *(uint *)pCVar7;
      pCVar7 = pCVar7 + (uint)bVar10 * -8 + 4;
      pCVar8 = pCVar8 + (uint)bVar10 * -8 + 4;
    }
    for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pCVar8 = *pCVar7;
      pCVar7 = pCVar7 + (uint)bVar10 * -2 + 1;
      pCVar8 = pCVar8 + (uint)bVar10 * -2 + 1;
    }
    lpName[uVar3] = '\0';
    uVar3 = FUN_00574000(pcVar1 + 1);
    if (uVar3 == 0) {
      pCStack_18 = (LPCSTR)0x0;
    }
    else {
      pCStack_18 = malloc(uVar3 + 1);
      if (pCStack_18 == (char *)0x0) {
        FUN_005638d0(lpName);
        return -1;
      }
      pcVar1 = pcVar1 + 1;
      pcVar9 = pCStack_18;
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pcVar9 = *(uint *)pcVar1;
        pcVar1 = pcVar1 + (uint)bVar10 * -8 + 4;
        pcVar9 = pcVar9 + (uint)bVar10 * -8 + 4;
      }
      for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar1;
        pcVar1 = pcVar1 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      }
      pCStack_18[uVar3] = '\0';
    }
    BVar4 = SetEnvironmentVariableA(lpName,pCStack_18);
    FUN_005638d0(lpName);
    FUN_005638d0(pCStack_18);
    if (BVar4 == 0) {
      return -1;
    }
    iVar2 = updateEnvironTable(envstr);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = 0;
    if (_DAT_02de54a8 != 0) {
      iVar2 = FUN_00574000(envstr);
      pvVar5 = malloc((int)lpName * (iVar2 + 1));
      if (pvVar5 == (void *)0x0) {
        convertWindowsErrorToErrno(5);
        return -1;
      }
      iVar11 = FUN_00574030(pvVar5,envstr,(iVar2 + 1) * iVar11);
      if (iVar11 == -1) {
        FUN_005638d0(pvVar5);
        return -1;
      }
      iVar2 = FUN_00574264(pvVar5);
    }
  }
  return iVar2;
}
