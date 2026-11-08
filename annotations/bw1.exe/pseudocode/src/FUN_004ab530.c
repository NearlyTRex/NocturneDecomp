// Name: FUN_004ab530
// Address: 004ab530
// Address Range: [[004ab530, 004ab543]]
// Convention: unknown
// Signature: bool FUN_004ab530(int param_1)

#include "nocturne.h"

bool FUN_004ab530(int param_1)

{
  return *(int *)(param_1 + 0x2d4) == 0;
}
