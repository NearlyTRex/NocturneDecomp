// Name: core_xform.cpp_buildRotationY_FUN_005f6cc0
// Address: 005f6cc0
// Address Range: [[005f6cc0, 005f6d33]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationY_FUN_005f6cc0(float angle_radians,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi
core_xform_cpp_buildRotationY_FUN_005f6cc0(float angle_radians,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float local_44 [9];
  uint local_20;
  float local_1c;
  uint local_18;
  float local_c;
  float local_8;
  
  fVar4 = (float10)fsin((float10)angle_radians);
  fVar5 = (float10)fcos((float10)angle_radians);
  local_44[1] = 0.0;
  local_44[3] = 0.0;
  local_44[4] = 0.0;
  local_44[5] = 1.0;
  local_44[6] = 0.0;
  local_44[7] = 0.0;
  local_20 = 0;
  local_18 = 0;
  local_c = (float)fVar5;
  local_8 = (float)fVar4;
  local_44[0] = local_c;
  local_44[2] = local_8;
  local_1c = local_c;
  local_44[8] = -local_8;
  pfVar2 = local_44;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
