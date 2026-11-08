// Name: FUN_004368b0
// Address: 004368b0
// Address Range: [[004368b0, 004368ea]]
// Convention: unknown
// Signature: void FUN_004368b0(int param_1)

#include "nocturne.h"

void FUN_004368b0(int param_1)

{
  FUN_005b77c0(param_1 + 8,0,4000);
  *(uint *)(param_1 + 0xfa8) = 0;
  *(uint *)(param_1 + 0xfac) = 0;
  FUN_00461440("console.txt");
  return;
}
