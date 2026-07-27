// Name: engine_prim.c_FUN_004f9460
// Address: 004f9460
// Address Range: [[004f9460, 004f961b]]
// Convention: unknown
// Signature: void engine_prim_c_FUN_004f9460(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_prim_c_FUN_004f9460(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
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
    iVar2 = _DAT_01e52a68 * 0x48;
    *(int *)(&DAT_01e52a6c + iVar2) = iVar4;
    iVar3 = _DAT_01e52eec;
    *(int *)(iVar2 + 0x1e52a70) = iVar7;
    if (iVar4 < iVar3) {
      _DAT_01e52eec = iVar4;
    }
    if (_DAT_01e52ef0 < iVar7) {
      _DAT_01e52ef0 = iVar7;
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
    *(uint *)(iVar2 + 0x1e52a78) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e52a74) =
         *(int *)(param_1 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x18) - *(int *)(param_1 + 0x18));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a88) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e52a84) =
         *(int *)(param_1 + 0x18) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x1c) - *(int *)(param_1 + 0x1c));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a90) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e52a8c) =
         *(int *)(param_1 + 0x1c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x20) - *(int *)(param_1 + 0x20));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a80) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e52a7c) =
         *(int *)(param_1 + 0x20) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x2c) - *(int *)(param_1 + 0x2c));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52aa0) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e52a9c) =
         *(int *)(param_1 + 0x2c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 8) - *(int *)(param_1 + 8));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e52a98) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    _DAT_01e52a68 = _DAT_01e52a68 + 1;
    *(uint *)(iVar2 + 0x1e52a94) =
         *(int *)(param_1 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
