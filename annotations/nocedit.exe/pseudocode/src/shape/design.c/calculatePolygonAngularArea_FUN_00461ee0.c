// Name: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
// Address: 00461ee0
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
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  double dVar5;
  float afStackY_2034 [2020];
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  double local_74;
  double local_6c;
  float local_64;
  float local_60 [4];
  float local_50;
  float local_4c [4];
  float local_3c;
  float local_38 [4];
  double local_28;
  int local_18;
  uint local_14;
  
  local_28 = 0.0;
  uVar1 = polygon_ptr->vertex_indices_count;
  for (local_18 = 0; local_18 < (int)uVar1; local_18 = local_18 + 1) {
    uVar2 = polygon_ptr->vertex_indices[local_18 % (int)uVar1];
    uVar3 = polygon_ptr->vertex_indices[(local_18 + 1) % (int)uVar1];
    fVar4 = g_LoadedVertices[uVar3].vertex.x;
    fVar5 = g_LoadedVertices[uVar3].vertex.y;
    fVar6 = g_LoadedVertices[uVar3].vertex.z;
    uVar3 = polygon_ptr->vertex_indices[(local_18 + 2) % (int)uVar1];
    local_64 = g_LoadedVertices[uVar3].vertex.x;
    local_60[0] = g_LoadedVertices[uVar3].vertex.y;
    local_60[1] = g_LoadedVertices[uVar3].vertex.z;
    local_60[2] = g_LoadedVertices[uVar3].u;
    local_60[3] = g_LoadedVertices[uVar3].v;
    local_94 = (double)(g_LoadedVertices[uVar2].vertex.x - fVar4);
    local_8c = (double)(g_LoadedVertices[uVar2].vertex.y - fVar5);
    local_84 = (double)(g_LoadedVertices[uVar2].vertex.z - fVar6);
    local_7c = (double)(local_64 - fVar4);
    local_74 = (double)(local_60[0] - fVar5);
    local_6c = (double)(local_60[1] - fVar6);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_94);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_7c);
    dVar5 = shape_design_c_clampedArccos_FUN_00461c50
                      (local_84 * local_6c + local_94 * local_7c + local_8c * local_74);
    local_28 = dVar5 + local_28;
  }
  return local_28 * 57.295779513079999;
}
