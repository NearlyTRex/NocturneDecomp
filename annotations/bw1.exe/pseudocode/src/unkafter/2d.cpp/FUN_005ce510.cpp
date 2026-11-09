// Name: unkafter_2d.cpp_FUN_005ce510
// Address: 005ce510
// Address Range: [[005ce510, 005ce6db]]
// Convention: unknown
// Signature: undefined4 unkafter_2d_cpp_FUN_005ce510(CHAR *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_2d_cpp_FUN_005ce510(CHAR *param_1)

{
  CHAR *pCVar1;
  uint uVar2;
  uint uVar3;
  LPCSTR lpName;
  BOOL BVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  CHAR *pCVar8;
  LPCSTR pCVar9;
  byte bVar10;
  int iVar11;
  LPCSTR pCStack_18;
  
  bVar10 = 0;
  iVar11 = 1;
  pCVar1 = (CHAR *)unkafter_2d_cpp_FUN_005cdb10(param_1,0x3d,1);
  if (pCVar1 == (CHAR *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (pCVar1 == param_1) {
      return 0xffffffff;
    }
    uVar3 = (int)pCVar1 - (int)param_1;
    lpName = FUN_005c08d0(uVar3 + 1);
    if (lpName == (LPCSTR)0x0) {
      return 0xffffffff;
    }
    pCVar8 = param_1;
    pCVar9 = lpName;
    for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(uint *)pCVar9 = *(uint *)pCVar8;
      pCVar8 = pCVar8 + (uint)bVar10 * -8 + 4;
      pCVar9 = pCVar9 + (uint)bVar10 * -8 + 4;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pCVar9 = *pCVar8;
      pCVar8 = pCVar8 + (uint)bVar10 * -2 + 1;
      pCVar9 = pCVar9 + (uint)bVar10 * -2 + 1;
    }
    lpName[uVar3] = '\0';
    uVar3 = unkafter_2d_cpp_FUN_005cebe0(pCVar1 + 1);
    if (uVar3 == 0) {
      pCStack_18 = (LPCSTR)0x0;
    }
    else {
      pCStack_18 = FUN_005c08d0(uVar3 + 1);
      if (pCStack_18 == (CHAR *)0x0) {
        FUN_005c09f0(lpName);
        return 0xffffffff;
      }
      pCVar1 = pCVar1 + 1;
      pCVar8 = pCStack_18;
      for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint *)pCVar8 = *(uint *)pCVar1;
        pCVar1 = pCVar1 + (uint)bVar10 * -8 + 4;
        pCVar8 = pCVar8 + (uint)bVar10 * -8 + 4;
      }
      for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pCVar8 = *pCVar1;
        pCVar1 = pCVar1 + (uint)bVar10 * -2 + 1;
        pCVar8 = pCVar8 + (uint)bVar10 * -2 + 1;
      }
      pCStack_18[uVar3] = '\0';
    }
    BVar4 = SetEnvironmentVariableA(lpName,pCStack_18);
    FUN_005c09f0(lpName);
    FUN_005c09f0(pCStack_18);
    if (BVar4 == 0) {
      return 0xffffffff;
    }
    iVar5 = unkafter_2d_cpp_FUN_005ce6dc(param_1);
    if (iVar5 != 0) {
      return 0xffffffff;
    }
    uVar2 = 0;
    if (_DAT_02c9f6d8 != 0) {
      iVar5 = unkafter_2d_cpp_FUN_005cebe0(param_1);
      pvVar6 = FUN_005c08d0((iVar5 + 1) * 2);
      if (pvVar6 == (void *)0x0) {
        FUN_005c85c0(5);
        return 0xffffffff;
      }
      iVar11 = unkafter_2d_cpp_FUN_005cec10(pvVar6,param_1,(iVar5 + 1) * iVar11);
      if (iVar11 == -1) {
        FUN_005c09f0(pvVar6);
        return 0xffffffff;
      }
      uVar2 = unkafter_2d_cpp_FUN_005cee44(pvVar6);
    }
  }
  return uVar2;
}
