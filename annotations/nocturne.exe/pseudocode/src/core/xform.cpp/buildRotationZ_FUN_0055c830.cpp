// Name: core_xform.cpp_buildRotationZ_FUN_0055c830
// Address: 0055c830
// Address Range: [[0055c830, 0055c8a7]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationZ_FUN_0055c830(float angle_radians,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationZ_FUN_0055c830(float angle_radians,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float local_48 [5];
  float local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  float local_10;
  float local_c;
  
  fVar4 = (float10)fsin((float10)angle_radians);
  fVar5 = (float10)fcos((float10)angle_radians);
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_20 = 0x3f800000;
  local_10 = (float)fVar5;
  local_c = (float)fVar4;
  local_48[0] = local_10;
  local_48[4] = local_c;
  local_34 = local_10;
  local_48[1] = -local_c;
  pfVar2 = local_48;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
