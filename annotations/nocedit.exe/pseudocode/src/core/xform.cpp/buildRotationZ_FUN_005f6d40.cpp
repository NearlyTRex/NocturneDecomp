// Name: core_xform.cpp_buildRotationZ_FUN_005f6d40
// Address: 005f6d40
// Address Range: [[005f6d40, 005f6db7]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildRotationZ_FUN_005f6d40(CMatrix3x4f * output_matrix, float angle_radians)

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildRotationZ_FUN_005f6d40(CMatrix3x4f *output_matrix,float angle_radians)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
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
  
  fVar3 = (float10)fsin((float10)(float)output_matrix);
  fVar4 = (float10)fcos((float10)(float)output_matrix);
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_20 = 0x3f800000;
  local_10 = (float)fVar4;
  local_c = (float)fVar3;
  local_48[0] = local_10;
  local_48[4] = local_c;
  local_34 = local_10;
  local_48[1] = -local_c;
  pfVar2 = local_48;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
