// Name: FUN_004b8590
// Address: 004b8590
// Address Range: [[004b8590, 004b85f2]]
// Convention: unknown
// Signature: undefined4 FUN_004b8590(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_004b8590(int param_1,uint param_2,int param_3)

{
  *(int *)(param_1 + 0x2594) = param_3;
  *(uint *)(param_1 + 0x2590) = param_2;
  if (param_3 == 0) {
    FUN_004e16b0(param_1 + 0x150,4,1);
    FUN_0047ab70(0x01C03A10,param_1 + 0x1f724);
  }
  *(uint *)(param_1 + 0x1f954) = 0x40400000;
  *(uint *)(param_1 + 0x1f950) = param_2;
  return 1;
}
