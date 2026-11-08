// Name: FUN_00486490
// Address: 00486490
// Address Range: [[00486490, 004864cf]]
// Convention: unknown
// Signature: undefined4 FUN_00486490(int param_1)

#include "nocturne.h"

uint FUN_00486490(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x6c8) == 6) {
    return 0;
  }
  uVar1 = FUN_0040cf60(0x43e10000,0x44160000);
  return uVar1;
}
