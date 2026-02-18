// Name: engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
// Address: 00501bc0
// Address Range: [[00501bc0, 00501d34]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(CVector3i *vertex_data,SMRGLPrimitiveTriangle *texture)

#include "nocturne.h"

void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(CVector3i *vertex_data,SMRGLPrimitiveTriangle *texture)

{
  CVector3i *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_20;
  
  pCVar1 = vertex_data + texture->vertices[1].vertex_index;
  iVar3 = texture->vertices[0].vertex_index;
  fVar9 = (float)(pCVar1->x - vertex_data[iVar3].x);
  fVar11 = (float)(pCVar1->y - vertex_data[iVar3].y);
  fVar5 = (float)(pCVar1->z - vertex_data[iVar3].z);
  iVar3 = texture->vertices[2].vertex_index;
  fVar7 = (float)(vertex_data[iVar3].z - pCVar1->z);
  fVar8 = (float)(vertex_data[iVar3].y - pCVar1->y);
  fVar6 = fVar11 * fVar7 - fVar8 * fVar5;
  fVar10 = (float)(vertex_data[iVar3].x - pCVar1->x);
  fVar5 = fVar10 * fVar5 - fVar9 * fVar7;
  fVar7 = fVar9 * fVar8 - fVar10 * fVar11;
  local_20 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
  if (ABS(local_20) == 0.0) {
    local_20 = 65535.0;
  }
  local_20 = 1.0 / local_20;
  fVar8 = (float)65535;
  fVar6 = fVar6 * local_20 * fVar8;
  fVar5 = fVar5 * local_20 * fVar8;
  fVar8 = fVar8 * fVar7 * local_20;
  iVar4 = texture->vertices[0].vertex_index;
  iVar3 = vertex_data[iVar4].y;
  iVar2 = vertex_data[iVar4].x;
  iVar4 = vertex_data[iVar4].z;
  (texture->base).surface_normal.A = (int)ROUND(fVar6);
  (texture->base).surface_normal.B = (int)ROUND(fVar5);
  (texture->base).surface_normal.C = (int)ROUND(fVar8);
  (texture->base).surface_normal.D =
       (int)ROUND((float)iVar4 * fVar8 + (float)iVar2 * fVar6 + (float)iVar3 * fVar5);
  return;
}
