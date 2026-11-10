// Name: engine_prim.c_setupColoredSoftwareEdge_FUN_0053eda0
// Address: 0053eda0
// Address Range: [[0053eda0, 0053f01b]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_0053eda0(SRenderVertex *vertex0,SRenderVertex *vertex1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_0053eda0(SRenderVertex *vertex0,SRenderVertex *vertex1)

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
    iVar3 = _DAT_01e7dacc * 0x50;
    *(int *)(&DAT_01e7dad0 + iVar3) = iVar5;
    iVar4 = _DAT_01e7dfd0;
    *(int *)(iVar3 + 0x1e7dad4) = iVar7;
    if (iVar5 < iVar4) {
      _DAT_01e7dfd0 = iVar5;
    }
    if (_DAT_01e7dfd4 < iVar7) {
      _DAT_01e7dfd4 = iVar7;
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
    *(uint *)(iVar3 + 0x1e7dadc) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1e7dad8) =
         *(int *)(vertex0 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x18) - *(int *)(vertex0 + 0x18));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1e7daec) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1e7dae8) =
         *(int *)(vertex0 + 0x18) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x1c) - *(int *)(vertex0 + 0x1c));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1e7daf4) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1e7daf0) =
         *(int *)(vertex0 + 0x1c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x20) - *(int *)(vertex0 + 0x20));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1e7dae4) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1e7dae0) =
         *(int *)(vertex0 + 0x20) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x2c) - *(int *)(vertex0 + 0x2c));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1e7db04) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1e7db00) =
         *(int *)(vertex0 + 0x2c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (_DAT_01c51d18 == 1) {
      if (_DAT_01c51d10 == 0) {
        iStack_14 = *(int *)(vertex0 + 0xc);
        iVar4 = *(int *)(pSVar6 + 0xc);
      }
      else {
        iStack_14 = 0x7fffffff - *(int *)(vertex0 + 8);
        iVar4 = 0x7fffffff - *(int *)(pSVar6 + 8);
      }
      lVar1 = (longlong)iVar7 * (longlong)(iVar4 - iStack_14);
      uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar3 + 0x1e7dafc) = uVar2;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
      *(uint *)(iVar3 + 0x1e7daf8) =
           iStack_14 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    else {
      lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 8) - *(int *)(vertex0 + 8));
      uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar3 + 0x1e7dafc) = uVar2;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
      *(uint *)(iVar3 + 0x1e7daf8) =
           *(int *)(vertex0 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x24) - *(int *)(vertex0 + 0x24));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1e7db0c) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    *(uint *)(iVar3 + 0x1e7db08) =
         *(int *)(vertex0 + 0x24) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(pSVar6 + 0x28) - *(int *)(vertex0 + 0x28));
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar3 + 0x1e7db14) = uVar2;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
    _DAT_01e7dacc = _DAT_01e7dacc + 1;
    *(uint *)(iVar3 + 0x1e7db10) =
         *(int *)(vertex0 + 0x28) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
