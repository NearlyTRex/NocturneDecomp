// Name: FUN_004f9ed0
// Address: 004f9ed0
// Address Range: [[004f9ed0, 004f9eed]]
// Convention: unknown
// Signature: int FUN_004f9ed0(int param_1)

#include "nocturne.h"

int FUN_004f9ed0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x45c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2d4) != 0)) {
    return iVar1;
  }
  return 0;
}
