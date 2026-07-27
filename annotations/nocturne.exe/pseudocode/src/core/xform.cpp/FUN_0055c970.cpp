// Name: core_xform.cpp_FUN_0055c970
// Address: 0055c970
// Address Range: [[0055c970, 0055c9c6]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055c970(undefined4 *param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_0055c970(uint *param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint local_38 [6];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_38[0] = *param_1;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_38[5] = param_1[1];
  local_c = 0;
  local_10 = param_1[2];
  puVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
