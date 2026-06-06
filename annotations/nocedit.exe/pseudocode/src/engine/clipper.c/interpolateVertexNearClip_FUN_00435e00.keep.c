// Name: engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
// Address: 00435e00
// MANUAL RECONSTRUCTION
// Address Range: [[00435e00, 00435f01]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

#include "nocturne.h"

void __cdecl engine_clipper_c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z;
  uVar2 = g_NearPlaneDistance - (v1->projected_vertex).transformed_z;
  if ((int)uVar2 < iVar3) {
    if (-iVar3 < (int)uVar2) {
      iVar3 = (int)(((longlong)(int)uVar2 << 0x1f) / (longlong)iVar3);
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
  (output->projected_vertex).transformed_z =
       (int)(lVar1 >> 0x1f) +
       (v1->projected_vertex).transformed_z;
  lVar1 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar3;
  (output->projected_vertex).transformed_y =
       (int)(lVar1 >> 0x1f) +
       (v1->projected_vertex).transformed_y;
  lVar1 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar3;
  (output->projected_vertex).transformed_x =
       (int)(lVar1 >> 0x1f) +
       (v1->projected_vertex).transformed_x;
  lVar1 = (longlong)(v2->r - v1->r) * (longlong)iVar3;
  output->r = (int)(lVar1 >> 0x1f) + v1->r;
  lVar1 = (longlong)(v2->a - v1->a) * (longlong)iVar3;
  output->a = (int)(lVar1 >> 0x1f) + v1->a;
  lVar1 = (longlong)(v2->u - v1->u) * (longlong)iVar3;
  output->u = (int)(lVar1 >> 0x1f) + v1->u;
  lVar1 = (longlong)(v2->v - v1->v) * (longlong)iVar3;
  iVar3 = v1->v;
  (output->projected_vertex).screen_x = -1;
  output->v = iVar3 + (int)(lVar1 >> 0x1f);
  return;
}
