// Name: FUN_004f9ef0
// Address: 004f9ef0
// Address Range: [[004f9ef0, 004f9f0a]]
// Convention: unknown
// Signature: int FUN_004f9ef0(int param_1)

#include "nocturne.h"

int FUN_004f9ef0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x460);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2d4) != 0)) {
    return iVar1;
  }
  return 0;
}
