// Name: FUN_004a4cd0
// Address: 004a4cd0
// Address Range: [[004a4cd0, 004a4cfb]]
// Convention: unknown
// Signature: void FUN_004a4cd0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004a4cd0(uint param_1,uint param_2,int param_3,uint param_4)

{
  FUN_0040aca0(param_1,param_2,param_3,param_4);
  *(uint *)(param_3 + 4) = 0x41700000;
  return;
}
