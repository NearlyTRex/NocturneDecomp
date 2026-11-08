// Name: FUN_004910b0
// Address: 004910b0
// Address Range: [[004910b0, 00491102]]
// Convention: unknown
// Signature: void FUN_004910b0(int param_1)

#include "nocturne.h"

void FUN_004910b0(int param_1)

{
  int iVar1;
  
  iVar1 = 0x01CB6900;
  *(uint *)(param_1 + 0x1908) = 0;
  if (*(int *)(iVar1 + 0xe4) == 1) {
    FUN_00491110(param_1,"puzzleModeHard",1);
  }
  if (*(int *)(0x01CB6900 + 0xe8) != 1) {
    return;
  }
  FUN_00491110(param_1,"combatModeHard",1);
  return;
}
