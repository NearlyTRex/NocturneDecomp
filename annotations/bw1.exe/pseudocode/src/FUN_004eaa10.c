// Name: FUN_004eaa10
// Address: 004eaa10
// Address Range: [[004eaa10, 004eaa6f]]
// Convention: unknown
// Signature: void FUN_004eaa10(int param_1)

#include "nocturne.h"

void FUN_004eaa10(int param_1)

{
  FUN_00569b20(param_1 + 0x158);
  FUN_0042c510(param_1);
  *(uint *)(param_1 + 0xc1d0) = 0;
  FUN_004f9b20(param_1 + 0x1fae8);
  *(uint *)(param_1 + 0x1ff60) = 0;
  *(uint *)(param_1 + 0x1ff64) = 0;
  *(uint *)(param_1 + 0x1ff68) = 0;
  *(uint *)(param_1 + 0x1ff70) = 0x7149f2ca;
  return;
}
