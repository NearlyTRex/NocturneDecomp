// Name: engine_3d.c_addRasterizerEdge_FUN_00562620
// Address: 00562620
// Address Range: [[00562620, 0056273b]]
// Convention: unknown
// Signature: void engine_3d_c_addRasterizerEdge_FUN_00562620(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_3d_c_addRasterizerEdge_FUN_00562620(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_2 + 0x14) >> 0x10;
  iVar2 = *(int *)(param_1 + 0x14) >> 0x10;
  if (iVar2 != iVar6) {
    iVar3 = iVar2;
    iVar7 = param_1;
    if (*(int *)(param_2 + 0x14) < *(int *)(param_1 + 0x14)) {
      iVar3 = iVar6;
      iVar6 = iVar2;
      iVar7 = param_2;
      param_2 = param_1;
    }
    iVar4 = _DAT_02de497c * 0x48;
    *(int *)(&DAT_02de4980 + iVar4) = iVar3;
    iVar2 = _DAT_02de4e00;
    *(int *)(iVar4 + 0x2de4984) = iVar6;
    if (iVar3 < iVar2) {
      _DAT_02de4e00 = iVar3;
    }
    if (_DAT_02de4e04 < iVar6) {
      _DAT_02de4e04 = iVar6;
    }
    uVar5 = *(int *)(param_2 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = *(uint *)(iVar7 + 0x14) & 0xffff ^ 0xffff;
    lVar1 = (longlong)iVar6 * (longlong)(*(int *)(param_2 + 0x10) - *(int *)(iVar7 + 0x10));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar4 + 0x2de498c) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar4 + 0x2de4988) =
         *(int *)(iVar7 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar6 * (longlong)((*(int *)(param_2 + 8) - *(int *)(iVar7 + 8)) * 0x100);
    *(uint *)(iVar4 + 0x2de49ac) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar4 + 0x2de49ac);
    _DAT_02de497c = _DAT_02de497c + 1;
    *(uint *)(iVar4 + 0x2de49a8) =
         (*(int *)(iVar7 + 8) * 0x100 - _DAT_01b4d1fc) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
