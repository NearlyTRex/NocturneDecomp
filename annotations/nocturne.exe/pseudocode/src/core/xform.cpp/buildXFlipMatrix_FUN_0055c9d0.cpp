// Name: core_xform.cpp_buildXFlipMatrix_FUN_0055c9d0
// Address: 0055c9d0
// Address Range: [[0055c9d0, 0055ca2a]]
// Convention: unknown
// Signature: void core_xform_cpp_buildXFlipMatrix_FUN_0055c9d0(float param_1)

#include "nocturne.h"

void core_xform_cpp_buildXFlipMatrix_FUN_0055c9d0(float param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float local_34 [4];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_34[0] = -1.0;
  local_34[1] = 0.0;
  local_34[2] = 0.0;
  local_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x3f800000;
  local_8 = 0;
  local_34[3] = param_1 * (float)2;
  pfVar2 = local_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
