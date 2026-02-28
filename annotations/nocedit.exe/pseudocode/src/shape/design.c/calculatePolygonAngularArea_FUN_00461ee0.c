// Name: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
// Address: 00461ee0
// Address Range: [[00461ee0, 00462048]]
// Convention: __cdecl
// Signature: double __cdecl shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon *polygon_ptr)

#include "nocturne.h"

double __cdecl shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon *polygon_ptr)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  double dVar5;
  float afStackY_2034 [2021];
  uint in_stack_ffffff64;
  uint uStack_98;
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
  local_14 = polygon_ptr->vertex_indices_count;
  for (local_18 = 0; local_18 < (int)local_14; local_18 = local_18 + 1) {
    pfVar1 = (float *)(polygon_ptr->vertex_indices[local_18 % (int)local_14] * 0x14 + 0x1626410 +
                      (uint)bVar4 * -8);
    local_50 = g_LoadedVertices[polygon_ptr->vertex_indices[local_18 % (int)local_14]].vertex.x;
    pfVar3 = local_4c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1;
    pfVar2 = pfVar1 + (uint)bVar4 * -2 + 1;
    local_4c[(uint)bVar4 * -2] = *pfVar1;
    *pfVar3 = *pfVar2;
    pfVar3[(uint)bVar4 * -2 + 1] = pfVar2[(uint)bVar4 * -2 + 1];
    (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    pfVar1 = (float *)(polygon_ptr->vertex_indices[(local_18 + 1) % (int)local_14] * 0x14 +
                       0x1626410 + (uint)bVar4 * -8);
    local_3c = g_LoadedVertices[polygon_ptr->vertex_indices[(local_18 + 1) % (int)local_14]].vertex.
               x;
    pfVar3 = local_38 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1;
    pfVar2 = pfVar1 + (uint)bVar4 * -2 + 1;
    local_38[(uint)bVar4 * -2] = *pfVar1;
    *pfVar3 = *pfVar2;
    pfVar3[(uint)bVar4 * -2 + 1] = pfVar2[(uint)bVar4 * -2 + 1];
    (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    pfVar1 = (float *)(polygon_ptr->vertex_indices[(local_18 + 2) % (int)local_14] * 0x14 +
                       0x1626410 + (uint)bVar4 * -8);
    local_64 = g_LoadedVertices[polygon_ptr->vertex_indices[(local_18 + 2) % (int)local_14]].vertex.
               x;
    pfVar3 = local_60 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1;
    pfVar2 = pfVar1 + (uint)bVar4 * -2 + 1;
    local_60[(uint)bVar4 * -2] = *pfVar1;
    *pfVar3 = *pfVar2;
    pfVar3[(uint)bVar4 * -2 + 1] = pfVar2[(uint)bVar4 * -2 + 1];
    (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    local_94 = (double)(local_50 - local_3c);
    local_8c = (double)(local_4c[0] - local_38[0]);
    local_84 = (double)(local_4c[1] - local_38[1]);
    local_7c = (double)(local_64 - local_3c);
    local_74 = (double)(local_60[0] - local_38[0]);
    local_6c = (double)(local_60[1] - local_38[1]);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_94);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_7c);
    dVar5 = shape_design_c_clampedArccos_FUN_00461c50
                      (__BITCAST_DOUBLE(CONCAT44(in_stack_ffffff64,
                                        (int)((ulonglong)
                                              (local_84 * local_6c +
                                              local_94 * local_7c + local_8c * local_74) >> 0x20))));
    in_stack_ffffff64 = SUB84(__BITCAST_UINT64(dVar5),0);
    uStack_98 = (uint)((ulonglong)dVar5 >> 0x20);
    local_28 = dVar5 + local_28;
  }
  return local_28 * 57.295779513079999;
}
