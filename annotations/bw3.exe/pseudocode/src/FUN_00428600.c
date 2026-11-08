// Name: FUN_00428600
// Address: 00428600
// Address Range: [[00428600, 00428638]]
// Convention: unknown
// Signature: void FUN_00428600(int param_1)

#include "nocturne.h"

void FUN_00428600(int param_1)

{
  *(uint *)(param_1 + 0xd064) = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  return;
}
