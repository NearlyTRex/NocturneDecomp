// Name: FUN_00562740
// Address: 00562740
// Address Range: [[00562740, 00562877]]
// Convention: unknown
// Signature: void FUN_00562740(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562740(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_2 + 0x14) >> 0x10;
  iVar2 = *(int *)(param_1 + 0x14) >> 0x10;
  if (iVar2 != iVar5) {
    iVar3 = iVar2;
    iVar7 = param_1;
    if (*(int *)(param_2 + 0x14) < *(int *)(param_1 + 0x14)) {
      iVar3 = iVar5;
      iVar5 = iVar2;
      iVar7 = param_2;
      param_2 = param_1;
    }
    iVar4 = _DAT_02de497c * 0x48;
    *(int *)(&DAT_02de4980 + iVar4) = iVar3;
    iVar2 = _DAT_02de4e00;
    *(int *)(iVar4 + 0x2de4984) = iVar5;
    if (iVar3 < iVar2) {
      _DAT_02de4e00 = iVar3;
    }
    if (_DAT_02de4e04 < iVar5) {
      _DAT_02de4e04 = iVar5;
    }
    *(uint *)(iVar4 + 0x2de4988) = *(uint *)(iVar7 + 0x10);
    *(int *)(iVar4 + 0x2de49a8) = *(int *)(iVar7 + 8) << 8;
    *(uint *)(iVar4 + 0x2de4990) = *(uint *)(iVar7 + 0x20);
    uVar6 = *(int *)(param_2 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 * (longlong)(*(int *)(param_2 + 0x10) - *(int *)(iVar7 + 0x10));
    *(uint *)(iVar4 + 0x2de498c) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)((*(int *)(param_2 + 8) - *(int *)(iVar7 + 8)) * 0x100);
    *(uint *)(iVar4 + 0x2de49ac) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(*(int *)(param_2 + 0x20) - *(int *)(iVar7 + 0x20));
    *(uint *)(iVar4 + 0x2de4994) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)*(uint *)(iVar7 + 0x14) ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar4 + 0x2de498c);
    *(uint *)(iVar4 + 0x2de4988) =
         *(int *)(iVar4 + 0x2de4988) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar4 + 0x2de49ac);
    *(int *)(iVar4 + 0x2de49a8) =
         *(int *)(iVar4 + 0x2de49a8) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar4 + 0x2de4994);
    _DAT_02de497c = _DAT_02de497c + 1;
    *(uint *)(iVar4 + 0x2de4990) =
         *(int *)(iVar4 + 0x2de4990) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
