// Name: core_curtain.cpp_CCurtain_updateWorldPositions_FUN_0043e110
// Address: 0043e110
// Address Range: [[0043e110, 0043e1d8]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0043e110(int param_1)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0043e110(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  byte local_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    local_18 = param_1 + 0x200;
    local_14 = param_1 + 0x3c;
    pfVar2 = (float *)(param_1 + 0x220);
    do {
      iVar4 = iVar3 * 0x74 + local_18;
      pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                  (local_14,local_30,iVar4);
      local_24 = *pfVar1 + *(float *)(param_1 + 0x20);
      local_20 = pfVar1[1] + *(float *)(param_1 + 0x24);
      local_1c = pfVar1[2] + *(float *)(param_1 + 0x28);
      if (pfVar2 != &local_24) {
        *pfVar2 = local_24;
        pfVar2[1] = local_20;
        pfVar2[2] = local_1c;
      }
      if ((uint *)(iVar4 + 0x38) != (uint *)(iVar4 + 0x20)) {
        *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x20);
        *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x24);
        *(uint *)(iVar4 + 0x40) = *(uint *)(iVar4 + 0x28);
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 0x1d;
    } while (iVar3 < *(int *)(param_1 + 0x1fc));
  }
  return;
}
