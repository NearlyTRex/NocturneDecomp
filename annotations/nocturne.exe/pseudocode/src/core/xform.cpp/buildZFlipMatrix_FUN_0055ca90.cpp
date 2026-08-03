// Name: core_xform.cpp_buildZFlipMatrix_FUN_0055ca90
// Address: 0055ca90
// Address Range: [[0055ca90, 0055caea]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(float z_offset,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(float z_offset,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_34 [12];
  
  local_34[0] = 1.0;
  local_34[1] = 0.0;
  local_34[2] = 0.0;
  local_34[3] = 0.0;
  local_34[4] = 0.0;
  local_34[5] = 1.0;
  local_34[6] = 0.0;
  local_34[7] = 0.0;
  local_34[8] = 0.0;
  local_34[9] = 0.0;
  local_34[10] = -1.0;
  local_34[0xb] = z_offset * (float)2;
  pfVar2 = local_34;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
