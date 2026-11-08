// Name: FUN_00527a60
// Address: 00527a60
// Address Range: [[00527a60, 00527a82]]
// Convention: unknown
// Signature: bool FUN_00527a60(int param_1)

#include "nocturne.h"

bool FUN_00527a60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  return *(int *)(iVar1 + 0x24) == 0x92;
}
