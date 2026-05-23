// Name: core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
// Address: 005f7d40
// MANUAL RECONSTRUCTION
// Address Range: [[005f7d40, 005f7df7]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

{
  longlong lVar1;
  byte uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (vertex_a->projected_vertex).transformed_z;
  iVar5 = ((vertex_b->projected_vertex).transformed_y + iVar4) -
          ((vertex_a->projected_vertex).transformed_y + (vertex_b->projected_vertex).transformed_z);
  uVar3 = iVar4 - (vertex_a->projected_vertex).transformed_y;
  if ((int)uVar3 < iVar5) {
    if (-iVar5 < (int)uVar3) {
      iVar4 = (int)(CONCAT44((int)uVar3 >> 1,(uint)((uVar3 & 1) != 0) << 0x1f) / (longlong)iVar5);
    }
    else {
      iVar4 = -0x80000000;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_z - (vertex_a->projected_vertex).transformed_z)
          * (longlong)iVar4;
  iVar5 = (int)(lVar1 >> 0x1f) + (vertex_a->projected_vertex).transformed_z;
  (vertex_out->projected_vertex).transformed_z = iVar5;
  (vertex_out->projected_vertex).transformed_y = iVar5;
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_x - (vertex_a->projected_vertex).transformed_x)
          * (longlong)iVar4;
  (vertex_out->projected_vertex).transformed_x =
       (int)(lVar1 >> 0x1f) + (vertex_a->projected_vertex).transformed_x;
  uVar2 = g_RenderStateFlags.bytes[0];
  (vertex_out->projected_vertex).screen_x = -1;
  if ((uVar2 & 4) == 0) {
    return;
  }
  lVar1 = (longlong)(vertex_b->r - vertex_a->r) * (longlong)iVar4;
  vertex_out->r = (int)(lVar1 >> 0x1f) + vertex_a->r;
  return;
}
