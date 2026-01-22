// Name: core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0
// Address: 005f6dc0
// Address Range: [[005f6dc0, 005f6e1b]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0(CVector3f * translation, CMatrix3x4f * matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi
core_xform_cpp_buildTranslationMatrix_FUN_005f6dc0(CVector3f *translation,CMatrix3x4f *matrix_out)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_38 [4];
  uint local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  float local_c;
  
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = translation->x;
  local_28 = 0;
  local_24 = 0x3f800000;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  local_1c = translation->y;
  local_38[0] = 1.0;
  local_c = translation->z;
  pfVar2 = local_38;
  pfVar3 = (float *)matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return matrix_out;
}
