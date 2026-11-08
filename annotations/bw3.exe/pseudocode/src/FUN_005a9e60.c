// Name: FUN_005a9e60
// Address: 005a9e60
// Address Range: [[005a9e60, 005a9e6e]]
// Convention: unknown
// Signature: int FUN_005a9e60(int param_1)

#include "nocturne.h"

int FUN_005a9e60(int param_1)

{
  return (*(uint *)(param_1 + -4) & 0xfffffffe) - 4;
}
