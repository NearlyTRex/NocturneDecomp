// Name: FUN_004926b0
// Address: 004926b0
// Address Range: [[004926b0, 004926c6]]
// Convention: unknown
// Signature: bool FUN_004926b0(int param_1)

#include "nocturne.h"

bool FUN_004926b0(int param_1)

{
  return (*(uint *)(param_1 + 0x578) & 0x7fffffff) == 0;
}
