// Name: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
// Address: 00461ee0
// Address Range: [[00461ee0, 00462048]]
// Convention: __cdecl
// Signature: double shape_design.c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon * polygon_ptr)

#include "nocturne.h"

double __cdecl
shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon *polygon_ptr)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  double dVar7;
  float afStackY_2034 [2021];
  float fVar8;
  float fStack_90;
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
  
  bVar6 = 0;
  local_28 = 0.0;
  local_14 = polygon_ptr->vertex_indices_count;
  for (local_18 = 0; local_18 < (int)local_14; local_18 = local_18 + 1) {
    pfVar3 = (float *)(polygon_ptr->vertex_indices[local_18 % (int)local_14] * 0x14 + 0x1626410 +
                      (uint)bVar6 * -8);
    local_50 = g_LoadedVertices[polygon_ptr->vertex_indices[local_18 % (int)local_14]].vertex.x;
    pfVar5 = local_4c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1;
    pfVar4 = pfVar3 + (uint)bVar6 * -2 + 1;
    local_4c[(uint)bVar6 * -2] = *pfVar3;
    *pfVar5 = *pfVar4;
    pfVar5[(uint)bVar6 * -2 + 1] = pfVar4[(uint)bVar6 * -2 + 1];
    (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pfVar3 = (float *)(polygon_ptr->vertex_indices[(local_18 + 1) % (int)local_14] * 0x14 +
                       0x1626410 + (uint)bVar6 * -8);
    local_3c = g_LoadedVertices[polygon_ptr->vertex_indices[(local_18 + 1) % (int)local_14]].vertex.
               x;
    pfVar5 = local_38 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1;
    pfVar4 = pfVar3 + (uint)bVar6 * -2 + 1;
    local_38[(uint)bVar6 * -2] = *pfVar3;
    *pfVar5 = *pfVar4;
    pfVar5[(uint)bVar6 * -2 + 1] = pfVar4[(uint)bVar6 * -2 + 1];
    (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    pfVar3 = (float *)(polygon_ptr->vertex_indices[(local_18 + 2) % (int)local_14] * 0x14 +
                       0x1626410 + (uint)bVar6 * -8);
    local_64 = g_LoadedVertices[polygon_ptr->vertex_indices[(local_18 + 2) % (int)local_14]].vertex.
               x;
    pfVar5 = local_60 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1;
    pfVar4 = pfVar3 + (uint)bVar6 * -2 + 1;
    local_60[(uint)bVar6 * -2] = *pfVar3;
    *pfVar5 = *pfVar4;
    pfVar5[(uint)bVar6 * -2 + 1] = pfVar4[(uint)bVar6 * -2 + 1];
    (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    fVar8 = SUB84 /* extract 2-byte value */((double)(local_50 - local_3c),0);
    fStack_90 = (float)((ulonglong)(double)(local_50 - local_3c) >> 0x20);
    fVar1 = local_4c[0] - local_38[0];
    fVar2 = local_4c[1] - local_38[1];
    local_7c = (double)(local_64 - local_3c);
    local_74 = (double)(local_60[0] - local_38[0]);
    local_6c = (double)(local_60[1] - local_38[1]);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&stack0xffffff6c);
    shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_7c);
    dVar7 = shape_design_c_clampedArccos_FUN_00461c50
                      ((double)CONCAT44 /* combine 2-byte values */(fVar8,(int)((ulonglong)
                                                    ((double)fVar2 * local_6c +
                                                    (double)CONCAT44 /* combine 2-byte values */(fStack_90,fVar8) * local_7c +
                                                    (double)fVar1 * local_74) >> 0x20)));
    local_28 = dVar7 + local_28;
  }
  return local_28 * 57.295779513079999;
}
