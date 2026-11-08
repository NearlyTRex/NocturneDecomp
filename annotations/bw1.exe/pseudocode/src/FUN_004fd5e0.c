// Name: FUN_004fd5e0
// Address: 004fd5e0
// Address Range: [[004fd5e0, 004fd605]]
// Convention: unknown
// Signature: undefined4 FUN_004fd5e0(int param_1)

#include "nocturne.h"

uint FUN_004fd5e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00468900(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x110) < 1) {
    return 0;
  }
  return 1;
}
