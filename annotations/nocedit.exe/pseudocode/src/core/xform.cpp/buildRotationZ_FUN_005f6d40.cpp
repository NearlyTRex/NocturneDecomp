// Name: core_xform.cpp_buildRotationZ_FUN_005f6d40
// Address: 005f6d40
// Address Range: [[005f6d40, 005f6db7]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationZ_FUN_005f6d40(float angle_radians,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationZ_FUN_005f6d40(float angle_radians,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float local_48 [5];
  float local_34;
  float local_10;
  float local_c;
  
  fVar4 = (float10)fsin((float10)angle_radians);
  fVar5 = (float10)fcos((float10)angle_radians);
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_48[0] = (float)fVar5;
  local_48[4] = (float)fVar4;
  local_48[1] = -(float)fVar4;
  pfVar2 = local_48;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
