// Name: FUN_00443d10
// Address: 00443d10
// Address Range: [[00443d10, 00443d35]]
// Convention: unknown
// Signature: undefined4 FUN_00443d10(int param_1)

#include "nocturne.h"

uint FUN_00443d10(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    return 1;
  }
  return 0;
}
