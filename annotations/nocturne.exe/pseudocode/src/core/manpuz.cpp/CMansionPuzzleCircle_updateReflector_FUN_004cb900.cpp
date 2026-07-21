// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900
// Address: 004cb900
// Address Range: [[004cb900, 004cb97d]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900(int param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1338 + param_2 * 0x60;
  if (*(int *)(param_1 + 0x5e8 + *(int *)(iVar2 + 0x5c) * 100) == 0) {
    fVar1 = param_3 / _DAT_005a004c + *(float *)(iVar2 + 0x18);
    *(float *)(iVar2 + 0x18) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(iVar2 + 0x18) = 0x3f800000;
      return;
    }
  }
  else {
    fVar1 = *(float *)(iVar2 + 0x18) - param_3 / _DAT_005a004c;
    *(float *)(iVar2 + 0x18) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(iVar2 + 0x18) = 0;
      return;
    }
  }
  return;
}
