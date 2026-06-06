// Name: engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
// Address: 00435a00
// MANUAL RECONSTRUCTION
// Address Range: [[00435a00, 00435af1]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

#include "nocturne.h"

void __cdecl engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (v1->projected_vertex).transformed_z;
  iVar4 = ((v2->projected_vertex).transformed_x + iVar3) -
          ((v1->projected_vertex).transformed_x + (v2->projected_vertex).transformed_z);
  uVar2 = iVar3 - (v1->projected_vertex).transformed_x;
  if ((int)uVar2 < iVar4) {
    if (-iVar4 < (int)uVar2) {
      iVar3 = (int)(((longlong)(int)uVar2 << 0x1f) / (longlong)iVar4);
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
  iVar4 = (int)(lVar1 >> 0x1f) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar4;
  (output->projected_vertex).transformed_x = iVar4;
  lVar1 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar3;
  (output->projected_vertex).transformed_y =
       (int)(lVar1 >> 0x1f) +
       (v1->projected_vertex).transformed_y;
  lVar1 = (longlong)(v2->u - v1->u) * (longlong)iVar3;
  output->u = (int)(lVar1 >> 0x1f) + v1->u;
  lVar1 = (longlong)(v2->v - v1->v) * (longlong)iVar3;
  output->v = (int)(lVar1 >> 0x1f) + v1->v;
  lVar1 = (longlong)(v2->r - v1->r) * (longlong)iVar3;
  output->r = (int)(lVar1 >> 0x1f) + v1->r;
  lVar1 = (longlong)(v2->a - v1->a) * (longlong)iVar3;
  iVar3 = v1->a;
  (output->projected_vertex).screen_x = -1;
  output->a = iVar3 + (int)(lVar1 >> 0x1f);
  return;
}
