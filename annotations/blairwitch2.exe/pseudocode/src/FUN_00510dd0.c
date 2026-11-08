// Name: FUN_00510dd0
// Address: 00510dd0
// Address Range: [[00510dd0, 00510de2]]
// Convention: unknown
// Signature: void FUN_00510dd0(int param_1)

#include "nocturne.h"

void FUN_00510dd0(int param_1)

{
  *(uint *)(param_1 + 0x24) = 0;
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005fa8ec;
  return;
}
