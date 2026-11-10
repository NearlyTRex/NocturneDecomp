// Name: core_xform.cpp_buildZFlipMatrix_FUN_005935a0
// Address: 005935a0
// Address Range: [[005935a0, 005935fa]]
// Convention: unknown
// Signature: void core_xform_cpp_buildZFlipMatrix_FUN_005935a0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_buildZFlipMatrix_FUN_005935a0(float param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float local_34 [12];
  
  local_34[0] = 1.0;
  local_34[1] = 0.0;
  local_34[2] = 0.0;
  local_34[3] = 0.0;
  local_34[4] = 0.0;
  local_34[5] = 1.0;
  local_34[6] = 0.0;
  local_34[7] = 0.0;
  local_34[8] = 0.0;
  local_34[9] = 0.0;
  local_34[10] = -1.0;
  local_34[0xb] = param_1 * _DAT_005eed8e;
  pfVar2 = local_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
