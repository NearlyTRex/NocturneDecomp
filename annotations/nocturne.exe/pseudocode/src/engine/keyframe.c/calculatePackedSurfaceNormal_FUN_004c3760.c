// Name: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004c3760
// Address: 004c3760
// Address Range: [[004c3760, 004c391b]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760(CVector3i *vertex_data,SMRGLPrimitiveTriangleIndex *texture)

#include "nocturne.h"

void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760(CVector3i *vertex_data,SMRGLPrimitiveTriangleIndex *texture)

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
  double dVar12;
  double dVar13;
  double dVar14;
  float local_30;
  
  iVar2 = texture->vertices[0];
  pCVar1 = vertex_data + texture->vertices[1];
  iVar3 = texture->vertices[2];
  fVar10 = (float)(pCVar1->z - vertex_data[iVar2].z);
  fVar5 = (float)(vertex_data[iVar3].x - pCVar1->x);
  fVar9 = (float)(pCVar1->x - vertex_data[iVar2].x);
  fVar11 = (float)(vertex_data[iVar3].y - pCVar1->y);
  fVar7 = (float)(pCVar1->y - vertex_data[iVar2].y);
  fVar6 = (float)(vertex_data[iVar3].z - pCVar1->z);
  fVar8 = fVar7 * fVar6 - fVar11 * fVar10;
  fVar6 = fVar5 * fVar10 - fVar9 * fVar6;
  fVar5 = fVar9 * fVar11 - fVar5 * fVar7;
  local_30 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar8 * fVar8);
  if (ABS(local_30) == 0.0) {
    local_30 = 65535.0;
  }
  local_30 = 1.0 / local_30;
  iVar4 = texture->vertices[0];
  fVar9 = (float)65535;
  fVar7 = fVar8 * local_30 * fVar9;
  fVar6 = fVar6 * local_30 * fVar9;
  iVar2 = vertex_data[iVar4].y;
  iVar3 = vertex_data[iVar4].x;
  fVar9 = fVar5 * local_30 * fVar9;
  iVar4 = vertex_data[iVar4].z;
  dVar12 = round((double)fVar7);
  dVar13 = round((double)fVar6);
  dVar14 = round((double)fVar9);
  (texture->base).surface_normal.A.i = (int)ROUND(dVar12);
  (texture->base).surface_normal.B.i = (int)ROUND(dVar13);
  (texture->base).surface_normal.C.i = (int)ROUND(dVar14);
  dVar12 = round
                     ((double)((float)iVar4 * fVar9 + (float)iVar3 * fVar7 + (float)iVar2 * fVar6));
  (texture->base).surface_normal.D.i = (int)ROUND(dVar12);
  return;
}
