// Name: FUN_005a02b0
// Address: 005a02b0
// Address Range: [[005a02b0, 005a02d0]]
// Convention: unknown
// Signature: bool FUN_005a02b0(int param_1)

#include "nocturne.h"

bool FUN_005a02b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  return *(int *)(iVar1 + 0x24) == 0x1b;
}
