// Name: FUN_00443ed0
// Address: 00443ed0
// Address Range: [[00443ed0, 00443efe]]
// Convention: unknown
// Signature: undefined4 FUN_00443ed0(int param_1)

#include "nocturne.h"

uint FUN_00443ed0(int param_1)

{
  if (((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (*(int *)(param_1 + 8) != 0)) {
    if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18)) {
      return 0;
    }
    return *(uint *)(param_1 + 0x20);
  }
  return 0xffffffff;
}
