// Name: FUN_005a8250
// Address: 005a8250
// Address Range: [[005a8250, 005a8289]]
// Convention: unknown
// Signature: undefined4 FUN_005a8250(int param_1)

#include "nocturne.h"

uint FUN_005a8250(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x30)) {
    *(float *)(param_1 + 0xc) =
         (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) *
         (1.0 - *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x2c)) +
         *(float *)(param_1 + 0x24);
    return *(uint *)(param_1 + 0xc);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0x28);
  return *(uint *)(param_1 + 0xc);
}
