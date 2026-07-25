// Name: FUN_0056c56c
// Address: 0056c56c
// Address Range: [[0056c56c, 0056c5a5]]
// Convention: unknown
// Signature: undefined4 FUN_0056c56c(int param_1,uint param_2)

#include "nocturne.h"

uint FUN_0056c56c(int param_1,uint param_2)

{
  uint uVar1;
  
  if (((param_2 & 0x80000000) == 0) || ((param_2 & 0x7fffffff) == 0 && param_1 == 0)) {
    uVar1 = SUB84(SQRT(__BITCAST_DOUBLE(CONCAT44(param_2,param_1))),0);
  }
  else {
    uVar1 = FUN_005707db(param_1,param_2,3);
  }
  return uVar1;
}
