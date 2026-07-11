// Name: FUN_0056b327
// Address: 0056b327
// Address Range: [[0056b327, 0056b35b]]
// Convention: unknown
// Signature: void FUN_0056b327(int param_1,uint param_2)

#include "nocturne.h"

void FUN_0056b327(int param_1,uint param_2)

{
  byte local_8 [4];
  
  param_2 = *(uint *)(param_1 + 0x10) | param_2;
  *(uint *)(param_1 + 0x10) = param_2;
  param_2 = param_2 & *(uint *)(param_1 + 0x14);
  if (param_2 == 0) {
    return;
  }
  FUN_0056fddd(local_8,param_2);
  return;
}
