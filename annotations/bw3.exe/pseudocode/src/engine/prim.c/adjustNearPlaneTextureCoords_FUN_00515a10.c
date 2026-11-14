// Name: engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10
// Address: 00515a10
// Address Range: [[00515a10, 00515a76]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < vertex_count) {
    do {
      iVar2 = (vertices->projected_vertex).transformed_z;
      if (iVar2 < 0x101) {
        iVar2 = 0x7fffffff;
      }
      else {
        iVar2 = (int)(0x7fffffff / (longlong)(iVar2 >> 4));
      }
      lVar1 = (longlong)iVar2 * (longlong)(vertices->u >> 8);
      vertices->u = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      lVar1 = (longlong)iVar2 * (longlong)(vertices->v >> 8);
      vertices->v = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = iVar3 + 1;
      (vertices->projected_vertex).transformed_z = iVar2;
      vertices = vertices + 1;
    } while (iVar3 < vertex_count);
  }
  return;
}
