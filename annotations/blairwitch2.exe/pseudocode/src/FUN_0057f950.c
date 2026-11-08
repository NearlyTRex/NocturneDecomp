// Name: FUN_0057f950
// Address: 0057f950
// Address Range: [[0057f950, 0057f96f]]
// Convention: unknown
// Signature: undefined4 FUN_0057f950(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0057f950(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x9b8) != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x9b8) = param_2;
  return 1;
}
