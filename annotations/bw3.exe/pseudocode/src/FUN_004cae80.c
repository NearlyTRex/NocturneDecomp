// Name: FUN_004cae80
// Address: 004cae80
// Address Range: [[004cae80, 004caea8]]
// Convention: unknown
// Signature: undefined4 FUN_004cae80(int param_1)

#include "nocturne.h"

uint FUN_004cae80(int param_1)

{
  if ((*(int *)(param_1 + 0x1b0) != 0) && (*(int *)(param_1 + 0x218) == 0)) {
    *(uint *)(param_1 + 0x100) = 1;
    return 0;
  }
  return 1;
}
