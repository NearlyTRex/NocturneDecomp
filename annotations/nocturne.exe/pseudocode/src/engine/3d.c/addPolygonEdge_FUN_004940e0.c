// Name: engine_3d.c_addPolygonEdge_FUN_004940e0
// Address: 004940e0
// Address Range: [[004940e0, 00494214]]
// Convention: unknown
// Signature: void engine_3d_c_addPolygonEdge_FUN_004940e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_3d_c_addPolygonEdge_FUN_004940e0(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_2 + 0x14) >> 0x10;
  iVar5 = *(int *)(param_1 + 0x14) >> 0x10;
  if (iVar5 != iVar3) {
    iVar4 = iVar3;
    iVar7 = param_1;
    if (*(int *)(param_2 + 0x14) < *(int *)(param_1 + 0x14)) {
      iVar4 = iVar5;
      iVar5 = iVar3;
      iVar7 = param_2;
      param_2 = param_1;
    }
    iVar3 = _DAT_01c70f78 * 0x38;
    *(int *)(&DAT_01c70f7c + iVar3) = iVar5;
    iVar2 = _DAT_01c712fc;
    *(int *)(iVar3 + 0x1c70f80) = iVar4;
    if (iVar5 < iVar2) {
      _DAT_01c712fc = iVar5;
    }
    if (_DAT_01c71300 < iVar4) {
      _DAT_01c71300 = iVar4;
    }
    *(uint *)(iVar3 + 0x1c70f84) = *(uint *)(iVar7 + 0x10);
    *(uint *)(iVar3 + 0x1c70f94) = *(uint *)(iVar7 + 0x18);
    *(uint *)(iVar3 + 0x1c70f9c) = *(uint *)(iVar7 + 0x1c);
    uVar6 = *(int *)(param_2 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 * (longlong)(*(int *)(param_2 + 0x10) - *(int *)(iVar7 + 0x10));
    *(uint *)(iVar3 + 0x1c70f88) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(*(int *)(param_2 + 0x18) - *(int *)(iVar7 + 0x18));
    *(uint *)(iVar3 + 0x1c70f98) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)(*(int *)(param_2 + 0x1c) - *(int *)(iVar7 + 0x1c));
    *(uint *)(iVar3 + 0x1c70fa0) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)*(uint *)(iVar7 + 0x14) ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1c70f88);
    *(uint *)(iVar3 + 0x1c70f84) =
         *(int *)(iVar3 + 0x1c70f84) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1c70f98);
    *(uint *)(iVar3 + 0x1c70f94) =
         *(int *)(iVar3 + 0x1c70f94) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1c70fa0);
    _DAT_01c70f78 = _DAT_01c70f78 + 1;
    *(uint *)(iVar3 + 0x1c70f9c) =
         *(int *)(iVar3 + 0x1c70f9c) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
