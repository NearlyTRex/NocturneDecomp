// Name: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
// Address: 0045f700
// Address Range: [[0045f700, 0045f76e]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700(CMatrix3x3f *this_ptr,CVector3f *input,CVector3f *output)

#include "nocturne.h"

CVector3f * __stack2_esi core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700(CMatrix3x3f *this_ptr,CVector3f *input,CVector3f *output)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = input->y;
  fVar2 = this_ptr->m[1].y;
  fVar3 = input->y;
  fVar4 = this_ptr->m[1].z;
  fVar5 = input->x;
  fVar6 = this_ptr->m[0].y;
  fVar7 = input->x;
  fVar8 = this_ptr->m[0].z;
  fVar9 = input->z;
  fVar10 = this_ptr->m[2].y;
  fVar11 = input->z;
  fVar12 = this_ptr->m[2].z;
  output->x = input->z * this_ptr->m[2].x +
              input->x * this_ptr->m[0].x + input->y * this_ptr->m[1].x;
  output->y = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2;
  output->z = fVar11 * fVar12 + fVar7 * fVar8 + fVar3 * fVar4;
  return output;
}
