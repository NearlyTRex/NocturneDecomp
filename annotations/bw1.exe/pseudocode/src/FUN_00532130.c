// Name: FUN_00532130
// Address: 00532130
// Address Range: [[00532130, 00532142]]
// Convention: unknown
// Signature: void FUN_00532130(int param_1)

#include "nocturne.h"

void FUN_00532130(int param_1)

{
  *(uint *)(param_1 + 0x24) = 0;
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_006045e0;
  return;
}
