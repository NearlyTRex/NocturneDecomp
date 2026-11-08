// Name: FUN_004fa4e0
// Address: 004fa4e0
// Address Range: [[004fa4e0, 004fa53f]]
// Convention: unknown
// Signature: void FUN_004fa4e0(int param_1)

#include "nocturne.h"

void FUN_004fa4e0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x338) == 0) {
    return;
  }
  *(uint *)(*(int *)(param_1 + 0x464) + 0x314) =
       *(uint *)(*(int *)(param_1 + 0x338) + 0x568);
  *(uint *)(*(int *)(param_1 + 0x464) + 0x318) =
       *(uint *)(*(int *)(param_1 + 0x338) + 0x56c);
  uVar1 = FUN_00408830(*(uint *)(param_1 + 0x338));
  FUN_0040ddd0(*(uint *)(param_1 + 0x464),uVar1);
  return;
}
