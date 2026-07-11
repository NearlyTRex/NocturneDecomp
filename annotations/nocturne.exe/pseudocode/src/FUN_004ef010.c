// Name: FUN_004ef010
// Address: 004ef010
// Address Range: [[004ef010, 004ef022]]
// Convention: unknown
// Signature: void FUN_004ef010(int param_1)

#include "nocturne.h"

void FUN_004ef010(int param_1)

{
  *(uint *)(param_1 + 0x18) = 0;
  *(byte ***)(param_1 + 0x34) = &PTR_FUN_005a1034;
  return;
}
