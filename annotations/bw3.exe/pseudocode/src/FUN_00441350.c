// Name: FUN_00441350
// Address: 00441350
// Address Range: [[00441350, 0044138f]]
// Convention: unknown
// Signature: void FUN_00441350(int param_1)

#include "nocturne.h"

void FUN_00441350(int param_1)

{
  FUN_00440c50(param_1 + 4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
  FUN_004400d0(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = 0xffffffff;
  *(uint *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)(param_1 + 0x28) = 0xffffffff;
  return;
}
