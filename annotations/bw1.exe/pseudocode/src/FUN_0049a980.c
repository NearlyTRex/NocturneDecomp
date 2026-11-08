// Name: FUN_0049a980
// Address: 0049a980
// Address Range: [[0049a980, 0049a9ac]]
// Convention: unknown
// Signature: void FUN_0049a980(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0049a980(int param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_0049b060(param_1,param_2,param_4);
  *(uint *)(param_1 + 0x194) = param_3;
  FUN_0049be50(param_1);
  return;
}
