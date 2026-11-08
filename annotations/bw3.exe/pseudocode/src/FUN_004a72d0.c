// Name: FUN_004a72d0
// Address: 004a72d0
// Address Range: [[004a72d0, 004a72fc]]
// Convention: unknown
// Signature: undefined4 FUN_004a72d0(int param_1)

#include "nocturne.h"

uint FUN_004a72d0(int param_1)

{
  if (*(int *)(param_1 + 0x5e4) == 0) {
    return *(uint *)(param_1 + 0x5e4);
  }
  FUN_004a6090(param_1 + 0x340);
  return *(uint *)(param_1 + 0x5e4);
}
