// Name: FUN_00419860
// Address: 00419860
// Address Range: [[00419860, 0041987e]]
// Convention: unknown
// Signature: undefined4 FUN_00419860(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00419860(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xd0e4) != 0) {
    return 0;
  }
  uVar1 = FUN_00430430(param_1,param_2);
  return uVar1;
}
