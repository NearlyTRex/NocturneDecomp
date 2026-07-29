// Name: engine_clipper.c_interpolateVertexTopClip_FUN_00431830
// Address: 00431830
// Address Range: [[00431830, 0043192c]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_interpolateVertexTopClip_FUN_00431830(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

#include "nocturne.h"

void __cdecl engine_clipper_c_interpolateVertexTopClip_FUN_00431830(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (v1->projected_vertex).transformed_y + (v1->projected_vertex).transformed_z;
  iVar4 = uVar3 - ((v2->projected_vertex).transformed_y + (v2->projected_vertex).transformed_z);
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
  (output->projected_vertex).transformed_y = iVar2;
  (output->projected_vertex).transformed_y = -iVar2;
  lVar1 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar4;
  uVar3 = (uint)lVar1;
  (output->projected_vertex).transformed_x =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (v1->projected_vertex).transformed_x;
  lVar1 = (longlong)(v2->r - v1->r) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->r = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + v1->r;
  lVar1 = (longlong)(v2->a - v1->a) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->a = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + v1->a;
  lVar1 = (longlong)(v2->u - v1->u) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->u = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + v1->u;
  lVar1 = (longlong)(v2->v - v1->v) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar4 = v1->v;
  (output->projected_vertex).screen_x = -1;
  output->v = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + iVar4;
  return;
}
