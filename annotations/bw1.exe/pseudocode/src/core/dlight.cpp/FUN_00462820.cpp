// Name: FUN_00462820
// Address: 00462820
// Address Range: [[00462820, 00462a08]]
// Convention: unknown
// Signature: void FUN_00462820(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462820(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x11e4) != 0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0xf3;
    FUN_005030e0("CDemonLight::beginScene - Scene already open");
  }
  *(uint *)(param_1 + 0x11e4) = 1;
  FUN_0044ce60(param_1,param_2);
  FUN_00483c10(DAT_00612560,0,0,*(int *)(param_1 + 0x1cc0) + -1,*(int *)(param_1 + 0x1cc4) + -1);
  *(int *)(param_1 + 0x11dc) = *(int *)(param_1 + 0x1cc0) + -1;
  *(uint *)(param_1 + 0x11d4) = 0;
  *(int *)(param_1 + 0x11e0) = *(int *)(param_1 + 0x1cc4) + -1;
  *(uint *)(param_1 + 0x11d8) = 0;
  uVar2 = DAT_00612560;
  *(uint *)(param_1 + 0x1d0) = 0;
  *(int *)(param_1 + 0x168) = param_2;
  FUN_004834b0(uVar2,param_1 + 4);
  FUN_004839b0(DAT_00612560,*(uint *)(param_1 + 0x38));
  FUN_00483560(DAT_00612560,param_1 + 0x10);
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c51d60;
  _DAT_01c51d60 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c51d6c;
  _DAT_01c51d6c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c51d78;
  _DAT_01c51d78 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (param_2 == 0) {
    FUN_004ab020(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2);
  }
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x1cc4)) {
    do {
      *(uint *)(iVar4 + 0x1cd4) = *(uint *)(&DAT_01c4354c + iVar3 * 4);
      *(int *)(&DAT_01c4354c + iVar3 * 4) =
           *(int *)(param_1 + 0x1cc0) * iVar3 * 2 + *(int *)(param_1 + 0x2f94);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x1cc4));
  }
  FUN_0044dc90(param_1);
  FUN_00483e40(DAT_00612560,1);
  if (param_2 == 0) {
    _DAT_01bc0cd0 = param_2;
    return;
  }
  _DAT_01bc0cd0 = 0x8000;
  return;
}
