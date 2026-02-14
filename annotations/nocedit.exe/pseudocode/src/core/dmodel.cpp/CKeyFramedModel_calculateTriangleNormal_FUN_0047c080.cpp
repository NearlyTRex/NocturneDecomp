// Name: core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
// Address: 0047c080
// Address Range: [[0047c080, 0047c213]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080(CKeyFramedModel *this_ptr,CVector3f *output_normal,int frame_index,int poly_index)

#include "nocturne.h"

CVector3f * __cdecl core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080(CKeyFramedModel *this_ptr,CVector3f *output_normal,int frame_index,int poly_index)

{
  CVector3i **ppCVar1;
  SMRGLPrimitiveQuad **ppSVar2;
  SMRGLPrimitiveQuad *pSVar3;
  CVector3i *pCVar4;
  CVector3i *pCVar5;
  CVector3i *pCVar6;
  CVector3i *pCVar7;
  CVector3i *pCVar8;
  CVector3i *pCVar9;
  CVector3i *pCVar10;
  CVector3i *pCVar11;
  CVector3i *pCVar12;
  CVector3i *pCVar13;
  CVector3i *pCVar14;
  CVector3i *pCVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  CVector3i **ppCVar20;
  
  ppSVar2 = this_ptr->poly_vert_list;
  iVar19 = frame_index * this_ptr->vertex_count;
  ppCVar20 = this_ptr->vertex_list;
  ppCVar1 = ppCVar20 + iVar19 * 3 + (int)ppSVar2[poly_index * 0x12 + 9] * 3;
  pSVar3 = ppSVar2[poly_index * 0x12 + 6];
  pCVar4 = *ppCVar1;
  pCVar5 = ppCVar20[iVar19 * 3 + (int)pSVar3 * 3];
  pCVar6 = ppCVar1[1];
  pCVar7 = ppCVar20[iVar19 * 3 + (int)pSVar3 * 3 + 1];
  pCVar8 = ppCVar1[2];
  pCVar9 = ppCVar20[iVar19 * 3 + (int)pSVar3 * 3 + 2];
  ppCVar20 = ppCVar20 + iVar19 * 3 + (int)ppSVar2[poly_index * 0x12 + 0xc] * 3;
  pCVar10 = *ppCVar1;
  pCVar11 = *ppCVar20;
  pCVar12 = ppCVar1[1];
  pCVar13 = ppCVar20[1];
  pCVar14 = ppCVar20[2];
  pCVar15 = ppCVar1[2];
  fVar16 = (float)((int)pCVar11 - (int)pCVar10) * (float)((int)pCVar8 - (int)pCVar9) -
           (float)((int)pCVar4 - (int)pCVar5) * (float)((int)pCVar14 - (int)pCVar15);
  output_normal->y = fVar16;
  fVar18 = (float)((int)pCVar6 - (int)pCVar7) * (float)((int)pCVar14 - (int)pCVar15) -
           (float)((int)pCVar13 - (int)pCVar12) * (float)((int)pCVar8 - (int)pCVar9);
  output_normal->x = fVar18;
  fVar17 = (float)((int)pCVar4 - (int)pCVar5) * (float)((int)pCVar13 - (int)pCVar12) -
           (float)((int)pCVar11 - (int)pCVar10) * (float)((int)pCVar6 - (int)pCVar7);
  output_normal->z = fVar17;
  fVar16 = SQRT(fVar17 * output_normal->z + fVar16 * output_normal->y + fVar18 * output_normal->x);
  if (0.0 < fVar16) {
    fVar16 = 1.0 / fVar16;
    output_normal->x = output_normal->x * fVar16;
    output_normal->y = output_normal->y * fVar16;
    output_normal->z = output_normal->z * fVar16;
    return output_normal;
  }
  output_normal->z = 0.0;
  output_normal->y = output_normal->z;
  output_normal->x = output_normal->y;
  return output_normal;
}
