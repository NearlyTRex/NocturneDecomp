// Name: engine_clipper.c_clipPolygonRightPlane_FUN_00431a50
// Address: 00431a50
// Address Range: [[00431a50, 00431b75]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_00431a50(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_00431a50(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

{
  SRenderVertex *v2;
  int iVar1;
  byte bVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  int iVar5;
  SRenderVertex *v1;
  int local_18;
  SRenderVertex **local_14;
  
  iVar4 = 0;
  local_18 = 0;
  if (0 < vertex_count) {
    local_14 = input_vertices;
    iVar5 = iVar4;
    v1 = input_vertices[vertex_count + -1];
    do {
      iVar1 = g_INT_00767b38;
      v2 = *local_14;
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
        if (0xb < g_INT_00767b38) {
          g_CurrentFilename = "..\\engine\\clipper.c";
          g_CurrentLineNumber = 94;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
        }
        pSVar3 = g_SRenderVertex_ARRAY_007678f8 + g_INT_00767b38;
        iVar4 = iVar5 + 1;
        g_INT_00767b38 = g_INT_00767b38 + 1;
        output_vertices[iVar5] = pSVar3;
        engine_clipper_c_interpolateVertexRightClip_FUN_00431530(v2,v1,pSVar3);
        break;
      case 2:
        output_vertices[iVar5] = v1;
        if (0xb < iVar1) {
          g_CurrentFilename = "..\\engine\\clipper.c";
          g_CurrentLineNumber = 94;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
        }
        pSVar3 = g_SRenderVertex_ARRAY_007678f8 + g_INT_00767b38;
        iVar4 = iVar5 + 2;
        g_INT_00767b38 = g_INT_00767b38 + 1;
        output_vertices[iVar5 + 1] = pSVar3;
        engine_clipper_c_interpolateVertexRightClip_FUN_00431530(v1,v2,pSVar3);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      iVar5 = iVar4;
      v1 = v2;
    } while (local_18 < vertex_count);
  }
  return iVar4;
}
