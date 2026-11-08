// Name: FUN_0059a910
// Address: 0059a910
// Address Range: [[0059a910, 0059a932]]
// Convention: unknown
// Signature: bool FUN_0059a910(int param_1)

#include "nocturne.h"

bool FUN_0059a910(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  return *(int *)(iVar1 + 0x24) == 0x92;
}
