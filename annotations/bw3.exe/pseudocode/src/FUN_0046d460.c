// Name: FUN_0046d460
// Address: 0046d460
// Address Range: [[0046d460, 0046d4a0]]
// Convention: unknown
// Signature: void FUN_0046d460(int param_1,int param_2)

#include "nocturne.h"

void FUN_0046d460(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  FUN_00515500(uVar1);
  FUN_0046d450(param_1,param_2 == 0);
  return;
}
