// Name: engine_clipper.c_clipPolygonRightPlane_FUN_0043b9d0
// Address: 0043b9d0
// Address Range: [[0043b9d0, 0043baf5]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_0043b9d0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_0043b9d0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

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
      iVar1 = g_ClipperTempCount;
      v2 = *ppSStack_14;
      bVar2 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if ((v2->projected_vertex).transformed_z <= (v2->projected_vertex).transformed_x) {
        bVar2 = bVar2 | 2;
      }
      iVar4 = iVar5;
      switch(bVar2) {
      case 0:
        iVar4 = iVar5 + 1;
        output_vertices[iVar5] = v1;
        break;
      case 1:
        if (0xb < g_ClipperTempCount) {
          g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
          g_INT_01d1d404 = 0x5e;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
        }
        pSVar3 = g_ClipperTempBuffer + g_ClipperTempCount;
        iVar4 = iVar5 + 1;
        g_ClipperTempCount = g_ClipperTempCount + 1;
        output_vertices[iVar5] = pSVar3;
        engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0(v2,v1,pSVar3);
        break;
      case 2:
        output_vertices[iVar5] = v1;
        if (0xb < iVar1) {
          g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
          g_INT_01d1d404 = 0x5e;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
        }
        pSVar3 = g_ClipperTempBuffer + g_ClipperTempCount;
        iVar4 = iVar5 + 2;
        g_ClipperTempCount = g_ClipperTempCount + 1;
        output_vertices[iVar5 + 1] = pSVar3;
        engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0(v1,v2,pSVar3);
      }
      ppSStack_14 = ppSStack_14 + 1;
      iStack_18 = iStack_18 + 1;
      iVar5 = iVar4;
      v1 = v2;
    } while (iStack_18 < vertex_count);
  }
  return iVar4;
}
