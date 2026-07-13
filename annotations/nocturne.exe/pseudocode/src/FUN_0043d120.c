// Name: FUN_0043d120
// Address: 0043d120
// Address Range: [[0043d120, 0043d143]]
// Convention: unknown
// Signature: undefined4 FUN_0043d120(int param_1)

#include "nocturne.h"

uint FUN_0043d120(int param_1)

{
  if (*(int *)(param_1 + 0x570) == 0) {
    return 0;
  }
  FUN_0048d5d0(param_1 + 0x574);
  return 1;
}
