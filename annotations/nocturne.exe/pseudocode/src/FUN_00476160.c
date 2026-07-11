// Name: FUN_00476160
// Address: 00476160
// Address Range: [[00476160, 00476198]]
// Convention: unknown
// Signature: void FUN_00476160(int param_1)

#include "nocturne.h"

void FUN_00476160(int param_1)

{
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x134));
    *(uint *)(param_1 + 0x134) = 0;
  }
  *(uint *)(param_1 + 0x130) = 0;
  FUN_00473c50(param_1);
  return;
}
