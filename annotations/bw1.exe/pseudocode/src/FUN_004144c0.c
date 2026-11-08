// Name: FUN_004144c0
// Address: 004144c0
// Address Range: [[004144c0, 004144ce]]
// Convention: unknown
// Signature: void FUN_004144c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004144c0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2d4) = param_2;
  return;
}
