// Name: engine_clipper.c_clipPolygonTopPlane_FUN_004362e0
// Address: 004362e0
// Address Range: [[004362e0, 0043640d]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonTopPlane_FUN_004362e0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonTopPlane_FUN_004362e0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)

{
  byte bVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *output;
  int iVar4;
  int iVar5;
  SRenderVertex *v1;
  int local_18;
  SRenderVertex **local_14;
  SRenderVertex *v2;
  int iVar1;
  
  iVar4 = 0;
  local_18 = 0;
  if (0 < vertex_count) {
    local_14 = input_vertices;
    iVar5 = iVar4;
    v1 = input_vertices[vertex_count + -1];
    do {
      iVar1 = g_ClipperTempCount;
      v2 = *local_14;
      bVar2 = (v1->projected_vertex).transformed_y <= -(v1->projected_vertex).transformed_z;
      if ((v2->projected_vertex).transformed_y <= -(v2->projected_vertex).transformed_z) {
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
          g_CurrentFilename = "..\\engine\\clipper.c";
          g_CurrentLineNumber = 0x5e;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
        }
        pSVar3 = g_ClipperTempBuffer + g_ClipperTempCount;
        iVar4 = iVar5 + 1;
        g_ClipperTempCount = g_ClipperTempCount + 1;
        output_vertices[iVar5] = pSVar3;
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(v2,v1,pSVar3);
        break;
      case 2:
        output_vertices[iVar5] = v1;
        if (0xb < iVar1) {
          g_CurrentFilename = "..\\engine\\clipper.c";
          g_CurrentLineNumber = 0x5e;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
        }
        output = g_ClipperTempBuffer + g_ClipperTempCount;
        iVar4 = iVar5 + 2;
        g_ClipperTempCount = g_ClipperTempCount + 1;
        output_vertices[iVar5 + 1] = output;
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(v1,v2,output);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      iVar5 = iVar4;
      v1 = v2;
    } while (local_18 < vertex_count);
  }
  return iVar4;
}
