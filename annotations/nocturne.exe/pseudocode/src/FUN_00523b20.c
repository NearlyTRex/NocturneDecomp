// Name: FUN_00523b20
// Address: 00523b20
// Address Range: [[00523b20, 00523b61]]
// Convention: unknown
// Signature: void FUN_00523b20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523b20(int param_1)

{
  if (*(int *)(param_1 + 0x130) != 0) {
    if (_DAT_02dc8318 != (int *)0x0) {
      (**(code **)(*_DAT_02dc8318 + 0x30))(_DAT_02dc8318,*(uint *)(param_1 + 0x130));
      *(uint *)(param_1 + 0x130) = 0;
      return;
    }
    *(uint *)(param_1 + 0x130) = 0;
  }
  return;
}
