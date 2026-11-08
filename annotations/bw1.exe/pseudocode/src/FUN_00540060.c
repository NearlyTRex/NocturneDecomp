// Name: FUN_00540060
// Address: 00540060
// Address Range: [[00540060, 0054007b]]
// Convention: unknown
// Signature: void FUN_00540060(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00540060(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x57c) = 1;
  FUN_005ad770(param_1,param_2);
  return;
}
