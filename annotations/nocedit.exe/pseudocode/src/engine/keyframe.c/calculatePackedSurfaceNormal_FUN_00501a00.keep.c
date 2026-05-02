// Name: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
// Address: 00501a00
// MANUAL RECONSTRUCTION
// Address Range: [[00501a00, 00501bbb]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00(CVector3i *vertex_data,SMRGLPrimitiveTriangleIndex *texture)

#include "nocturne.h"

void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00(CVector3i *vertex_data,SMRGLPrimitiveTriangleIndex *texture)

{
  int iVar1;
  int iVar5;
  int iVar6;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_30;
  float fVar10;
  int iVar3;
  int iVar4;
  CVector3i *pCVar1;
  int iVar2;
  float fVar7;
  float fVar8;
  float fVar5;
  float fVar6;
  float fVar11;
  float fVar9;
  
  iVar2 = texture->vertices[0];
  pCVar1 = vertex_data + texture->vertices[1];
  iVar3 = texture->vertices[2];
  fVar10 = (float)(pCVar1->z - vertex_data[iVar2].z);
  fVar5 = (float)(vertex_data[iVar3].x - pCVar1->x);
  fVar9 = (float)(pCVar1->x - vertex_data[iVar2].x);
  fVar11 = (float)(vertex_data[iVar3].y - pCVar1->y);
  fVar7 = (float)(pCVar1->y - vertex_data[iVar2].y);
  fVar12 = (float)(vertex_data[iVar3].z - pCVar1->z);
  fVar8 = fVar7 * fVar12 - fVar11 * fVar10;
  fVar6 = fVar5 * fVar10 - fVar9 * fVar12;
  fVar12 = fVar9 * fVar11 - fVar5 * fVar7;
  local_30 = SQRT(fVar12 * fVar12 + fVar6 * fVar6 + fVar8 * fVar8);
  if (ABS(local_30) == 0.0) {
    local_30 = 65535.0;
  }
  fVar16 = 1.0 / local_30;
  iVar4 = texture->vertices[0];
  fVar14 = (float)65535;
  fVar13 = fVar8 * fVar16 * fVar14;
  fVar15 = fVar6 * fVar16 * fVar14;
  iVar1 = vertex_data[iVar4].y;
  iVar5 = vertex_data[iVar4].x;
  fVar14 = fVar12 * fVar16 * fVar14;
  iVar6 = vertex_data[iVar4].z;
  (texture->base).surface_normal.A.i = (int)ROUND(ROUND(fVar13));
  (texture->base).surface_normal.B.i = (int)ROUND(ROUND(fVar15));
  (texture->base).surface_normal.C.i = (int)ROUND(ROUND(fVar14));
  (texture->base).surface_normal.D.i =
       (int)ROUND(ROUND((float)iVar6 * fVar14 + (float)iVar5 * fVar13 + (float)iVar1 * fVar15));
  return;
}
