// Name: core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0
// Address: 005f6dc0
// Address Range: [[005f6dc0, 005f6e1b]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildTranslationMatrix_FUN_005f6dc0(CMatrix3x4f * output_matrix, CVector3f * translation)

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildTranslationMatrix_FUN_005f6dc0
          (CMatrix3x4f *output_matrix,CVector3f *translation)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
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
  local_38[3] = output_matrix->m[0].w;
  local_28 = 0;
  local_24 = 0x3f800000;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  local_1c = output_matrix->m[0].x;
  local_38[0] = 1.0;
  local_c = output_matrix->m[0].y;
  pfVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
