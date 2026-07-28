// Name: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00
// Address: 00433a00
// Address Range: [[00433a00, 00433b25]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

#include "nocturne.h"

void __cdecl engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

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
  lVar1 = (longlong)(v2->r - v1->r) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->r = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + v1->r;
  lVar1 = (longlong)(v2->g - v1->g) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->g = v1->g + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(v2->b - v1->b) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->b = v1->b + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(v2->u - v1->u) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->u = v1->u + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(v2->v - v1->v) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->v = v1->v + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(v2->a - v1->a) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->a = v1->a + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  return;
}
