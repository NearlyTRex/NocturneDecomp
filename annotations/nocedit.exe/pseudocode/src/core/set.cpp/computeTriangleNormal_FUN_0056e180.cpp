// Name: core_set.cpp_computeTriangleNormal_FUN_0056e180
// Address: 0056e180
// Address Range: [[0056e180, 0056e2a3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_computeTriangleNormal_FUN_0056e180(CVector3i *vertex_array,SMRGLPrimitiveTriangle *triangle)

#include "nocturne.h"

void __cdecl core_set_cpp_computeTriangleNormal_FUN_0056e180(CVector3i *vertex_array,SMRGLPrimitiveTriangle *triangle)

{
  float fVar1;
  CVector3i *pCVar8;
  CVector3i *pCVar9;
  int iVar10;
  int iVar11;
  float fVar5;
  float fVar3;
  float fVar6;
  float fVar4;
  float fVar7;
  CVector3i *pCVar1;
  float fVar2;
  
  pCVar8 = vertex_array + triangle->vertices[1].vertex_index;
  pCVar1 = vertex_array + triangle->vertices[0].vertex_index;
  iVar10 = pCVar8->x - pCVar1->x;
  pCVar9 = vertex_array + triangle->vertices[2].vertex_index;
  iVar11 = pCVar9->x - pCVar8->x;
  fVar1 = (float)(pCVar8->z - pCVar1->z);
  fVar7 = (float)(pCVar8->y - pCVar1->y);
  fVar2 = (float)(pCVar9->z - pCVar8->z);
  fVar6 = (float)(pCVar9->y - pCVar8->y);
  fVar3 = fVar7 * fVar2 - fVar6 * fVar1;
  fVar5 = (float)iVar11 * fVar1 - (float)iVar10 * fVar2;
  fVar4 = (float)iVar10 * fVar6 - (float)iVar11 * fVar7;
  fVar1 = (float)(g_FastInvSqrtMagic - ((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) >> 1))
          * (float)65535;
  (triangle->base).surface_normal.A = (int)(fVar3 * fVar1);
  (triangle->base).surface_normal.B = (int)(fVar5 * fVar1);
  (triangle->base).surface_normal.C = (int)(fVar4 * fVar1);
  return;
}
