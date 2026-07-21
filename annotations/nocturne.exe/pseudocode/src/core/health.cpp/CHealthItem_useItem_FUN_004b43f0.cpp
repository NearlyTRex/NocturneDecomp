// Name: core_health.cpp_CHealthItem_useItem_FUN_004b43f0
// Address: 004b43f0
// Address Range: [[004b43f0, 004b4434]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_health_cpp_CHealthItem_useItem_FUN_004b43f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_health_cpp_CHealthItem_useItem_FUN_004b43f0(int param_1,int param_2)

{
  float fVar1;
  
  if (0 < *(int *)(param_1 + 0x2cc)) {
    fVar1 = *(float *)(param_1 + 0x2d0) + *(float *)(param_2 + 0x2434);
    *(float *)(param_2 + 0x2434) = fVar1;
    if ((float)_DAT_0058567b < fVar1) {
      *(uint *)(param_2 + 0x2434) = 0x42c80000;
    }
    *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + -1;
  }
  return *(uint *)(param_1 + 0x2cc);
}
