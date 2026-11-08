// Name: FUN_00509e10
// Address: 00509e10
// Address Range: [[00509e10, 00509e22]]
// Convention: unknown
// Signature: void FUN_00509e10(int param_1)

#include "nocturne.h"

void FUN_00509e10(int param_1)

{
  *(uint *)(param_1 + 0x24) = 0;
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005e2fa4;
  return;
}
