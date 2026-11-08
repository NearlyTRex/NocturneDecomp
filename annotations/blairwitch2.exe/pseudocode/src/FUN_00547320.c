// Name: FUN_00547320
// Address: 00547320
// Address Range: [[00547320, 00547360]]
// Convention: unknown
// Signature: void FUN_00547320(int param_1,int param_2)

#include "nocturne.h"

void FUN_00547320(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x2230)) {
    FUN_005471f0(param_1,param_2);
  }
  uVar1 = FUN_00547810(param_1,*(uint *)(param_1 + 0x2230),*(uint *)(param_1 + 0x2234));
  FUN_00541a00(uVar1);
  return;
}
