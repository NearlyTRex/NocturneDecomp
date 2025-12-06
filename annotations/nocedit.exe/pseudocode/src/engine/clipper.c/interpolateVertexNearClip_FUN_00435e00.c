// Name: engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
// Address: 00435e00
// Address Range: [[00435e00, 00435f01]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z;
  uVar3 = g_NearPlaneDistance - (v1->projected_vertex).transformed_z;
  if ((int)uVar3 < iVar4) {
    if (uVar3 == -iVar4 || SBORROW /* signed borrow */4(uVar3,-iVar4) != (int)(uVar3 + iVar4) < 0) {
      iVar4 = -0x80000000;
    }
    else {
      iVar4 = (int)(CONCAT44 /* combine 2-byte values */((int)uVar3 >> 1,(uint)((uVar3 & 1) != 0) << 0x1f) / (longlong)iVar4);
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  lVar2 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  (output->projected_vertex).transformed_z =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (v1->projected_vertex).transformed_z;
  lVar2 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  (output->projected_vertex).transformed_y =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (v1->projected_vertex).transformed_y;
  lVar2 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  (output->projected_vertex).transformed_x =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (v1->projected_vertex).transformed_x;
  lVar2 = (longlong)((int)v2->light - (int)v1->light) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->light =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->light);
  lVar2 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->w_recip =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->w_recip);
  lVar2 = (longlong)((int)v2->u - (int)v1->u) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->u = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->u);
  lVar2 = (longlong)((int)v2->v - (int)v1->v) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  fVar1 = v1->v;
  (output->projected_vertex).screen_x = -1;
  output->v = (float)((int)fVar1 + (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  return;
}
