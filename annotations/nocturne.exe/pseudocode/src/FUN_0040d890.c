// Name: FUN_0040d890
// Address: 0040d890
// Address Range: [[0040d890, 0040d8b2]]
// Convention: unknown
// Signature: int FUN_0040d890(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_0040d890(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0040d860(param_1,param_2), iVar1 != 0)) {
    return param_1;
  }
  return 0;
}
