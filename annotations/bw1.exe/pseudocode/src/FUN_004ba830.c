// Name: FUN_004ba830
// Address: 004ba830
// Address Range: [[004ba830, 004ba840]]
// Convention: unknown
// Signature: bool FUN_004ba830(int param_1)

#include "nocturne.h"

bool FUN_004ba830(int param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}
