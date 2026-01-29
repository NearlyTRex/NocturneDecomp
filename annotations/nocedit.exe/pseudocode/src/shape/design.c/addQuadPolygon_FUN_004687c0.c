// Name: shape_design.c_addQuadPolygon_FUN_004687c0
// Address: 004687c0
// Address Range: [[004687c0, 0046890f]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_addQuadPolygon_FUN_004687c0 (int vertex_index_0,int vertex_index_1,int vertex_index_2,int vertex_index_3)

#include "nocturne.h"

void __cdecl
shape_design_c_addQuadPolygon_FUN_004687c0
          (int vertex_index_0,int vertex_index_1,int vertex_index_2,int vertex_index_3)

{
  int iVar1;
  SShapeEditorPolygon *pSVar2;
  
  iVar1 = g_PolygonCount;
  pSVar2 = g_ModelPolygonData + g_PolygonCount;
  g_PolygonCount = g_PolygonCount + 1;
  pSVar2->polygon_type = 2;
  sprintf(g_ModelPolygonData[iVar1].texture_name,"rustplat.raw");
  g_ModelPolygonData[iVar1].vertex_indices_count = 4;
  g_ModelPolygonData[iVar1].vertex_indices[0] = vertex_index_0;
  g_ModelPolygonData[iVar1].vertex_indices[1] = vertex_index_1;
  g_ModelPolygonData[iVar1].vertex_indices[2] = vertex_index_2;
  g_ModelPolygonData[iVar1].vertex_indices[3] = vertex_index_3;
  g_ModelPolygonData[iVar1].uv_u[0] = g_LoadedVertices[vertex_index_0].u * (float)256;
  g_ModelPolygonData[iVar1].uv_v[0] = g_LoadedVertices[vertex_index_0].v * (float)256;
  g_ModelPolygonData[iVar1].uv_u[1] = g_LoadedVertices[vertex_index_1].u * (float)256;
  g_ModelPolygonData[iVar1].uv_v[1] = g_LoadedVertices[vertex_index_1].v * (float)256;
  g_ModelPolygonData[iVar1].uv_u[2] = g_LoadedVertices[vertex_index_2].u * (float)256;
  g_ModelPolygonData[iVar1].uv_v[2] = g_LoadedVertices[vertex_index_2].v * (float)256;
  g_ModelPolygonData[iVar1].uv_u[3] = g_LoadedVertices[vertex_index_3].u * (float)256;
  g_ModelPolygonData[iVar1].uv_v[3] = g_LoadedVertices[vertex_index_3].v * (float)256;
  return;
}
