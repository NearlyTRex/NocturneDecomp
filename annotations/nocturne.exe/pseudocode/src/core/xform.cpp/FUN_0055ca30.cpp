// Name: core_xform.cpp_FUN_0055ca30
// Address: 0055ca30
// Address Range: [[0055ca30, 0055ca8c]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055ca30(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_0055ca30(float param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
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
  local_38[7] = param_1 * (float)_DAT_0059833e;
  pfVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
