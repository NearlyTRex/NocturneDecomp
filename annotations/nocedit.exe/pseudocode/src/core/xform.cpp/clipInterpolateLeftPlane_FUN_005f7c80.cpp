// Name: core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
// Address: 005f7c80
// Address Range: [[005f7c80, 005f7d34]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

{
  longlong lVar1;
  byte uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (vertex_a->projected_vertex).transformed_x + (vertex_a->projected_vertex).transformed_z;
  iVar5 = (uVar4 - (vertex_b->projected_vertex).transformed_x) -
          (vertex_b->projected_vertex).transformed_z;
  if ((int)uVar4 < iVar5) {
    if (-iVar5 < (int)uVar4) {
      iVar5 = (int)(CONCAT44((int)uVar4 >> 1,(uint)((uVar4 & 1) != 0) << 0x1f) / (longlong)iVar5);
    }
    else {
      iVar5 = -0x80000000;
    }
  }
  else {
    iVar5 = 0x7fffffff;
  }
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_z - (vertex_a->projected_vertex).transformed_z)
          * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
          (vertex_a->projected_vertex).transformed_z;
  (vertex_out->projected_vertex).transformed_z = iVar3;
  (vertex_out->projected_vertex).transformed_x = iVar3;
  (vertex_out->projected_vertex).transformed_x = -iVar3;
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_y - (vertex_a->projected_vertex).transformed_y)
          * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  (vertex_out->projected_vertex).transformed_y =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
       (vertex_a->projected_vertex).transformed_y;
  uVar2 = g_RenderStateFlags.bytes[0];
  (vertex_out->projected_vertex).screen_x = -1;
  if ((uVar2 & 4) == 0) {
    return;
  }
  lVar1 = (longlong)(vertex_b->r - vertex_a->r) * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  vertex_out->r = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + vertex_a->r;
  return;
}
