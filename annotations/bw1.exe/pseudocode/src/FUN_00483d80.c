// Name: FUN_00483d80
// Address: 00483d80
// Address Range: [[00483d80, 00483dc0]]
// Convention: unknown
// Signature: void FUN_00483d80(int param_1,int param_2)

#include "nocturne.h"

void FUN_00483d80(int param_1,int param_2)

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
  FUN_0053d7a0(uVar1);
  FUN_00483d70(param_1,param_2 == 0);
  return;
}
