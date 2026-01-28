// Name: core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
// Address: 005f7e00
// Address Range: [[005f7e00, 005f7eb8]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00 (SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

#include "nocturne.h"

void __cdecl
core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
          (SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (vertex_a->projected_vertex).transformed_y + (vertex_a->projected_vertex).transformed_z;
  iVar5 = uVar4 - ((vertex_b->projected_vertex).transformed_y +
                  (vertex_b->projected_vertex).transformed_z);
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
  (vertex_out->projected_vertex).transformed_y = iVar3;
  (vertex_out->projected_vertex).transformed_y = -iVar3;
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_x - (vertex_a->projected_vertex).transformed_x)
          * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  (vertex_out->projected_vertex).transformed_x =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
       (vertex_a->projected_vertex).transformed_x;
  bVar2 = (byte)g_RenderStateFlags;
  (vertex_out->projected_vertex).screen_x = -1;
  if ((bVar2 & 4) == 0) {
    return;
  }
  lVar1 = (longlong)((int)vertex_b->light - (int)vertex_a->light) * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  vertex_out->light =
       (float)((int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
              (int)vertex_a->light);
  return;
}
