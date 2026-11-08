// Name: FUN_005436d0
// Address: 005436d0
// Address Range: [[005436d0, 00543706]]
// Convention: unknown
// Signature: int FUN_005436d0(int param_1)

#include "nocturne.h"

int FUN_005436d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00499380(param_1 + 0x34);
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -0x14) = 0;
  *(uint *)(iVar1 + -0x10) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  return iVar1 + -0x34;
}
