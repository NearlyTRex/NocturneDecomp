// Name: FUN_004347c0
// Address: 004347c0
// Address Range: [[004347c0, 00434806]]
// Convention: unknown
// Signature: void FUN_004347c0(int param_1)

#include "nocturne.h"

void FUN_004347c0(int param_1)

{
  FUN_004342d0(param_1 + 4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
  FUN_00433760(param_1 + 0x18);
  *(uint *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)(param_1 + 0x34) = 0xffffffff;
  *(uint *)(param_1 + 0x38) = 0xffffffff;
  *(uint *)(param_1 + 0x3c) = 0xffffffff;
  return;
}
