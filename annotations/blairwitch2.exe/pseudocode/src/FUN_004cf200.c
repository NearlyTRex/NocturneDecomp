// Name: FUN_004cf200
// Address: 004cf200
// Address Range: [[004cf200, 004cf22c]]
// Convention: unknown
// Signature: void FUN_004cf200(int param_1)

#include "nocturne.h"

void FUN_004cf200(int param_1)

{
  *(uint *)(param_1 + 0x255f4) = 0;
  *(uint *)(param_1 + 0x255f8) = 0;
  *(uint *)(param_1 + 0x25600) = 0x7149f2ca;
  *(uint *)(param_1 + 0x255f0) = 0;
  return;
}
