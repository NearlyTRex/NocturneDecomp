// Name: engine_prim.c_setupColoredSoftwareEdge_FUN_00516b00
// Address: 00516b00
// Address Range: [[00516b00, 00516d7b]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_00516b00(SRenderVertex *vertex0,SRenderVertex *vertex1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_00516b00(SRenderVertex *vertex0,SRenderVertex *vertex1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  int iStack_14;
  
  iVar7 = *(int *)(vertex1 + 0x14) >> 0x10;
  iVar4 = *(int *)(vertex0 + 0x14) >> 0x10;
  if (iVar4 != iVar7) {
    iVar5 = iVar4;
    pSVar6 = vertex1;
    if (*(int *)(vertex1 + 0x14) < *(int *)(vertex0 + 0x14)) {
      iVar5 = iVar7;
      pSVar6 = vertex0;
      vertex0 = vertex1;
      iVar7 = iVar4;
    }
    iVar3 = _DAT_01ed319c * 0x50;
    *(int *)(&DAT_01ed31a0 + iVar3) = iVar5;
    iVar4 = _DAT_01ed36a0;
    *(int *)(iVar3 + 0x1ed31a4) = iVar7;
    if (iVar5 < iVar4) {
      _DAT_01ed36a0 = iVar5;
    }
    if (_DAT_01ed36a4 < iVar7) {
      _DAT_01ed36a4 = iVar7;
    }
    if ((uint)(*(int *)(pSVar6 + 0x14) - *(int *)(vertex0 + 0x14)) < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff /
                   (ulonglong)(uint)(*(int *)(pSVar6 + 0x14) - *(int *)(vertex0 + 0x14)));
    }
    uVar8 = (uint)(ushort)((ushort)*(uint *)(vertex0 + 0x14) ^ 0xffff);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x10) - *(int *)(vertex0 + 0x10));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1ed31ac) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1ed31a8) =
         *(int *)(vertex0 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x18) - *(int *)(vertex0 + 0x18));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1ed31bc) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1ed31b8) =
         *(int *)(vertex0 + 0x18) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x1c) - *(int *)(vertex0 + 0x1c));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1ed31c4) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1ed31c0) =
         *(int *)(vertex0 + 0x1c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x20) - *(int *)(vertex0 + 0x20));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1ed31b4) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1ed31b0) =
         *(int *)(vertex0 + 0x20) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x2c) - *(int *)(vertex0 + 0x2c));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1ed31d4) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1ed31d0) =
         *(int *)(vertex0 + 0x2c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (_DAT_01c6e2b8 == 1) {
      if (_DAT_01c6e2b0 == 0) {
        iStack_14 = *(int *)(vertex0 + 0xc);
        iVar4 = *(int *)(pSVar6 + 0xc);
      }
      else {
        iStack_14 = 0x7fffffff - *(int *)(vertex0 + 8);
        iVar4 = 0x7fffffff - *(int *)(pSVar6 + 8);
      }
      lVar1 = (longlong)iVar7 * (longlong)(iVar4 - iStack_14);
      uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar3 + 0x1ed31cc) = uVar2;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
      *(uint *)(iVar3 + 0x1ed31c8) =
           iStack_14 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    else {
      lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 8) - *(int *)(vertex0 + 8));
      uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar3 + 0x1ed31cc) = uVar2;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
      *(uint *)(iVar3 + 0x1ed31c8) =
           *(int *)(vertex0 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x24) - *(int *)(vertex0 + 0x24));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1ed31dc) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1ed31d8) =
         *(int *)(vertex0 + 0x24) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x28) - *(int *)(vertex0 + 0x28));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1ed31e4) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    _DAT_01ed319c = _DAT_01ed319c + 1;
    *(uint *)(iVar3 + 0x1ed31e0) =
         *(int *)(vertex0 + 0x28) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
