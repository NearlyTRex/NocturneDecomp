// Name: core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
// Address: 005f6fa0
// Address Range: [[005f6fa0, 005f6ffa]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0(CMatrix3x4f * matrix_out, float z_offset)

#include "nocturne.h"

CMatrix3x4f * __stack_esi
core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(CMatrix3x4f *matrix_out,float z_offset)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
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
  local_34[0xb] = (float)matrix_out * (float)2;
  pfVar2 = local_34;
  puVar3 = (uint *)z_offset;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (CMatrix3x4f *)z_offset;
}
