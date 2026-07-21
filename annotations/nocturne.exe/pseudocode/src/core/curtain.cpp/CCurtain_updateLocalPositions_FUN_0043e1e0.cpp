// Name: core_curtain.cpp_CCurtain_updateLocalPositions_FUN_0043e1e0
// Address: 0043e1e0
// Address Range: [[0043e1e0, 0043e285]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0043e1e0(int param_1)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0043e1e0(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  uint *puVar3;
  int iVar4;
  float local_30;
  float local_2c;
  float local_28;
  byte local_24 [12];
  int local_18;
  int local_14;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    local_14 = param_1 + 0x200;
    local_18 = param_1 + 0x3c;
    pfVar2 = (float *)(param_1 + 0x220);
    do {
      local_30 = *pfVar2 - *(float *)(param_1 + 0x20);
      local_2c = pfVar2[1] - *(float *)(param_1 + 0x24);
      puVar3 = (uint *)(iVar4 * 0x74 + local_14);
      local_28 = pfVar2[2] - *(float *)(param_1 + 0x28);
      puVar1 = (uint *)
               core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (local_18,local_24,&local_30);
      if (puVar3 != puVar1) {
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        puVar3[2] = puVar1[2];
      }
      iVar4 = iVar4 + 1;
      pfVar2 = pfVar2 + 0x1d;
    } while (iVar4 < *(int *)(param_1 + 0x1fc));
  }
  return;
}
