// Name: FUN_005a0d70
// Address: 005a0d70
// Address Range: [[005a0d70, 005a0d80]]
// Convention: unknown
// Signature: bool FUN_005a0d70(int param_1)

#include "nocturne.h"

bool FUN_005a0d70(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}
