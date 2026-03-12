// Name: core_xform.cpp_buildScaleMatrix_FUN_005f6e80
// Address: 005f6e80
// Address Range: [[005f6e80, 005f6ed6]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildScaleMatrix_FUN_005f6e80(CVector3f *scale_vector,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildScaleMatrix_FUN_005f6e80(CVector3f *scale_vector,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_38 [6];
  float local_10;
  
  local_38[0] = scale_vector->x;
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 0.0;
  local_38[5] = scale_vector->y;
  pfVar2 = local_38;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
