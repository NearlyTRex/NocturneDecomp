// Name: engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
// Address: 00435a00
// Address Range: [[00435a00, 00435af1]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (v1->projected_vertex).transformed_z;
  iVar5 = ((v2->projected_vertex).transformed_x + iVar4) -
          ((v1->projected_vertex).transformed_x + (v2->projected_vertex).transformed_z);
  uVar3 = iVar4 - (v1->projected_vertex).transformed_x;
  if ((int)uVar3 < iVar5) {
    if (uVar3 == -iVar5 || SBORROW /* signed borrow */4(uVar3,-iVar5) != (int)(uVar3 + iVar5) < 0) {
      iVar4 = -0x80000000;
    }
    else {
      iVar4 = (int)(CONCAT44 /* combine 2-byte values */((int)uVar3 >> 1,(uint)((uVar3 & 1) != 0) << 0x1f) / (longlong)iVar5);
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  lVar2 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  iVar5 = (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar5;
  (output->projected_vertex).transformed_x = iVar5;
  lVar2 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  (output->projected_vertex).transformed_y =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (v1->projected_vertex).transformed_y;
  lVar2 = (longlong)((int)v2->u - (int)v1->u) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->u = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->u);
  lVar2 = (longlong)((int)v2->v - (int)v1->v) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->v = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->v);
  lVar2 = (longlong)((int)v2->light - (int)v1->light) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->light =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->light);
  lVar2 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  fVar1 = v1->w_recip;
  (output->projected_vertex).screen_x = -1;
  output->w_recip =
       (float)((int)fVar1 + (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  return;
}
