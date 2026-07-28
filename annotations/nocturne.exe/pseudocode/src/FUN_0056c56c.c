// Name: FUN_0056c56c
// Address: 0056c56c
// Address Range: [[0056c56c, 0056c5a5]]
// Convention: unknown
// Signature: double FUN_0056c56c(int param_1,uint param_2)

#include "nocturne.h"

double FUN_0056c56c(int param_1,uint param_2)

{
  double dVar1;
  
  if (((param_2 & 0x80000000) == 0) || ((param_2 & 0x7fffffff) == 0 && param_1 == 0)) {
    dVar1 = SQRT(__BITCAST_DOUBLE(CONCAT44(param_2,param_1)));
  }
  else {
    dVar1 = handle_math_error();
  }
  return dVar1;
}
