// Name: FUN_004af0f0
// Address: 004af0f0
// Address Range: [[004af0f0, 004af117]]
// Convention: unknown
// Signature: void FUN_004af0f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004af0f0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  *(uint *)(param_1 + 0x50) = param_4;
  FUN_00532160(param_1,param_2,param_3);
  *(uint *)(param_1 + 0x40) = param_5;
  return;
}
