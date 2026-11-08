// Name: FUN_005a1b20
// Address: 005a1b20
// Address Range: [[005a1b20, 005a1b33]]
// Convention: unknown
// Signature: bool FUN_005a1b20(int param_1)

#include "nocturne.h"

bool FUN_005a1b20(int param_1)

{
  return *(int *)(param_1 + 0x33fa4) == 0;
}
