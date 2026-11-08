// Name: FUN_004df900
// Address: 004df900
// Address Range: [[004df900, 004df925]]
// Convention: unknown
// Signature: undefined4 FUN_004df900(int param_1)

#include "nocturne.h"

uint FUN_004df900(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004625a0(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x110) < 1) {
    return 0;
  }
  return 1;
}
