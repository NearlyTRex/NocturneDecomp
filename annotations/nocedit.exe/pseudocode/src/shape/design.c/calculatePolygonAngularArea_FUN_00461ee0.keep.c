// Name: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
// Address: 00461ee0
// MANUAL RECONSTRUCTION
// Address Range: [[00461ee0, 00462048] [006052a4, 00605318]]
// Convention: __cdecl
// Signature: double __cdecl shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon *polygon_ptr)

#include "nocturne.h"

double __cdecl shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon *polygon_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar5;
  CVector3d local_94;
  CVector3d local_7c;
  double local_28;
  int local_18;
  
  local_28 = 0.0;
  uVar1 = polygon_ptr->vertex_indices_count;
  for (local_18 = 0; local_18 < (int)uVar1; local_18 = local_18 + 1) {
    uVar2 = polygon_ptr->vertex_indices[local_18 % (int)uVar1];
    uVar3 = polygon_ptr->vertex_indices[(local_18 + 1) % (int)uVar1];
    fVar4 = g_LoadedVertices[uVar3].vertex.x;
    fVar5 = g_LoadedVertices[uVar3].vertex.y;
    fVar6 = g_LoadedVertices[uVar3].vertex.z;
    uVar3 = polygon_ptr->vertex_indices[(local_18 + 2) % (int)uVar1];
    local_94.x = (double)(g_LoadedVertices[uVar2].vertex.x - fVar4);
    local_94.y = (double)(g_LoadedVertices[uVar2].vertex.y - fVar5);
    local_94.z = (double)(g_LoadedVertices[uVar2].vertex.z - fVar6);
    local_7c.x = (double)(g_LoadedVertices[uVar3].vertex.x - fVar4);
    local_7c.y = (double)(g_LoadedVertices[uVar3].vertex.y - fVar5);
    local_7c.z = (double)(g_LoadedVertices[uVar3].vertex.z - fVar6);
    shape_design_c_normalizeVertex_FUN_00461e60(&local_94);
    shape_design_c_normalizeVertex_FUN_00461e60(&local_7c);
    dVar5 = shape_design_c_clampedArccos_FUN_00461c50
                      (local_94.z * local_7c.z + local_94.x * local_7c.x + local_94.y * local_7c.y);
    local_28 = dVar5 + local_28;
  }
  return local_28 * 57.295779513079999;
}
