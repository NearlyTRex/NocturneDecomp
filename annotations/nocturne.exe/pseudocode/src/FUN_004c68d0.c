// Name: FUN_004c68d0
// Address: 004c68d0
// Address Range: [[004c68d0, 004c68e3]]
// Convention: unknown
// Signature: bool FUN_004c68d0(int param_1)

#include "nocturne.h"

bool FUN_004c68d0(int param_1)

{
  return *(int *)(param_1 + 0x808) != 0;
}
