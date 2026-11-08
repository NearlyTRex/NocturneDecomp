// Name: FUN_004d4200
// Address: 004d4200
// Address Range: [[004d4200, 004d4220]]
// Convention: unknown
// Signature: void FUN_004d4200(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004d4200(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x20bc8) = param_2;
  FUN_005a28f0(param_1 + 0xcdd4,0,0x34);
  return;
}
