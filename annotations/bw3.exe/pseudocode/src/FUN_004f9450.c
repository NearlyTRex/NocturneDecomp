// Name: FUN_004f9450
// Address: 004f9450
// Address Range: [[004f9450, 004f9493]]
// Convention: unknown
// Signature: int FUN_004f9450(int param_1)

#include "nocturne.h"

int FUN_004f9450(int param_1)

{
  int iVar1;
  
  FUN_004f9580(param_1);
  iVar1 = FUN_00460530(param_1 + 0x738,0);
  iVar1 = FUN_00460530(iVar1 + -0x398,0);
  iVar1 = FUN_00460530(iVar1 + -0x398,0);
  return iVar1 + -8;
}
