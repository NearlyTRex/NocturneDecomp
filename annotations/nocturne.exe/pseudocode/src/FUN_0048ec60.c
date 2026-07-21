// Name: FUN_0048ec60
// Address: 0048ec60
// Address Range: [[0048ec60, 0048ec7f] [0048ec81, 0048eca4]]
// Convention: unknown
// Signature: undefined4 FUN_0048ec60(int param_1)

#include "nocturne.h"

uint FUN_0048ec60(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x564) == 6) {
    return 0;
  }
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x43160000,0x43480000);
  return uVar1;
}
