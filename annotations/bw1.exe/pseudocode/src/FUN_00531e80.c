// Name: FUN_00531e80
// Address: 00531e80
// Address Range: [[00531e80, 00531e93]]
// Convention: unknown
// Signature: bool FUN_00531e80(int param_1)

#include "nocturne.h"

bool FUN_00531e80(int param_1)

{
  return *(int *)(param_1 + 0x1faac) == 0;
}
