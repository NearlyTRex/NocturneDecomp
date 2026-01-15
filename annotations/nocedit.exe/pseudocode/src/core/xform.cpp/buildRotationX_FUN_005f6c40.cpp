// Name: core_xform.cpp_buildRotationX_FUN_005f6c40
// Address: 005f6c40
// Address Range: [[005f6c40, 005f6cb5]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildRotationX_FUN_005f6c40(CMatrix3x4f * output_matrix, float angle_radians)

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildRotationX_FUN_005f6c40(CMatrix3x4f *output_matrix,float angle_radians)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_48 [6];
  float local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  float local_20;
  uint local_1c;
  float local_10;
  float local_c;
  
  fVar3 = (float10)fsin((float10)(float)output_matrix);
  fVar4 = (float10)fcos((float10)(float)output_matrix);
  local_48[0] = 1.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_48[4] = 0.0;
  local_2c = 0;
  local_28 = 0;
  local_1c = 0;
  local_10 = (float)fVar4;
  local_c = (float)fVar3;
  local_48[5] = local_10;
  local_24 = local_c;
  local_20 = local_10;
  local_30 = -local_c;
  pfVar2 = local_48;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
