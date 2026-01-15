// Name: core_xform.cpp_buildRotationY_FUN_005f6cc0
// Address: 005f6cc0
// Address Range: [[005f6cc0, 005f6d33]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildRotationY_FUN_005f6cc0(CMatrix3x4f * output_matrix, float angle_radians)

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildRotationY_FUN_005f6cc0(CMatrix3x4f *output_matrix,float angle_radians)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_44 [9];
  uint local_20;
  float local_1c;
  uint local_18;
  float local_c;
  float local_8;
  
  fVar3 = (float10)fsin((float10)(float)output_matrix);
  fVar4 = (float10)fcos((float10)(float)output_matrix);
  local_44[1] = 0.0;
  local_44[3] = 0.0;
  local_44[4] = 0.0;
  local_44[5] = 1.0;
  local_44[6] = 0.0;
  local_44[7] = 0.0;
  local_20 = 0;
  local_18 = 0;
  local_c = (float)fVar4;
  local_8 = (float)fVar3;
  local_44[0] = local_c;
  local_44[2] = local_8;
  local_1c = local_c;
  local_44[8] = -local_8;
  pfVar2 = local_44;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
