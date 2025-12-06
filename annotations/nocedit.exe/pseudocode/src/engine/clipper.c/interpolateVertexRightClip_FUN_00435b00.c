// Name: engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
// Address: 00435b00
// Address Range: [[00435b00, 00435bf2]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (v1->projected_vertex).transformed_x + (v1->projected_vertex).transformed_z;
  iVar5 = (uVar4 - (v2->projected_vertex).transformed_x) - (v2->projected_vertex).transformed_z;
  if ((int)uVar4 < iVar5) {
    if (uVar4 == -iVar5 || SBORROW /* signed borrow */4(uVar4,-iVar5) != (int)(uVar4 + iVar5) < 0) {
      iVar5 = -0x80000000;
    }
    else {
      iVar5 = (int)(CONCAT44 /* combine 2-byte values */((int)uVar4 >> 1,(uint)((uVar4 & 1) != 0) << 0x1f) / (longlong)iVar5);
    }
  }
  else {
    iVar5 = 0x7fffffff;
  }
  lVar2 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar5;
  uVar4 = (uint)lVar2;
  iVar3 = (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar3;
  (output->projected_vertex).transformed_x = iVar3;
  (output->projected_vertex).transformed_x = -iVar3;
  lVar2 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar5;
  uVar4 = (uint)lVar2;
  (output->projected_vertex).transformed_y =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
       (v1->projected_vertex).transformed_y;
  lVar2 = (longlong)((int)v2->light - (int)v1->light) * (longlong)iVar5;
  uVar4 = (uint)lVar2;
  output->light =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + (int)v1->light);
  lVar2 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar5;
  uVar4 = (uint)lVar2;
  output->w_recip =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + (int)v1->w_recip);
  lVar2 = (longlong)((int)v2->u - (int)v1->u) * (longlong)iVar5;
  uVar4 = (uint)lVar2;
  output->u = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + (int)v1->u);
  lVar2 = (longlong)((int)v2->v - (int)v1->v) * (longlong)iVar5;
  uVar4 = (uint)lVar2;
  fVar1 = v1->v;
  (output->projected_vertex).screen_x = -1;
  output->v = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + (int)fVar1);
  return;
}
