// Name: core_set.cpp_computeTriangleNormal_FUN_0050bbc0
// Address: 0050bbc0
// Address Range: [[0050bbc0, 0050bce3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_computeTriangleNormal_FUN_0050bbc0(CVector3i *vertex_array,SMRGLPrimitiveTriangle *triangle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_computeTriangleNormal_FUN_0050bbc0(CVector3i *vertex_array,SMRGLPrimitiveTriangle *triangle)

{
  CVector3i *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CVector3i *pCVar8;
  CVector3i *pCVar9;
  int iVar10;
  int iVar11;
  
  pCVar8 = vertex_array + triangle->vertices[1].vertex_index;
  pCVar1 = vertex_array + triangle->vertices[0].vertex_index;
  iVar10 = pCVar8->x - pCVar1->x;
  pCVar9 = vertex_array + triangle->vertices[2].vertex_index;
  iVar11 = pCVar9->x - pCVar8->x;
  fVar4 = (float)(pCVar8->z - pCVar1->z);
  fVar7 = (float)(pCVar8->y - pCVar1->y);
  fVar2 = (float)(pCVar9->z - pCVar8->z);
  fVar6 = (float)(pCVar9->y - pCVar8->y);
  fVar3 = fVar7 * fVar2 - fVar6 * fVar4;
  fVar5 = (float)iVar11 * fVar4 - (float)iVar10 * fVar2;
  fVar4 = (float)iVar10 * fVar6 - (float)iVar11 * fVar7;
  fVar2 = (float)((int)CVector3f_01c70708.z -
                 ((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) >> 1)) * (float)_DAT_0059063a
  ;
  (triangle->base).surface_normal.A.f = fVar3 * fVar2;
  (triangle->base).surface_normal.B.f = fVar5 * fVar2;
  (triangle->base).surface_normal.C.f = fVar4 * fVar2;
  return;
}
