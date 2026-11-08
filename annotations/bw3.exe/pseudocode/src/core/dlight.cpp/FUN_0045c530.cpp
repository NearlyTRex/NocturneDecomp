// Name: FUN_0045c530
// Address: 0045c530
// Address Range: [[0045c530, 0045c718]]
// Convention: unknown
// Signature: void FUN_0045c530(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c530(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x11e4) != 0) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0xf3;
    FUN_004e4330("CDemonLight::beginScene - Scene already open");
  }
  *(uint *)(param_1 + 0x11e4) = 1;
  FUN_00448fa0(param_1,param_2);
  FUN_0046d2f0(DAT_005f2afc,0,0,*(int *)(param_1 + 0x1cc0) + -1,*(int *)(param_1 + 0x1cc4) + -1);
  *(int *)(param_1 + 0x11dc) = *(int *)(param_1 + 0x1cc0) + -1;
  *(uint *)(param_1 + 0x11d4) = 0;
  *(int *)(param_1 + 0x11e0) = *(int *)(param_1 + 0x1cc4) + -1;
  *(uint *)(param_1 + 0x11d8) = 0;
  uVar2 = DAT_005f2afc;
  *(uint *)(param_1 + 0x1d0) = 0;
  *(int *)(param_1 + 0x168) = param_2;
  FUN_0046cb90(uVar2,param_1 + 4);
  FUN_0046d090(DAT_005f2afc,*(uint *)(param_1 + 0x38));
  FUN_0046cc40(DAT_005f2afc,param_1 + 0x10);
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c6e300;
  _DAT_01c6e300 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c6e30c;
  _DAT_01c6e30c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c6e318;
  _DAT_01c6e318 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (param_2 == 0) {
    FUN_00495ec0(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2);
  }
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x1cc4)) {
    do {
      *(uint *)(iVar4 + 0x1cd4) = *(uint *)(&DAT_01c5faec + iVar3 * 4);
      *(int *)(&DAT_01c5faec + iVar3 * 4) =
           *(int *)(param_1 + 0x1cc0) * iVar3 * 2 + *(int *)(param_1 + 0x2f94);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x1cc4));
  }
  FUN_00449dd0(param_1);
  FUN_0046d520(DAT_005f2afc,1);
  if (param_2 == 0) {
    _DAT_01bdd520 = param_2;
    return;
  }
  _DAT_01bdd520 = 0x8000;
  return;
}
