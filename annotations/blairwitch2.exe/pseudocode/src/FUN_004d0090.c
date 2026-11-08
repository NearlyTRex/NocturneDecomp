// Name: FUN_004d0090
// Address: 004d0090
// Address Range: [[004d0090, 004d00b0]]
// Convention: unknown
// Signature: void FUN_004d0090(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004d0090(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x25638) = param_2;
  FUN_005b77c0(param_1 + 0x10a68,0,0x34);
  return;
}
