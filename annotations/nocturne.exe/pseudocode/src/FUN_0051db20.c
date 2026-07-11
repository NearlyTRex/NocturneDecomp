// Name: FUN_0051db20
// Address: 0051db20
// Address Range: [[0051db20, 0051db60]]
// Convention: unknown
// Signature: void FUN_0051db20(int param_1,int param_2)

#include "nocturne.h"

void FUN_0051db20(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x2230)) {
    FUN_0051da50(param_1,param_2);
  }
  uVar1 = FUN_0051e020(param_1,*(uint *)(param_1 + 0x2230),*(uint *)(param_1 + 0x2234));
  FUN_00518470(uVar1);
  return;
}
