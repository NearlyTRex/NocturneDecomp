// Name: FUN_005a8e40
// Address: 005a8e40
// Address Range: [[005a8e40, 005a8e50]]
// Convention: unknown
// Signature: undefined4 FUN_005a8e40(int param_1)

#include "nocturne.h"

uint FUN_005a8e40(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0x3a8) + 0x184);
}
