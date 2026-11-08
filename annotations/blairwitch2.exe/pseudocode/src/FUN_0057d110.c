// Name: FUN_0057d110
// Address: 0057d110
// Address Range: [[0057d110, 0057d123]]
// Convention: unknown
// Signature: undefined4 FUN_0057d110(int param_1)

#include "nocturne.h"

uint FUN_0057d110(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x10);
}
