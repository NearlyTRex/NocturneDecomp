// Name: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_0047a320
// Address: 0047a320
// Address Range: [[0047a320, 0047a431]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_0047a320(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_0047a320(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SSoftwareEdge *pSVar7;
  
  iVar6 = (vertex_b->base).red_gradient >> 0x10;
  iVar2 = (vertex_a->base).red_gradient >> 0x10;
  if (iVar2 != iVar6) {
    iVar3 = iVar2;
    pSVar7 = vertex_a;
    if ((vertex_b->base).red_gradient < (vertex_a->base).red_gradient) {
      iVar3 = iVar6;
      iVar6 = iVar2;
      pSVar7 = vertex_b;
      vertex_b = vertex_a;
    }
    iVar4 = _DAT_01bc0784 * 0x50;
    *(int *)(&DAT_01bc0788 + iVar4) = iVar3;
    iVar2 = _DAT_01bc0c88;
    *(int *)(iVar4 + 0x1bc078c) = iVar6;
    if (iVar3 < iVar2) {
      _DAT_01bc0c88 = iVar3;
    }
    if (_DAT_01bc0c8c < iVar6) {
      _DAT_01bc0c8c = iVar6;
    }
    uVar5 = (vertex_b->base).red_gradient - (pSVar7->base).red_gradient;
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    lVar1 = (longlong)iVar6 * (longlong)((vertex_b->base).red_current - (pSVar7->base).red_current);
    *(uint *)(iVar4 + 0x1bc0794) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar6 *
            (longlong)(((vertex_b->base).x_current - (pSVar7->base).x_current) * 0x100);
    *(uint *)(iVar4 + 0x1bc07b4) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar6 = _DAT_01bc0cd0;
    uVar5 = (uint)(ushort)((ushort)(pSVar7->base).red_gradient ^ 0xffff);
    lVar1 = (longlong)(int)uVar5 * (longlong)*(int *)(iVar4 + 0x1bc0794);
    *(uint *)(iVar4 + 0x1bc0790) =
         (pSVar7->base).red_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar5 * (longlong)*(int *)(iVar4 + 0x1bc07b4);
    _DAT_01bc0784 = _DAT_01bc0784 + 1;
    *(uint *)(iVar4 + 0x1bc07b0) =
         ((pSVar7->base).x_current * 0x100 - iVar6) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
