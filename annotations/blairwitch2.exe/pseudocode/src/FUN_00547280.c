// Name: FUN_00547280
// Address: 00547280
// Address Range: [[00547280, 005472c0]]
// Convention: unknown
// Signature: void FUN_00547280(int param_1,int param_2)

#include "nocturne.h"

void FUN_00547280(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x2230)) {
    FUN_005471f0(param_1,param_2);
  }
  uVar1 = FUN_00547810(param_1,*(uint *)(param_1 + 0x2230),*(uint *)(param_1 + 0x2234));
  FUN_00541990(uVar1);
  return;
}
