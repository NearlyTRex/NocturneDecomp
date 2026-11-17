// Name: crt_unknown.c_FUN_005c6210
// Address: 005c6210
// Address Range: [[005c6210, 005c63db]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c6210(CHAR *param_1)

#include "nocturne.h"

uint FUN_005c6210(CHAR *param_1)

{
  CHAR *pCVar1;
  uint uVar2;
  uint uVar3;
  LPCSTR lpName;
  BOOL BVar4;
  int iVar5;
  void *ptr;
  uint uVar6;
  CHAR *pCVar7;
  LPCSTR pCVar8;
  byte bVar9;
  int iVar10;
  LPCSTR pCStack_18;
  
  bVar9 = 0;
  iVar10 = 1;
  pCVar1 = (CHAR *)FUN_005c5810(param_1,0x3d,1);
  if (pCVar1 == (CHAR *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (pCVar1 == param_1) {
      return 0xffffffff;
    }
    uVar3 = (int)pCVar1 - (int)param_1;
    lpName = malloc(uVar3 + 1);
    if (lpName == (LPCSTR)0x0) {
      return 0xffffffff;
    }
    pCVar7 = param_1;
    pCVar8 = lpName;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint *)pCVar8 = *(uint *)pCVar7;
      pCVar7 = pCVar7 + (uint)bVar9 * -8 + 4;
      pCVar8 = pCVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pCVar8 = *pCVar7;
      pCVar7 = pCVar7 + (uint)bVar9 * -2 + 1;
      pCVar8 = pCVar8 + (uint)bVar9 * -2 + 1;
    }
    lpName[uVar3] = '\0';
    uVar3 = FUN_005c68e0(pCVar1 + 1);
    if (uVar3 == 0) {
      pCStack_18 = (LPCSTR)0x0;
    }
    else {
      pCStack_18 = malloc(uVar3 + 1);
      if (pCStack_18 == (CHAR *)0x0) {
        debugFree(lpName);
        return 0xffffffff;
      }
      pCVar1 = pCVar1 + 1;
      pCVar7 = pCStack_18;
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pCVar7 = *(uint *)pCVar1;
        pCVar1 = pCVar1 + (uint)bVar9 * -8 + 4;
        pCVar7 = pCVar7 + (uint)bVar9 * -8 + 4;
      }
      for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar7 = *pCVar1;
        pCVar1 = pCVar1 + (uint)bVar9 * -2 + 1;
        pCVar7 = pCVar7 + (uint)bVar9 * -2 + 1;
      }
      pCStack_18[uVar3] = '\0';
    }
    BVar4 = SetEnvironmentVariableA(lpName,pCStack_18);
    debugFree(lpName);
    debugFree(pCStack_18);
    if (BVar4 == 0) {
      return 0xffffffff;
    }
    iVar5 = FUN_005c63dc(param_1);
    if (iVar5 != 0) {
      return 0xffffffff;
    }
    uVar2 = 0;
    if (g_EnvironInitialized != 0) {
      iVar5 = FUN_005c68e0(param_1);
      ptr = malloc((iVar5 + 1) * 2);
      if (ptr == (void *)0x0) {
        FUN_005c0300(5);
        return 0xffffffff;
      }
      iVar10 = FUN_005c6910(ptr,param_1,(iVar5 + 1) * iVar10);
      if (iVar10 == -1) {
        debugFree(ptr);
        return 0xffffffff;
      }
      uVar2 = FUN_005c6b44(ptr);
    }
  }
  return uVar2;
}
