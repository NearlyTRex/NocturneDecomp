// Name: core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
// Address: 005f7e00
// MANUAL RECONSTRUCTION
// Address Range: [[005f7e00, 005f7eb8]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

{
  longlong lVar1;
  byte uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (vertex_a->projected_vertex).transformed_y + (vertex_a->projected_vertex).transformed_z;
  iVar5 = uVar4 - ((vertex_b->projected_vertex).transformed_y +
                  (vertex_b->projected_vertex).transformed_z);
  if ((int)uVar4 < iVar5) {
    if (-iVar5 < (int)uVar4) {
      iVar5 = (int)(((longlong)(int)uVar4 << 0x1f) / (longlong)iVar5);
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
  iVar3 = (int)(lVar1 >> 0x1f) + (vertex_a->projected_vertex).transformed_z;
  (vertex_out->projected_vertex).transformed_z = iVar3;
  (vertex_out->projected_vertex).transformed_y = iVar3;
  (vertex_out->projected_vertex).transformed_y = -iVar3;
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_x - (vertex_a->projected_vertex).transformed_x)
          * (longlong)iVar5;
  (vertex_out->projected_vertex).transformed_x =
       (int)(lVar1 >> 0x1f) + (vertex_a->projected_vertex).transformed_x;
  uVar2 = g_RenderStateFlags.bytes[0];
  (vertex_out->projected_vertex).screen_x = -1;
  if ((uVar2 & 4) == 0) {
    return;
  }
  lVar1 = (longlong)(vertex_b->r - vertex_a->r) * (longlong)iVar5;
  vertex_out->r = (int)(lVar1 >> 0x1f) + vertex_a->r;
  return;
}
