// Name: FUN_0056ed40
// Address: 0056ed40
// Address Range: [[0056ed40, 0056ed62]]
// Convention: unknown
// Signature: undefined4 FUN_0056ed40(int param_1)

#include "nocturne.h"

uint FUN_0056ed40(int param_1)

{
  if (*(int *)(param_1 + 0x174) != 3) {
    return 1;
  }
  *(uint *)(param_1 + 0x2f0) = 1;
  return 1;
}
