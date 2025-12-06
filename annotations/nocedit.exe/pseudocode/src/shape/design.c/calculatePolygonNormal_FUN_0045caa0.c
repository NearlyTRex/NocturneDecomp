// Name: shape_design.c_calculatePolygonNormal_FUN_0045caa0
// Address: 0045caa0
// Address Range: [[0045caa0, 0045cc7a]]
// Convention: __cdecl
// Signature: void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)

#include "nocturne.h"

void __cdecl shape_design_c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon *polygon)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_28;
  
  dVar4 = (double)(g_LoadedVertices[polygon->vertex_indices[1]].vertex.x -
                  g_LoadedVertices[polygon->vertex_indices[0]].vertex.x);
  dVar5 = (double)(g_LoadedVertices[polygon->vertex_indices[1]].vertex.y -
                  g_LoadedVertices[polygon->vertex_indices[0]].vertex.y);
  dVar6 = (double)(g_LoadedVertices[polygon->vertex_indices[1]].vertex.z -
                  g_LoadedVertices[polygon->vertex_indices[0]].vertex.z);
  dVar7 = (double)(g_LoadedVertices[polygon->vertex_indices[2]].vertex.x -
                  g_LoadedVertices[polygon->vertex_indices[1]].vertex.x);
  dVar8 = (double)(g_LoadedVertices[polygon->vertex_indices[2]].vertex.y -
                  g_LoadedVertices[polygon->vertex_indices[1]].vertex.y);
  dVar9 = (double)(g_LoadedVertices[polygon->vertex_indices[2]].vertex.z -
                  g_LoadedVertices[polygon->vertex_indices[1]].vertex.z);
  dVar10 = dVar5 * dVar9 - dVar8 * dVar6;
  dVar6 = dVar7 * dVar6 - dVar4 * dVar9;
  dVar4 = dVar4 * dVar8 - dVar7 * dVar5;
  local_28 = SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar10 * dVar10);
  if ((((ulonglong)local_28 & 0x7fffffff00000000) == 0) && (local_28._0_4_ == 0)) {
    local_28 = 1.0;
  }
  fVar1 = g_LoadedVertices[polygon->vertex_indices[0]].vertex.y;
  fVar2 = g_LoadedVertices[polygon->vertex_indices[0]].vertex.x;
  fVar3 = g_LoadedVertices[polygon->vertex_indices[0]].vertex.z;
  (polygon->normal).x = (float)(dVar10 / local_28);
  (polygon->normal).y = (float)(dVar6 / local_28);
  (polygon->normal).z = (float)(dVar4 / local_28);
  polygon->plane_distance =
       fVar3 * (float)(dVar4 / local_28) +
       fVar2 * (float)(dVar10 / local_28) + fVar1 * (float)(dVar6 / local_28);
  return;
}
