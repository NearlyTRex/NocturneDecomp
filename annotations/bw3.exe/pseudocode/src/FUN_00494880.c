// Name: FUN_00494880
// Address: 00494880
// Address Range: [[00494880, 004948d2]]
// Convention: unknown
// Signature: void FUN_00494880(int param_1)

#include "nocturne.h"

void FUN_00494880(int param_1)

{
  int iVar1;
  
  iVar1 = 0x01D2130C;
  *(uint *)(param_1 + 0x1908) = 0;
  if (*(int *)(iVar1 + 0xec) == 1) {
    FUN_004948e0(param_1,"puzzleModeHard",1);
  }
  if (*(int *)(0x01D2130C + 0xf0) != 1) {
    return;
  }
  FUN_004948e0(param_1,"combatModeHard",1);
  return;
}
