// Name: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
// Address: 00437360
// Address Range: [[00437360, 00437484]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

#include "nocturne.h"

void __cdecl engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (v1->projected_vertex).transformed_x + (v1->projected_vertex).transformed_z;
  iVar4 = (uVar3 - (v2->projected_vertex).transformed_x) - (v2->projected_vertex).transformed_z;
  if ((int)uVar3 < iVar4) {
    if (-iVar4 < (int)uVar3) {
      iVar4 = (int)(CONCAT44((int)uVar3 >> 1,(uint)((uVar3 & 1) != 0) << 0x1f) / (longlong)iVar4);
    }
    else {
      iVar4 = -0x80000000;
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
  (output->projected_vertex).transformed_x = iVar2;
  (output->projected_vertex).transformed_x = -iVar2;
  lVar1 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar2 = (v1->projected_vertex).transformed_y;
  (output->projected_vertex).screen_x = -1;
  (output->projected_vertex).transformed_y =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + iVar2;
  lVar1 = (longlong)(v2->z - v1->z) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->z = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + v1->z;
  lVar1 = (longlong)(v2->r - v1->r) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->r = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + v1->r;
  lVar1 = (longlong)(v2->g - v1->g) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->g = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + v1->g;
  lVar1 = (longlong)(v2->u - v1->u) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->u = v1->u + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3);
  lVar1 = (longlong)(v2->v - v1->v) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->v = v1->v + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3);
  lVar1 = (longlong)(v2->fog - v1->fog) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->fog = v1->fog + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3);
  return;
}
