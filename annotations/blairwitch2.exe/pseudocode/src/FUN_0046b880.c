// Name: FUN_0046b880
// Address: 0046b880
// Address Range: [[0046b880, 0046b8c0]]
// Convention: unknown
// Signature: void FUN_0046b880(int param_1,int param_2)

#include "nocturne.h"

void FUN_0046b880(int param_1,int param_2)

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
  FUN_0051c1a0(uVar1);
  FUN_0046b870(param_1,param_2 == 0);
  return;
}
