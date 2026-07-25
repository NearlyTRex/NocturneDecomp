// Name: FUN_004f9620
// Address: 004f9620
// Address Range: [[004f9620, 004f982f]]
// Convention: unknown
// Signature: void FUN_004f9620(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9620(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = *(int *)(param_2 + 0x14) >> 0x10;
  iVar7 = *(int *)(param_1 + 0x14) >> 0x10;
  if (iVar7 != iVar3) {
    iVar6 = iVar3;
    iVar5 = param_2;
    if (*(int *)(param_2 + 0x14) < *(int *)(param_1 + 0x14)) {
      iVar6 = iVar7;
      iVar5 = param_1;
      param_1 = param_2;
      iVar7 = iVar3;
    }
    iVar2 = _DAT_01e52a68 * 0x48;
    *(int *)(&DAT_01e52a6c + iVar2) = iVar7;
    iVar3 = _DAT_01e52eec;
    *(int *)(iVar2 + 0x1e52a70) = iVar6;
    if (iVar7 < iVar3) {
      _DAT_01e52eec = iVar7;
    }
    if (_DAT_01e52ef0 < iVar6) {
      _DAT_01e52ef0 = iVar6;
    }
    uVar4 = *(int *)(iVar5 + 0x14) - *(int *)(param_1 + 0x14);
    if (uVar4 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar4);
    }
    uVar8 = (uint)(ushort)((ushort)*(uint *)(param_1 + 0x14) ^ 0xffff);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar5 + 0x10) - *(int *)(param_1 + 0x10));
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a78) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a74) =
         *(int *)(param_1 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar5 + 0x18) - *(int *)(param_1 + 0x18));
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a88) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a84) =
         *(int *)(param_1 + 0x18) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar5 + 0x1c) - *(int *)(param_1 + 0x1c));
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a90) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a8c) =
         *(int *)(param_1 + 0x1c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar5 + 0x20) - *(int *)(param_1 + 0x20));
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a80) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a7c) =
         *(int *)(param_1 + 0x20) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar5 + 0x2c) - *(int *)(param_1 + 0x2c));
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52aa0) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a9c) =
         *(int *)(param_1 + 0x2c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (_DAT_01c039a4 != 1) {
      lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar5 + 8) - *(int *)(param_1 + 8));
      uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar2 + 0x1e52a98) = uVar4;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
      *(uint *)(iVar2 + 0x1e52a94) =
           *(int *)(param_1 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      _DAT_01e52a68 = _DAT_01e52a68 + 1;
      return;
    }
    if (_DAT_01c0399c == 0) {
      iVar3 = *(int *)(iVar5 + 0xc);
      iVar6 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar6 = 0x7fffffff - *(int *)(param_1 + 8);
      iVar3 = 0x7fffffff - *(int *)(iVar5 + 8);
    }
    lVar1 = (longlong)iVar7 * (longlong)(iVar3 - iVar6);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a98) = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    *(uint *)(iVar2 + 0x1e52a94) =
         iVar6 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    _DAT_01e52a68 = _DAT_01e52a68 + 1;
  }
  return;
}
