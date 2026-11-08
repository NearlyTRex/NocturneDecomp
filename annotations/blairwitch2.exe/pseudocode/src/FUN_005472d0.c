// Name: FUN_005472d0
// Address: 005472d0
// Address Range: [[005472d0, 00547310]]
// Convention: unknown
// Signature: void FUN_005472d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005472d0(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x2230)) {
    FUN_005471f0(param_1,param_2);
  }
  uVar1 = FUN_00547810(param_1,*(uint *)(param_1 + 0x2230),*(uint *)(param_1 + 0x2234));
  FUN_005419c0(uVar1);
  return;
}
