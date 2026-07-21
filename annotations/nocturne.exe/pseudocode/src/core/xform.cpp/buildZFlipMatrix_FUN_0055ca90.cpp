// Name: core_xform.cpp_buildZFlipMatrix_FUN_0055ca90
// Address: 0055ca90
// Address Range: [[0055ca90, 0055caea]]
// Convention: __stack_esi
// Signature: undefined4 * __stack_esi core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(float param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __stack_esi core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(float param_1,uint *param_2)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
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
  local_34[0xb] = param_1 * (float)_DAT_00598346;
  pfVar2 = local_34;
  puVar3 = param_2;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}
