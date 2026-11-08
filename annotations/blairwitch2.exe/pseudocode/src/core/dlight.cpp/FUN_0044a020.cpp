// Name: FUN_0044a020
// Address: 0044a020
// Address Range: [[0044a020, 0044a208]]
// Convention: unknown
// Signature: void FUN_0044a020(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a020(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x11e4) != 0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0xf4;
    FUN_004e4500("CDemonLight::beginScene - Scene already open");
  }
  *(uint *)(param_1 + 0x11e4) = 1;
  FUN_0043b7a0(param_1,param_2);
  FUN_0046b710(DAT_0060b280,0,0,*(int *)(param_1 + 0x1cc0) + -1,*(int *)(param_1 + 0x1cc4) + -1);
  *(int *)(param_1 + 0x11dc) = *(int *)(param_1 + 0x1cc0) + -1;
  *(uint *)(param_1 + 0x11d4) = 0;
  *(int *)(param_1 + 0x11e0) = *(int *)(param_1 + 0x1cc4) + -1;
  *(uint *)(param_1 + 0x11d8) = 0;
  uVar2 = DAT_0060b280;
  *(uint *)(param_1 + 0x1d0) = 0;
  *(int *)(param_1 + 0x168) = param_2;
  FUN_0046afb0(uVar2,param_1 + 4);
  FUN_0046b4b0(DAT_0060b280,*(uint *)(param_1 + 0x38));
  FUN_0046b060(DAT_0060b280,param_1 + 0x10);
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c38ba0;
  _DAT_01c38ba0 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c38bac;
  _DAT_01c38bac = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c38bb8;
  _DAT_01c38bb8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (param_2 == 0) {
    FUN_00492670(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2);
  }
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x1cc4)) {
    do {
      *(uint *)(iVar4 + 0x1cd4) = *(uint *)(&DAT_01c2a38c + iVar3 * 4);
      *(int *)(&DAT_01c2a38c + iVar3 * 4) =
           *(int *)(param_1 + 0x1cc0) * iVar3 * 2 + *(int *)(param_1 + 0x2f94);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x1cc4));
  }
  FUN_0043c5d0(param_1);
  FUN_0046b940(DAT_0060b280,1);
  if (param_2 == 0) {
    _DAT_01ba5714 = param_2;
    return;
  }
  _DAT_01ba5714 = 0x8000;
  return;
}
