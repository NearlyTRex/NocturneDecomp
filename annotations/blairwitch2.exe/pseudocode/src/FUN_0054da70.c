// Name: FUN_0054da70
// Address: 0054da70
// Address Range: [[0054da70, 0054dab1]]
// Convention: unknown
// Signature: void FUN_0054da70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054da70(int param_1)

{
  if (*(int *)(param_1 + 0x158) != 0) {
    if (_DAT_02648e80 != (int *)0x0) {
      (**(code **)(*_DAT_02648e80 + 0x34))(_DAT_02648e80,*(uint *)(param_1 + 0x158));
      *(uint *)(param_1 + 0x158) = 0;
      return;
    }
    *(uint *)(param_1 + 0x158) = 0;
  }
  return;
}
