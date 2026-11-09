// Name: engine_prim.c_FUN_00515510
// Address: 00515510
// Address Range: [[00515510, 005156cb]]
// Convention: unknown
// Signature: void engine_prim_c_FUN_00515510(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_prim_c_FUN_00515510(int param_1,int param_2)

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
    iVar2 = _DAT_01ed2c88 * 0x50;
    *(int *)(&DAT_01ed2c8c + iVar2) = iVar4;
    iVar3 = _DAT_01ed318c;
    *(int *)(iVar2 + 0x1ed2c90) = iVar7;
    if (iVar4 < iVar3) {
      _DAT_01ed318c = iVar4;
    }
    if (_DAT_01ed3190 < iVar7) {
      _DAT_01ed3190 = iVar7;
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
    *(uint *)(iVar2 + 0x1ed2c98) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1ed2c94) =
         *(int *)(param_1 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x18) - *(int *)(param_1 + 0x18));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1ed2ca8) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1ed2ca4) =
         *(int *)(param_1 + 0x18) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x1c) - *(int *)(param_1 + 0x1c));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1ed2cb0) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1ed2cac) =
         *(int *)(param_1 + 0x1c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x20) - *(int *)(param_1 + 0x20));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1ed2ca0) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1ed2c9c) =
         *(int *)(param_1 + 0x20) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x2c) - *(int *)(param_1 + 0x2c));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1ed2cc0) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1ed2cbc) =
         *(int *)(param_1 + 0x2c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 8) - *(int *)(param_1 + 8));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1ed2cb8) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    _DAT_01ed2c88 = _DAT_01ed2c88 + 1;
    *(uint *)(iVar2 + 0x1ed2cb4) =
         *(int *)(param_1 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
