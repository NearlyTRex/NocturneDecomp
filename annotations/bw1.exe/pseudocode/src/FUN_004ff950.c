// Name: FUN_004ff950
// Address: 004ff950
// Address Range: [[004ff950, 004ff963]]
// Convention: unknown
// Signature: bool FUN_004ff950(int param_1)

#include "nocturne.h"

bool FUN_004ff950(int param_1)

{
  return *(int *)(param_1 + 0x810) != 0;
}
