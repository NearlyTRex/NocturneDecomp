// Name: FUN_00461090
// Address: 00461090
// Address Range: [[00461090, 004610ad]]
// Convention: unknown
// Signature: undefined4 FUN_00461090(undefined4 param_1,int *param_2)

#include "nocturne.h"

uint FUN_00461090(uint param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_2 == 1) {
    return 3;
  }
  uVar1 = FUN_004310b0(param_1,param_2);
  return uVar1;
}
