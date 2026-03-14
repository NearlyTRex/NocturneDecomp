// Name: engine_prim.c_normalizeTextureCoords_FUN_00552020
// Address: 00552020
// Address Range: [[00552020, 0055209e]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_normalizeTextureCoords_FUN_00552020(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_normalizeTextureCoords_FUN_00552020(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  
  iVar4 = 0x7fffffff;
  iVar2 = 0;
  pSVar3 = vertices;
  if (0 < vertex_count) {
    do {
      iVar1 = (pSVar3->projected_vertex).transformed_z;
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar2 < vertex_count);
  }
  iVar2 = 0;
  if (0 < vertex_count) {
    do {
      while (iVar1 = (vertices->projected_vertex).transformed_z, iVar1 != 0) {
        vertices->u = (int)(((longlong)vertices->u * (longlong)iVar4) / (longlong)iVar1);
        iVar1 = (vertices->projected_vertex).transformed_z;
        vertices->v = (int)(((longlong)vertices->v * (longlong)iVar4) /
                           (longlong)(vertices->projected_vertex).transformed_z);
        (vertices->projected_vertex).transformed_z =
             (int)((longlong)
                   ((((longlong)iVar4 & 0xffffffffffU) >> 8) << 0x20 |
                   (longlong)iVar4 * 0x1000000 & 0xffffffffU) / (longlong)iVar1);
        iVar2 = iVar2 + 1;
        vertices = vertices + 1;
        if (vertex_count <= iVar2) {
          return;
        }
      }
      iVar2 = iVar2 + 1;
      vertices = vertices + 1;
    } while (iVar2 < vertex_count);
  }
  return;
}
