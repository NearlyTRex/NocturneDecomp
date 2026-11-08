// Name: FUN_00569920
// Address: 00569920
// Address Range: [[00569920, 00569960]]
// Convention: unknown
// Signature: void FUN_00569920(int param_1,int param_2)

#include "nocturne.h"

void FUN_00569920(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x2320)) {
    FUN_00569890(param_1,param_2);
  }
  uVar1 = FUN_00569eb0(param_1,*(uint *)(param_1 + 0x2320),*(uint *)(param_1 + 0x2324));
  FUN_00564000(uVar1);
  return;
}
