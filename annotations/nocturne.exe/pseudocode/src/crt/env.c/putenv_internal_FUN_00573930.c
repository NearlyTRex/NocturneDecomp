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
  void *ptr;
  uint uVar5;
  CHAR *pCVar6;
  LPCSTR pCVar7;
  char *pcVar8;
  byte bVar9;
  uint uVar10;
  LPCSTR pCStack_18;
  
  bVar9 = 0;
  uVar10 = 1;
  pcVar1 = char_in_set(envstr,L'=');
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
    pCVar6 = envstr;
    pCVar7 = lpName;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint *)pCVar7 = *(uint *)pCVar6;
      pCVar6 = pCVar6 + (uint)bVar9 * -8 + 4;
      pCVar7 = pCVar7 + (uint)bVar9 * -8 + 4;
    }
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pCVar7 = *pCVar6;
      pCVar6 = pCVar6 + (uint)bVar9 * -2 + 1;
      pCVar7 = pCVar7 + (uint)bVar9 * -2 + 1;
    }
    lpName[uVar3] = '\0';
    uVar3 = FUN_00574000(pcVar1 + 1,uVar10);
    if (uVar3 == 0) {
      pCStack_18 = (LPCSTR)0x0;
    }
    else {
      pCStack_18 = malloc(uVar3 + 1);
      if (pCStack_18 == (char *)0x0) {
        free(lpName);
        return -1;
      }
      pcVar1 = pcVar1 + 1;
      pcVar8 = pCStack_18;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)pcVar8 = *(uint *)pcVar1;
        pcVar1 = pcVar1 + (uint)bVar9 * -8 + 4;
        pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
      }
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar1;
        pcVar1 = pcVar1 + (uint)bVar9 * -2 + 1;
        pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
      }
      pCStack_18[uVar3] = '\0';
    }
    BVar4 = SetEnvironmentVariableA(lpName,pCStack_18);
    free(lpName);
    free(pCStack_18);
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
      ptr = malloc((int)lpName * (iVar2 + 1));
      if (ptr == (void *)0x0) {
        convertWindowsErrorToErrno(5);
        return -1;
      }
      iVar2 = FUN_00574030(ptr,envstr,(iVar2 + 1) * 2);
      if (iVar2 == -1) {
        free(ptr);
        return -1;
      }
      iVar2 = FUN_00574264(ptr);
    }
  }
  return iVar2;
}
