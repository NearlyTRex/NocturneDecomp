// Name: core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540
// Address: 00472540
// Address Range: [[00472540, 00472674]]
// Convention: __cdecl
// Signature: CMatrix3x3f * core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540(CMatrix3x3f * this_ptr, CMatrix3x3f * matrix_a, CMatrix3x3f * matrix_b)

#include "nocturne.h"

CMatrix3x3f * __cdecl
core_dirmat_cpp_CMatrix3x3f_multiply_FUN_00472540
          (CMatrix3x3f *this_ptr,CMatrix3x3f *matrix_a,CMatrix3x3f *matrix_b)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_30[1] = this_ptr->m[0].z * matrix_a->m[2].y +
                this_ptr->m[0].x * matrix_a->m[0].y + this_ptr->m[0].y * matrix_a->m[1].y;
  local_30[2] = this_ptr->m[0].z * matrix_a->m[2].z +
                this_ptr->m[0].x * matrix_a->m[0].z + this_ptr->m[0].y * matrix_a->m[1].z;
  local_30[3] = this_ptr->m[1].z * matrix_a->m[2].x +
                this_ptr->m[1].x * matrix_a->m[0].x + this_ptr->m[1].y * matrix_a->m[1].x;
  local_20 = this_ptr->m[1].z * matrix_a->m[2].y +
             this_ptr->m[1].y * matrix_a->m[1].y + this_ptr->m[1].x * matrix_a->m[0].y;
  local_1c = this_ptr->m[1].z * matrix_a->m[2].z +
             this_ptr->m[1].y * matrix_a->m[1].z + this_ptr->m[1].x * matrix_a->m[0].z;
  local_18 = this_ptr->m[2].z * matrix_a->m[2].x +
             this_ptr->m[2].x * matrix_a->m[0].x + this_ptr->m[2].y * matrix_a->m[1].x;
  local_14 = this_ptr->m[2].z * matrix_a->m[2].y +
             this_ptr->m[2].y * matrix_a->m[1].y + this_ptr->m[2].x * matrix_a->m[0].y;
  local_10 = this_ptr->m[2].z * matrix_a->m[2].z +
             this_ptr->m[2].y * matrix_a->m[1].z + this_ptr->m[2].x * matrix_a->m[0].z;
  local_30[0] = this_ptr->m[0].z * matrix_a->m[2].x +
                this_ptr->m[0].x * matrix_a->m[0].x + this_ptr->m[0].y * matrix_a->m[1].x;
  pfVar2 = local_30;
  pfVar3 = unaff_ESI;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return (CMatrix3x3f *)unaff_ESI;
}
