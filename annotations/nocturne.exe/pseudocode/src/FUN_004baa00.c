// Name: FUN_004baa00
// Address: 004baa00
// Address Range: [[004baa00, 004baa27]]
// Convention: unknown
// Signature: undefined4 FUN_004baa00(int param_1)

#include "nocturne.h"

uint FUN_004baa00(int param_1)

{
  if (*(int *)(param_1 + 0x1fa5c) == 0) {
    return 0;
  }
  FUN_004e16b0(param_1 + 0x150,0x16,1);
  return 1;
}
