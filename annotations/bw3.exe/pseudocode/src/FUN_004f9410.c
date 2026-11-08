// Name: FUN_004f9410
// Address: 004f9410
// Address Range: [[004f9410, 004f9447]]
// Convention: unknown
// Signature: void FUN_004f9410(int param_1)

#include "nocturne.h"

void FUN_004f9410(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00460490(param_1 + 8);
  iVar1 = FUN_00460490(iVar1 + 0x398);
  iVar1 = FUN_00460490(iVar1 + 0x398);
  *(uint *)(iVar1 + -0x738) = 0;
  return;
}
