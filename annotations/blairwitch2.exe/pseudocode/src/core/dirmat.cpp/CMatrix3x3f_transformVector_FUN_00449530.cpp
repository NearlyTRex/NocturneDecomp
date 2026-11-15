// Name: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00449530
// Address: 00449530
// Address Range: [[00449530, 0044959e]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(CMatrix3x3f *this_ptr,CVector3f *input,CVector3f *output)

#include "nocturne.h"

CVector3f * __stack2_esi core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(CMatrix3x3f *this_ptr,CVector3f *input,CVector3f *output)

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
  fVar4 = this_ptr->m[2].y;
  fVar5 = input->x;
  fVar6 = this_ptr->m[1].x;
  fVar7 = input->x;
  fVar8 = this_ptr->m[2].x;
  fVar9 = input->z;
  fVar10 = this_ptr->m[1].z;
  fVar11 = input->z;
  fVar12 = this_ptr->m[2].z;
  output->x = input->z * this_ptr->m[0].z +
              input->x * this_ptr->m[0].x + input->y * this_ptr->m[0].y;
  output->y = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2;
  output->z = fVar11 * fVar12 + fVar7 * fVar8 + fVar3 * fVar4;
  return output;
}
