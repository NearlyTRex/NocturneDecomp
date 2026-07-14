// Name: FUN_1000f950
// Address: 1000f950
// Address Range: [[1000f950, 1000f97e]]
// Convention: unknown
// Signature: undefined4 FUN_1000f950(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_1000f950(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if ((param_3 == 10) && (param_1 < 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FUN_1000f8f0(param_1,param_2,param_3,uVar1);
  return param_2;
}
