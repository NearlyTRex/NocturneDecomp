// Name: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
// Address: 00437490
// Address Range: [[00437490, 004375b5]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

#include "nocturne.h"

void __cdecl engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (v1->projected_vertex).transformed_z;
  iVar2 = ((v2->projected_vertex).transformed_y + iVar3) -
          ((v1->projected_vertex).transformed_y + (v2->projected_vertex).transformed_z);
  uVar4 = iVar3 - (v1->projected_vertex).transformed_y;
  if ((int)uVar4 < iVar2) {
    if (-iVar2 < (int)uVar4) {
      iVar3 = (int)(CONCAT44((int)uVar4 >> 1,(uint)((uVar4 & 1) != 0) << 0x1f) / (longlong)iVar2);
    }
    else {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  lVar1 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar3;
  uVar4 = (uint)lVar1;
  iVar2 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar2;
  (output->projected_vertex).transformed_y = iVar2;
  lVar1 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar3;
  uVar4 = (uint)lVar1;
  iVar2 = (v1->projected_vertex).transformed_x;
  (output->projected_vertex).screen_x = -1;
  (output->projected_vertex).transformed_x =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + iVar2;
  lVar1 = (longlong)(v2->light - v1->light) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->light = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + v1->light;
  lVar1 = (longlong)(v2->color - v1->color) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->color = v1->color + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(v2->fog - v1->fog) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->fog = v1->fog + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(v2->u - v1->u) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->u = v1->u + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(v2->v - v1->v) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->v = v1->v + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->w_recip =
       (float)((int)v1->w_recip + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4));
  return;
}
