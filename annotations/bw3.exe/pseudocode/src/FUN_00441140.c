// Name: FUN_00441140
// Address: 00441140
// Address Range: [[00441140, 00441186]]
// Convention: unknown
// Signature: void FUN_00441140(int param_1)

#include "nocturne.h"

void FUN_00441140(int param_1)

{
  FUN_00440c50(param_1 + 4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
  FUN_004400d0(param_1 + 0x18);
  *(uint *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)(param_1 + 0x34) = 0xffffffff;
  *(uint *)(param_1 + 0x38) = 0xffffffff;
  *(uint *)(param_1 + 0x3c) = 0xffffffff;
  return;
}
