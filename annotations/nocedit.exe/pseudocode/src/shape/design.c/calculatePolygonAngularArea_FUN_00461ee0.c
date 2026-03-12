// Name: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
// Address: 00461ee0
// Address Range: [[00461ee0, 00462048]]
// Convention: __cdecl
// Signature: double __cdecl shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon *polygon_ptr)

#include "nocturne.h"

double __cdecl shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon *polygon_ptr)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar1;
  float *pfVar2;
  float *pfVar4;
  float *pfVar5;
  float *pfVar3;
  float *pfVar6;
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
  
  bVar4 = 0;
  local_28 = 0.0;
  uVar3 = polygon_ptr->vertex_indices_count;
  for (local_18 = 0; local_18 < (int)uVar3; local_18 = local_18 + 1) {
    pfVar1 = (float *)(polygon_ptr->vertex_indices[local_18 % (int)uVar3] * 0x14 + 0x1626410 +
                      (uint)bVar4 * -8);
    fVar1 = g_LoadedVertices[polygon_ptr->vertex_indices[local_18 % (int)uVar3]].vertex.x;
    pfVar3 = local_4c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1;
    pfVar2 = pfVar1 + (uint)bVar4 * -2 + 1;
    local_4c[(uint)bVar4 * -2] = *pfVar1;
    *pfVar3 = *pfVar2;
    pfVar3[(uint)bVar4 * -2 + 1] = pfVar2[(uint)bVar4 * -2 + 1];
    (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    pfVar4 = (float *)(polygon_ptr->vertex_indices[(local_18 + 1) % (int)uVar3] * 0x14 + 0x1626410 +
                      (uint)bVar4 * -8);
    fVar2 = g_LoadedVertices[polygon_ptr->vertex_indices[(local_18 + 1) % (int)uVar3]].vertex.x;
    pfVar6 = local_38 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1;
    pfVar5 = pfVar4 + (uint)bVar4 * -2 + 1;
    local_38[(uint)bVar4 * -2] = *pfVar4;
    *pfVar6 = *pfVar5;
    pfVar6[(uint)bVar4 * -2 + 1] = pfVar5[(uint)bVar4 * -2 + 1];
    (pfVar6 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (pfVar5 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    pfVar4 = (float *)(polygon_ptr->vertex_indices[(local_18 + 2) % (int)uVar3] * 0x14 + 0x1626410 +
                      (uint)bVar4 * -8);
    local_64 = g_LoadedVertices[polygon_ptr->vertex_indices[(local_18 + 2) % (int)uVar3]].vertex.x;
    pfVar6 = local_60 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1;
    pfVar5 = pfVar4 + (uint)bVar4 * -2 + 1;
    local_60[(uint)bVar4 * -2] = *pfVar4;
    *pfVar6 = *pfVar5;
    pfVar6[(uint)bVar4 * -2 + 1] = pfVar5[(uint)bVar4 * -2 + 1];
    (pfVar6 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (pfVar5 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    local_94 = (double)(fVar1 - fVar2);
    local_8c = (double)(local_4c[0] - local_38[0]);
    local_84 = (double)(local_4c[1] - local_38[1]);
    local_7c = (double)(local_64 - fVar2);
    local_74 = (double)(local_60[0] - local_38[0]);
    local_6c = (double)(local_60[1] - local_38[1]);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_94);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_7c);
    dVar5 = shape_design_c_clampedArccos_FUN_00461c50
                      (local_84 * local_6c + local_94 * local_7c + local_8c * local_74);
    local_28 = dVar5 + local_28;
  }
  return local_28 * 57.295779513079999;
}
