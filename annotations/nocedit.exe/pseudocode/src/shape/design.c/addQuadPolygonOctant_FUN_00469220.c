// Name: shape_design.c_addQuadPolygonOctant_FUN_00469220
// Address: 00469220
// Address Range: [[00469220, 00469419]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_addQuadPolygonOctant_FUN_00469220(uint vertex_index_1,uint vertex_index_2,uint vertex_index_3,uint vertex_index_4)

#include "nocturne.h"

void __cdecl shape_design_c_addQuadPolygonOctant_FUN_00469220(uint vertex_index_1,uint vertex_index_2,uint vertex_index_3,uint vertex_index_4)

{
  SShapeEditorPolygon *pSVar2;
  float local_20;
  float local_1c;
  int local_18;
  int iVar1;
  
  iVar1 = g_PolygonCount;
  pSVar2 = g_ModelPolygonData + g_PolygonCount;
  g_PolygonCount = g_PolygonCount + 1;
  pSVar2->polygon_type = 2;
  _sprintf(g_ModelPolygonData[iVar1].texture_name,"rustplat.raw");
  g_ModelPolygonData[iVar1].vertex_indices_count = 4;
  g_ModelPolygonData[iVar1].vertex_indices[0] = vertex_index_1;
  g_ModelPolygonData[iVar1].vertex_indices[1] = vertex_index_2;
  g_ModelPolygonData[iVar1].vertex_indices[2] = vertex_index_3;
  g_ModelPolygonData[iVar1].vertex_indices[3] = vertex_index_4;
  g_ModelPolygonData[iVar1].uv_u[0] =
       g_LoadedVertices[vertex_index_1].u * (float)256;
  g_ModelPolygonData[iVar1].uv_v[0] =
       g_LoadedVertices[vertex_index_1].v * (float)256;
  g_ModelPolygonData[iVar1].uv_u[1] =
       g_LoadedVertices[vertex_index_2].u * (float)256;
  g_ModelPolygonData[iVar1].uv_v[1] =
       g_LoadedVertices[vertex_index_2].v * (float)256;
  g_ModelPolygonData[iVar1].uv_u[2] =
       g_LoadedVertices[vertex_index_3].u * (float)256;
  g_ModelPolygonData[iVar1].uv_v[2] =
       g_LoadedVertices[vertex_index_3].v * (float)256;
  g_ModelPolygonData[iVar1].uv_u[3] =
       g_LoadedVertices[vertex_index_4].u * (float)256;
  g_ModelPolygonData[iVar1].uv_v[3] =
       g_LoadedVertices[vertex_index_4].v * (float)256;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    local_20 = pSVar2->uv_u[local_18];
    local_1c = pSVar2->uv_v[local_18];
    if ((int)local_20 < 0x40800000) {
      local_20 = 4.0;
    }
    if (0x437b0000 < (int)local_20) {
      local_20 = 251.0;
    }
    if ((int)local_1c < 0x40800000) {
      local_1c = 4.0;
    }
    if (0x437b0000 < (int)local_1c) {
      local_1c = 251.0;
    }
    pSVar2->uv_u[local_18] = local_20;
    pSVar2->uv_v[local_18] = local_1c;
  }
  return;
}
