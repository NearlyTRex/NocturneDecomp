// Name: engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
// Address: 00435c00
// Address Range: [[00435c00, 00435cf1]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

#include "nocturne.h"

void __cdecl engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (v1->projected_vertex).transformed_z;
  iVar4 = ((v2->projected_vertex).transformed_y + iVar3) -
          ((v1->projected_vertex).transformed_y + (v2->projected_vertex).transformed_z);
  uVar2 = iVar3 - (v1->projected_vertex).transformed_y;
  if ((int)uVar2 < iVar4) {
    if (-iVar4 < (int)uVar2) {
      iVar3 = (int)(CONCAT44((int)uVar2 >> 1,(uint)((uVar2 & 1) != 0) << 0x1f) / (longlong)iVar4);
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
  uVar2 = (uint)lVar1;
  iVar4 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar4;
  (output->projected_vertex).transformed_y = iVar4;
  lVar1 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar3;
  uVar2 = (uint)lVar1;
  (output->projected_vertex).transformed_x =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) +
       (v1->projected_vertex).transformed_x;
  lVar1 = (longlong)(v2->z - v1->z) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  output->z = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) + v1->z;
  lVar1 = (longlong)(v2->fog - v1->fog) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  output->fog = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) + v1->fog;
  lVar1 = (longlong)(v2->u - v1->u) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  output->u = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) + v1->u;
  lVar1 = (longlong)(v2->v - v1->v) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  iVar3 = v1->v;
  (output->projected_vertex).screen_x = -1;
  output->v = iVar3 + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2);
  return;
}
