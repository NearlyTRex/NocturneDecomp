// Name: FUN_00527d50
// Address: 00527d50
// Address Range: [[00527d50, 00527d6b]]
// Convention: unknown
// Signature: void FUN_00527d50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00527d50(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x598) = 1;
  FUN_0057b160(param_1,param_2);
  return;
}
