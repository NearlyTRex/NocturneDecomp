// Name: FUN_004b9810
// Address: 004b9810
// Address Range: [[004b9810, 004b9854]]
// Convention: unknown
// Signature: undefined4 FUN_004b9810(int param_1)

#include "nocturne.h"

uint FUN_004b9810(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0;
  }
  uVar1 = FUN_0040cc00(0x43160000,0x43480000);
  return uVar1;
}
