// Name: FUN_00521630
// Address: 00521630
// Address Range: [[00521630, 00521678]]
// Convention: unknown
// Signature: void FUN_00521630(int param_1)

#include "nocturne.h"

void FUN_00521630(int param_1)

{
  FUN_00480e10(param_1 + 0x34);
  FUN_00521680(param_1);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x24));
    *(uint *)(param_1 + 0x24) = 0;
  }
  *(uint *)(param_1 + 0x20) = 0;
  FUN_00483d10(0x1e65910);
  return;
}
