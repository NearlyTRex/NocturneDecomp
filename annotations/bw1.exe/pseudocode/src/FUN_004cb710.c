// Name: FUN_004cb710
// Address: 004cb710
// Address Range: [[004cb710, 004cb723]]
// Convention: unknown
// Signature: bool FUN_004cb710(int param_1)

#include "nocturne.h"

bool FUN_004cb710(int param_1)

{
  return *(int *)(param_1 + 0x1ffac) != 0;
}
