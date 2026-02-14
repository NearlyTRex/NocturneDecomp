// Name: core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
// Address: 005f7bc0
// Address Range: [[005f7bc0, 005f7c77]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

{
  longlong lVar1;
  byte uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (vertex_a->projected_vertex).transformed_z;
  iVar5 = ((vertex_b->projected_vertex).transformed_x + iVar4) -
          ((vertex_a->projected_vertex).transformed_x + (vertex_b->projected_vertex).transformed_z);
  uVar3 = iVar4 - (vertex_a->projected_vertex).transformed_x;
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
  uVar3 = (uint)lVar1;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
          (vertex_a->projected_vertex).transformed_z;
  (vertex_out->projected_vertex).transformed_z = iVar5;
  (vertex_out->projected_vertex).transformed_x = iVar5;
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_y - (vertex_a->projected_vertex).transformed_y)
          * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  (vertex_out->projected_vertex).transformed_y =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (vertex_a->projected_vertex).transformed_y;
  uVar2 = g_RenderStateFlags.bytes[0];
  (vertex_out->projected_vertex).screen_x = -1;
  if ((uVar2 & 4) == 0) {
    return;
  }
  lVar1 = (longlong)(vertex_b->light - vertex_a->light) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  vertex_out->light =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + vertex_a->light;
  return;
}
