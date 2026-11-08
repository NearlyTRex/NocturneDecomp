// Name: FUN_00460960
// Address: 00460960
// Address Range: [[00460960, 004609b0]]
// Convention: unknown
// Signature: void FUN_00460960(int param_1)

#include "nocturne.h"

void FUN_00460960(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xc2f0) = 0;
  *(uint *)(param_1 + 0xc1e8) = 0;
  iVar1 = FUN_0040cd00(0x3ecccccd);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc9c4) = 0;
  }
  else {
    *(uint *)(param_1 + 0xc9c4) = 0x40400000;
  }
  FUN_005247c0(param_1 + 0x158,0,1);
  return;
}
