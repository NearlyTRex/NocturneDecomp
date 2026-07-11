// Name: FUN_0056af76
// Address: 0056af76
// Address Range: [[0056af76, 0056afb4]]
// Convention: unknown
// Signature: void FUN_0056af76(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0056af76(uint param_1,uint param_2)

{
  int iVar1;
  ushort in_DS;
  
  iVar1 = FUN_0056fca0(param_1,in_DS);
  if (iVar1 != 0) {
    FUN_0056fcd4(param_2);
    return;
  }
  FUN_0056dd80(param_1,param_2);
  return;
}
