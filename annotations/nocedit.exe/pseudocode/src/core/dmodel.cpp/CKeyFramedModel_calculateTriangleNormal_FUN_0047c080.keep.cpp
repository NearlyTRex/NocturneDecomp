// Name: core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
// Address: 0047c080
// MANUAL RECONSTRUCTION
// Address Range: [[0047c080, 0047c213]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080(CKeyFramedModel *this_ptr,CVector3f *output_normal,int frame_index,int poly_index)

#include "nocturne.h"

CVector3f * __cdecl core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080(CKeyFramedModel *this_ptr,CVector3f *output_normal,int frame_index,int poly_index)

{
  float fVar1;
  int iVar12;
  CVector3i *pCVar13;
  SMRGLPrimitiveQuad *pSVar2;
  float fVar9;
  float fVar8;
  float fVar7;
  float fVar6;
  float fVar11;
  CVector3i *pCVar1;
  float fVar5;
  int iVar4;
  CVector3i *pCVar3;
  float fVar10;
  
  pSVar2 = this_ptr->poly_vert_list;
  iVar12 = frame_index * this_ptr->vertex_count;
  pCVar3 = this_ptr->vertex_list;
  pCVar1 = pCVar3 + iVar12 + pSVar2[poly_index].vertices[1].vertex_index;
  iVar4 = pSVar2[poly_index].vertices[0].vertex_index;
  pCVar13 = pCVar3 + iVar12 + pSVar2[poly_index].vertices[2].vertex_index;
  fVar5 = (float)(pCVar1->z - pCVar3[iVar12 + iVar4].z);
  fVar10 = (float)(pCVar13->x - pCVar1->x);
  fVar8 = (float)(pCVar1->x - pCVar3[iVar12 + iVar4].x);
  fVar11 = (float)(pCVar13->y - pCVar1->y);
  fVar9 = (float)(pCVar1->y - pCVar3[iVar12 + iVar4].y);
  fVar1 = (float)(pCVar13->z - pCVar1->z);
  fVar6 = fVar10 * fVar5 - fVar8 * fVar1;
  output_normal->y = fVar6;
  fVar7 = fVar9 * fVar1 - fVar11 * fVar5;
  output_normal->x = fVar7;
  fVar1 = fVar8 * fVar11 - fVar10 * fVar9;
  output_normal->z = fVar1;
  fVar1 = SQRT(fVar1 * output_normal->z + fVar6 * output_normal->y + fVar7 * output_normal->x);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    output_normal->x = output_normal->x * fVar1;
    output_normal->y = output_normal->y * fVar1;
    output_normal->z = output_normal->z * fVar1;
    return output_normal;
  }
  memset(output_normal, 0, sizeof(CVector3f));
  return output_normal;
}
