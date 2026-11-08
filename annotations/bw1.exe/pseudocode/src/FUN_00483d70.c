// Name: FUN_00483d70
// Address: 00483d70
// Address Range: [[00483d70, 00483d7b]]
// Convention: unknown
// Signature: void FUN_00483d70(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00483d70(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = param_2;
  return;
}
