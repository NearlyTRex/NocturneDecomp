// Name: FUN_004bee80
// Address: 004bee80
// Address Range: [[004bee80, 004bef0b]]
// Convention: unknown
// Signature: void FUN_004bee80(int param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004beee0) */

void FUN_004bee80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  while (0 < iVar1) {
    FUN_004c07b0(param_1,*(uint *)(param_1 + 0xc),*(int *)(param_1 + 0x450) == 0);
    iVar1 = *(int *)(param_1 + 8);
  }
  *(uint *)(param_1 + 0x334) = 0;
  *(uint *)(param_1 + 0x450) = 0;
  iVar1 = *(int *)(param_1 + 0x458);
  *(uint *)(param_1 + 0x330) = 0;
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x14c) + 200))(iVar1,2);
  *(uint *)(param_1 + 0x458) = 0;
  return;
}
