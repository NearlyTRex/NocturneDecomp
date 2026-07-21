// Name: core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_00551920
// Address: 00551920
// Address Range: [[00551920, 005519ba]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00551920(int param_1)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00551920(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float local_30;
  float local_2c;
  float local_28;
  byte local_24 [12];
  int local_18;
  int local_14;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x290)) {
    local_18 = param_1 + 0x294;
    local_14 = param_1 + 0x3c;
    pfVar2 = (float *)(param_1 + 0x2a0);
    do {
      pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                  (local_14,local_24,iVar3 * 0x20 + local_18);
      local_30 = *pfVar1 + *(float *)(param_1 + 0x20);
      local_2c = pfVar1[1] + *(float *)(param_1 + 0x24);
      local_28 = pfVar1[2] + *(float *)(param_1 + 0x28);
      if (pfVar2 != &local_30) {
        *pfVar2 = local_30;
        pfVar2[1] = local_2c;
        pfVar2[2] = local_28;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x290));
  }
  return;
}
