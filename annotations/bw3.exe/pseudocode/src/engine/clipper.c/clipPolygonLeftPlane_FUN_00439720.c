// Name: engine_clipper.c_clipPolygonLeftPlane_FUN_00439720
// Address: 00439720
// Address Range: [[00439720, 0043984b]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonLeftPlane_FUN_00439720(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonLeftPlane_FUN_00439720(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

{
  SRenderVertex *v2;
  int iVar1;
  byte bVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  int iVar5;
  SRenderVertex *v1;
  int iStack_18;
  SRenderVertex **ppSStack_14;
  
  iVar4 = 0;
  iStack_18 = 0;
  if (0 < vertex_count) {
    ppSStack_14 = input_vertices;
    iVar5 = iVar4;
    v1 = input_vertices[vertex_count + -1];
    do {
      iVar1 = g_INT_007e4d50;
      v2 = *ppSStack_14;
      bVar2 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((v2->projected_vertex).transformed_x <= -(v2->projected_vertex).transformed_z) {
        bVar2 = bVar2 | 2;
      }
      iVar4 = iVar5;
      switch(bVar2) {
      case 0:
        iVar4 = iVar5 + 1;
        output_vertices[iVar5] = v1;
        break;
      case 1:
        if (0xb < g_INT_007e4d50) {
          g_CHAR_PTR_01d71de0 = "..\\engine\\clipper.c";
          g_INT_01d71de4 = 0x5e;
          core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
        }
        pSVar3 = g_SRenderVertex_ARRAY_007e4b10 + g_INT_007e4d50;
        iVar4 = iVar5 + 1;
        g_INT_007e4d50 = g_INT_007e4d50 + 1;
        output_vertices[iVar5] = pSVar3;
        engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(v2,v1,pSVar3);
        break;
      case 2:
        output_vertices[iVar5] = v1;
        if (0xb < iVar1) {
          g_CHAR_PTR_01d71de0 = "..\\engine\\clipper.c";
          g_INT_01d71de4 = 0x5e;
          core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
        }
        pSVar3 = g_SRenderVertex_ARRAY_007e4b10 + g_INT_007e4d50;
        iVar4 = iVar5 + 2;
        g_INT_007e4d50 = g_INT_007e4d50 + 1;
        output_vertices[iVar5 + 1] = pSVar3;
        engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(v1,v2,pSVar3);
      }
      ppSStack_14 = ppSStack_14 + 1;
      iStack_18 = iStack_18 + 1;
      iVar5 = iVar4;
      v1 = v2;
    } while (iStack_18 < vertex_count);
  }
  return iVar4;
}
