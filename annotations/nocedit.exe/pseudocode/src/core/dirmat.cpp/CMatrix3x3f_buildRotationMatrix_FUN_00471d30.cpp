// Name: core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
// Address: 00471d30
// Address Range: [[00471d30, 00471e08]]
// Convention: __cdecl
// Signature: void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)

#include "nocturne.h"

void __cdecl
core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
          (CMatrix3x3f *this_ptr,CVector3f *euler_angles)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar6 = (float10)fsin((float10)euler_angles->x);
  fVar7 = (float10)fsin((float10)euler_angles->z);
  fVar8 = (float10)fsin((float10)euler_angles->y);
  fVar9 = (float10)fcos((float10)euler_angles->x);
  fVar10 = (float10)fcos((float10)euler_angles->z);
  fVar11 = (float10)fcos((float10)euler_angles->y);
  fVar1 = (float)fVar8;
  fVar2 = (float)fVar6;
  fVar3 = (float)fVar7;
  fVar4 = (float)fVar10;
  fVar5 = (float)fVar11;
  this_ptr->m[0].z = (float)((float10)fVar1 * fVar9);
  this_ptr->m[1].z = -fVar2;
  this_ptr->m[1].x = (float)(fVar7 * fVar9);
  this_ptr->m[1].y = (float)(fVar10 * fVar9);
  this_ptr->m[2].z = (float)((float10)fVar5 * fVar9);
  this_ptr->m[0].x =
       (float)((float10)fVar5 * (float10)fVar4 + fVar8 * (float10)fVar2 * (float10)fVar3);
  this_ptr->m[0].y =
       (float)(-(float10)fVar5 * (float10)fVar3 + fVar8 * (float10)fVar2 * (float10)fVar4);
  this_ptr->m[2].y =
       (float)((float10)fVar3 * (float10)fVar1 + fVar11 * (float10)fVar2 * (float10)fVar4);
  this_ptr->m[2].x =
       (float)(-(float10)fVar1 * (float10)fVar4 + fVar11 * (float10)fVar2 * (float10)fVar3);
  return;
}
