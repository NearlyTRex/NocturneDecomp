// Name: core_xform.cpp_buildYFlipMatrix_FUN_005f6f40
// Address: 005f6f40
// Address Range: [[005f6f40, 005f6f9c]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_buildYFlipMatrix_FUN_005f6f40(CMatrix3x4f * matrix_out, float y_offset)

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_buildYFlipMatrix_FUN_005f6f40(CMatrix3x4f *matrix_out,float y_offset)

{
  int iVar1;
  float *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  float local_38 [8];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_38[0] = 1.0;
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 0.0;
  local_38[5] = -1.0;
  local_38[6] = 0.0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  local_c = 0;
  local_38[7] = (float)matrix_out * (float)2;
  pfVar2 = local_38;
  pfVar3 = unaff_ESI;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return (CMatrix3x4f *)unaff_ESI;
}
