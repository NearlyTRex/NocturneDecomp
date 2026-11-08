// Name: FUN_0056edc0
// Address: 0056edc0
// Address Range: [[0056edc0, 0056edd8]]
// Convention: unknown
// Signature: void FUN_0056edc0(int param_1)

#include "nocturne.h"

void FUN_0056edc0(int param_1)

{
  if (*(int *)(param_1 + 0x174) != 4) {
    return;
  }
  *(uint *)(param_1 + 0x2f0) = 1;
  return;
}
