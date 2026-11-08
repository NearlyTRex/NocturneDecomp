// Name: FUN_00585210
// Address: 00585210
// Address Range: [[00585210, 00585220]]
// Convention: unknown
// Signature: undefined4 FUN_00585210(int param_1)

#include "nocturne.h"

uint FUN_00585210(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0x504) + 0x2e0);
}
