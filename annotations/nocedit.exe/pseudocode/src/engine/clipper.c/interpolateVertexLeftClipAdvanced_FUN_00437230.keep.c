// Name: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
// Address: 00437230
// MANUAL RECONSTRUCTION
// Address Range: [[00437230, 00437355]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

#include "nocturne.h"

void __cdecl engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (v1->projected_vertex).transformed_z;
  iVar2 = ((v2->projected_vertex).transformed_x + iVar3) -
          ((v1->projected_vertex).transformed_x + (v2->projected_vertex).transformed_z);
  uVar4 = iVar3 - (v1->projected_vertex).transformed_x;
  if ((int)uVar4 < iVar2) {
    if (-iVar2 < (int)uVar4) {
      iVar3 = (int)(((longlong)(int)uVar4 << 0x1f) / (longlong)iVar2);
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
  iVar2 = (int)(lVar1 >> 0x1f) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar2;
  (output->projected_vertex).transformed_x = iVar2;
  lVar1 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar3;
  iVar2 = (v1->projected_vertex).transformed_y;
  (output->projected_vertex).screen_x = -1;
  (output->projected_vertex).transformed_y =
       (int)(lVar1 >> 0x1f) + iVar2;
  lVar1 = (longlong)(v2->r - v1->r) * (longlong)iVar3;
  output->r = (int)(lVar1 >> 0x1f) + v1->r;
  lVar1 = (longlong)(v2->g - v1->g) * (longlong)iVar3;
  output->g = v1->g + (int)(lVar1 >> 0x1f);
  lVar1 = (longlong)(v2->b - v1->b) * (longlong)iVar3;
  output->b = v1->b + (int)(lVar1 >> 0x1f);
  lVar1 = (longlong)(v2->u - v1->u) * (longlong)iVar3;
  output->u = v1->u + (int)(lVar1 >> 0x1f);
  lVar1 = (longlong)(v2->v - v1->v) * (longlong)iVar3;
  output->v = v1->v + (int)(lVar1 >> 0x1f);
  lVar1 = (longlong)(v2->a - v1->a) * (longlong)iVar3;
  output->a = v1->a + (int)(lVar1 >> 0x1f);
  return;
}
