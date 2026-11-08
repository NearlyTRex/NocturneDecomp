// Name: FUN_004d02b0
// Address: 004d02b0
// Address Range: [[004d02b0, 004d02d5]]
// Convention: unknown
// Signature: void FUN_004d02b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004d02b0(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 0x10a60) = 0;
  FUN_00423900(param_1,param_2,param_3,param_4);
  return;
}
