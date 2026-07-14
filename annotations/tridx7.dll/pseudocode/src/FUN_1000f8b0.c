// Name: FUN_1000f8b0
// Address: 1000f8b0
// Address Range: [[1000f8b0, 1000f8eb]]
// Convention: unknown
// Signature: undefined4 FUN_1000f8b0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_1000f8b0(int param_1,uint param_2,int param_3)

{
  if ((param_3 == 10) && (param_1 < 0)) {
    FUN_1000f8f0(param_1,param_2,10,1);
    return param_2;
  }
  FUN_1000f8f0(param_1,param_2,param_3,0);
  return param_2;
}
