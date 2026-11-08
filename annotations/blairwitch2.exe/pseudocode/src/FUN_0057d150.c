// Name: FUN_0057d150
// Address: 0057d150
// Address Range: [[0057d150, 0057d174]]
// Convention: unknown
// Signature: undefined4 FUN_0057d150(int param_1)

#include "nocturne.h"

uint FUN_0057d150(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x10)) {
    return 1;
  }
  return 0;
}
