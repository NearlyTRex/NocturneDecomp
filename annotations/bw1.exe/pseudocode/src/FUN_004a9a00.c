// Name: FUN_004a9a00
// Address: 004a9a00
// Address Range: [[004a9a00, 004a9a52]]
// Convention: unknown
// Signature: void FUN_004a9a00(int param_1)

#include "nocturne.h"

void FUN_004a9a00(int param_1)

{
  int iVar1;
  
  iVar1 = 0x01CCF390;
  *(uint *)(param_1 + 0x1908) = 0;
  if (*(int *)(iVar1 + 0xe4) == 1) {
    FUN_004a9a60(param_1,"puzzleModeHard",1);
  }
  if (*(int *)(0x01CCF390 + 0xe8) != 1) {
    return;
  }
  FUN_004a9a60(param_1,"combatModeHard",1);
  return;
}
