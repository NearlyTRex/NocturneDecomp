// Name: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
// Address: 004375c0
// Address Range: [[004375c0, 004376e6]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (v1->projected_vertex).transformed_y + (v1->projected_vertex).transformed_z;
  iVar4 = uVar3 - ((v2->projected_vertex).transformed_y + (v2->projected_vertex).transformed_z);
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
  lVar1 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar2 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar2;
  (output->projected_vertex).transformed_y = iVar2;
  (output->projected_vertex).transformed_y = -iVar2;
  lVar1 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar2 = (v1->projected_vertex).transformed_x;
  (output->projected_vertex).screen_x = -1;
  (output->projected_vertex).transformed_x =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + iVar2;
  lVar1 = (longlong)((int)v2->light - (int)v1->light) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->light =
       (float)((int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->light);
  lVar1 = (longlong)(v2->color - v1->color) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->color = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + v1->color;
  lVar1 = (longlong)((int)v2->fog - (int)v1->fog) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->fog = (float)((int)v1->fog +
                       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  lVar1 = (longlong)((int)v2->u - (int)v1->u) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->u = (float)((int)v1->u + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  lVar1 = (longlong)((int)v2->v - (int)v1->v) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->v = (float)((int)v1->v + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  lVar1 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->w_recip =
       (float)((int)v1->w_recip + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  return;
}
