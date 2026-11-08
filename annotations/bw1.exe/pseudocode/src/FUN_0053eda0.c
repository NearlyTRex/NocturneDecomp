// Name: FUN_0053eda0
// Address: 0053eda0
// Address Range: [[0053eda0, 0053f01b]]
// Convention: unknown
// Signature: void FUN_0053eda0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053eda0(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iStack_14;
  
  iVar7 = *(int *)(param_2 + 0x14) >> 0x10;
  iVar3 = *(int *)(param_1 + 0x14) >> 0x10;
  if (iVar3 != iVar7) {
    iVar4 = iVar3;
    iVar6 = param_2;
    if (*(int *)(param_2 + 0x14) < *(int *)(param_1 + 0x14)) {
      iVar4 = iVar7;
      iVar6 = param_1;
      param_1 = param_2;
      iVar7 = iVar3;
    }
    iVar2 = _DAT_01e7dacc * 0x50;
    *(int *)(&DAT_01e7dad0 + iVar2) = iVar4;
    iVar3 = _DAT_01e7dfd0;
    *(int *)(iVar2 + 0x1e7dad4) = iVar7;
    if (iVar4 < iVar3) {
      _DAT_01e7dfd0 = iVar4;
    }
    if (_DAT_01e7dfd4 < iVar7) {
      _DAT_01e7dfd4 = iVar7;
    }
    uVar5 = *(int *)(iVar6 + 0x14) - *(int *)(param_1 + 0x14);
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)*(uint *)(param_1 + 0x14) ^ 0xffff);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x10) - *(int *)(param_1 + 0x10));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e7dadc) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e7dad8) =
         *(int *)(param_1 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x18) - *(int *)(param_1 + 0x18));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e7daec) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e7dae8) =
         *(int *)(param_1 + 0x18) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x1c) - *(int *)(param_1 + 0x1c));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e7daf4) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e7daf0) =
         *(int *)(param_1 + 0x1c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x20) - *(int *)(param_1 + 0x20));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e7dae4) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e7dae0) =
         *(int *)(param_1 + 0x20) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x2c) - *(int *)(param_1 + 0x2c));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e7db04) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e7db00) =
         *(int *)(param_1 + 0x2c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (_DAT_01c51d18 == 1) {
      if (_DAT_01c51d10 == 0) {
        iStack_14 = *(int *)(param_1 + 0xc);
        iVar3 = *(int *)(iVar6 + 0xc);
      }
      else {
        iStack_14 = 0x7fffffff - *(int *)(param_1 + 8);
        iVar3 = 0x7fffffff - *(int *)(iVar6 + 8);
      }
      lVar1 = (longlong)iVar7 * (longlong)(iVar3 - iStack_14);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar2 + 0x1e7dafc) = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      *(uint *)(iVar2 + 0x1e7daf8) =
           iStack_14 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    else {
      lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 8) - *(int *)(param_1 + 8));
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar2 + 0x1e7dafc) = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      *(uint *)(iVar2 + 0x1e7daf8) =
           *(int *)(param_1 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x24) - *(int *)(param_1 + 0x24));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e7db0c) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e7db08) =
         *(int *)(param_1 + 0x24) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x28) - *(int *)(param_1 + 0x28));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e7db14) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    _DAT_01e7dacc = _DAT_01e7dacc + 1;
    *(uint *)(iVar2 + 0x1e7db10) =
         *(int *)(param_1 + 0x28) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
