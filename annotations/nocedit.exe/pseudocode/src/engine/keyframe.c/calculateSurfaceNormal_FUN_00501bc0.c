// Name: engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
// Address: 00501bc0
// Address Range: [[00501bc0, 00501d34]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(CVector3i *vertex_data,SMRGLPrimitiveTriangle *texture)

#include "nocturne.h"

void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(CVector3i *vertex_data,SMRGLPrimitiveTriangle *texture)

{
  int iVar1;
  int iVar5;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_20;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CVector3i *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pCVar1 = vertex_data + texture->vertices[1].vertex_index;
  iVar3 = texture->vertices[0].vertex_index;
  fVar9 = (float)(pCVar1->x - vertex_data[iVar3].x);
  fVar11 = (float)(pCVar1->y - vertex_data[iVar3].y);
  fVar5 = (float)(pCVar1->z - vertex_data[iVar3].z);
  iVar5 = texture->vertices[2].vertex_index;
  fVar7 = (float)(vertex_data[iVar5].z - pCVar1->z);
  fVar8 = (float)(vertex_data[iVar5].y - pCVar1->y);
  fVar6 = fVar11 * fVar7 - fVar8 * fVar5;
  fVar10 = (float)(vertex_data[iVar5].x - pCVar1->x);
  fVar12 = fVar10 * fVar5 - fVar9 * fVar7;
  fVar13 = fVar9 * fVar8 - fVar10 * fVar11;
  local_20 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar6 * fVar6);
  if (ABS(local_20) == 0.0) {
    local_20 = 65535.0;
  }
  fVar14 = 1.0 / local_20;
  fVar15 = (float)65535;
  fVar16 = fVar6 * fVar14 * fVar15;
  fVar12 = fVar12 * fVar14 * fVar15;
  fVar15 = fVar15 * fVar13 * fVar14;
  iVar4 = texture->vertices[0].vertex_index;
  iVar5 = vertex_data[iVar4].y;
  iVar2 = vertex_data[iVar4].x;
  iVar1 = vertex_data[iVar4].z;
  (texture->base).surface_normal.A.i = (int)ROUND(fVar16);
  (texture->base).surface_normal.B.i = (int)ROUND(fVar12);
  (texture->base).surface_normal.C.i = (int)ROUND(fVar15);
  (texture->base).surface_normal.D.i =
       (int)ROUND((float)iVar1 * fVar15 + (float)iVar2 * fVar16 + (float)iVar5 * fVar12);
  return;
}
