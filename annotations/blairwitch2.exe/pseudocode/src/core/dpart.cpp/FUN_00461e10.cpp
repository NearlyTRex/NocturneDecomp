// Name: core_dpart.cpp_FUN_00461e10
// Address: 00461e10
// Address Range: [[00461e10, 00461f21]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00461e10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dpart_cpp_FUN_00461e10(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
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
    iVar4 = _DAT_01ba51c8 * 0x50;
    *(int *)(&DAT_01ba51cc + iVar4) = iVar3;
    iVar2 = _DAT_01ba56cc;
    *(int *)(iVar4 + 0x1ba51d0) = iVar6;
    if (iVar3 < iVar2) {
      _DAT_01ba56cc = iVar3;
    }
    if (_DAT_01ba56d0 < iVar6) {
      _DAT_01ba56d0 = iVar6;
    }
    uVar5 = *(int *)(param_2 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    lVar1 = (longlong)iVar6 * (longlong)(*(int *)(param_2 + 0x10) - *(int *)(iVar7 + 0x10));
    *(uint *)(iVar4 + 0x1ba51d8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar6 * (longlong)((*(int *)(param_2 + 8) - *(int *)(iVar7 + 8)) * 0x100);
    *(uint *)(iVar4 + 0x1ba51f8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar6 = _DAT_01ba5714;
    uVar5 = (uint)(ushort)((ushort)*(uint *)(iVar7 + 0x14) ^ 0xffff);
    lVar1 = (longlong)(int)uVar5 * (longlong)*(int *)(iVar4 + 0x1ba51d8);
    *(uint *)(iVar4 + 0x1ba51d4) =
         *(int *)(iVar7 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar5 * (longlong)*(int *)(iVar4 + 0x1ba51f8);
    _DAT_01ba51c8 = _DAT_01ba51c8 + 1;
    *(uint *)(iVar4 + 0x1ba51f4) =
         (*(int *)(iVar7 + 8) * 0x100 - iVar6) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
