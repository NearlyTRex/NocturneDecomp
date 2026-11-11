// Name: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_00466bf0
// Address: 00466bf0
// Address Range: [[00466bf0, 00466d01]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_00466bf0(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_00466bf0(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)

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
    iVar4 = _DAT_01bdcfd4 * 0x50;
    *(int *)(&DAT_01bdcfd8 + iVar4) = iVar3;
    iVar2 = _DAT_01bdd4d8;
    *(int *)(iVar4 + 0x1bdcfdc) = iVar6;
    if (iVar3 < iVar2) {
      _DAT_01bdd4d8 = iVar3;
    }
    if (_DAT_01bdd4dc < iVar6) {
      _DAT_01bdd4dc = iVar6;
    }
    uVar5 = (vertex_b->base).red_gradient - (pSVar7->base).red_gradient;
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    lVar1 = (longlong)iVar6 * (longlong)((vertex_b->base).red_current - (pSVar7->base).red_current);
    *(uint *)(iVar4 + 0x1bdcfe4) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar6 *
            (longlong)(((vertex_b->base).x_current - (pSVar7->base).x_current) * 0x100);
    *(uint *)(iVar4 + 0x1bdd004) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar6 = _DAT_01bdd520;
    uVar5 = (uint)(ushort)((ushort)(pSVar7->base).red_gradient ^ 0xffff);
    lVar1 = (longlong)(int)uVar5 * (longlong)*(int *)(iVar4 + 0x1bdcfe4);
    *(uint *)(iVar4 + 0x1bdcfe0) =
         (pSVar7->base).red_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar5 * (longlong)*(int *)(iVar4 + 0x1bdd004);
    _DAT_01bdcfd4 = _DAT_01bdcfd4 + 1;
    *(uint *)(iVar4 + 0x1bdd000) =
         ((pSVar7->base).x_current * 0x100 - iVar6) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
