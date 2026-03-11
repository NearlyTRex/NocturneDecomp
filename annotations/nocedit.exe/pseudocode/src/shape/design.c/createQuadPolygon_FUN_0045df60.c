// Name: shape_design.c_createQuadPolygon_FUN_0045df60
// Address: 0045df60
// Address Range: [[0045df60, 0045e03f]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_createQuadPolygon_FUN_0045df60(uint vertex0,uint vertex1,uint vertex2,uint vertex3)

#include "nocturne.h"

void __cdecl shape_design_c_createQuadPolygon_FUN_0045df60(uint vertex0,uint vertex1,uint vertex2,uint vertex3)

{
  g_ModelPolygonData[g_PolygonCount].vertex_indices_count = 4;
  g_ModelPolygonData[g_PolygonCount].polygon_type = 1;
  g_ModelPolygonData[g_PolygonCount].texture_name[0] = '\0';
  g_ModelPolygonData[g_PolygonCount].part_assignment = g_CurrentPartIndex;
  g_ModelPolygonData[g_PolygonCount].material_id = g_EditorColorIndex;
  g_ModelPolygonData[g_PolygonCount].vertex_indices[0] = vertex0;
  g_ModelPolygonData[g_PolygonCount].vertex_indices[1] = vertex1;
  g_ModelPolygonData[g_PolygonCount].vertex_indices[2] = vertex2;
  g_ModelPolygonData[g_PolygonCount].vertex_indices[3] = vertex3;
  shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + g_PolygonCount);
  g_PolygonCount = g_PolygonCount + 1;
  return;
}
