// Name: FUN_00598f00
// Address: 00598f00
// Address Range: [[00598f00, 00598f20]]
// Convention: unknown
// Signature: bool FUN_00598f00(int param_1)

#include "nocturne.h"

bool FUN_00598f00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004fc070(param_1 + 0x158);
  return *(int *)(iVar1 + 0x24) == 7;
}
