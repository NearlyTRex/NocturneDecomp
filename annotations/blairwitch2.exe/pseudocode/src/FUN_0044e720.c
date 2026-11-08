// Name: FUN_0044e720
// Address: 0044e720
// Address Range: [[0044e720, 0044e7c0]]
// Convention: unknown
// Signature: void FUN_0044e720(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0044e720(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x110) < 1) {
    return;
  }
  uVar1 = FUN_0044e6e0(param_1,param_2);
  FUN_00531e90(0x01E661B8,*(uint *)(param_1 + 0x104),uVar1);
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
                 *(uint *)(param_1 + 0x114),uVar1,4,*(int *)(param_1 + 0x108));
    return;
  }
  FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
               *(uint *)(param_1 + 0x114),uVar1,4,0);
  return;
}
