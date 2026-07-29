// Name: core_flamegun.cpp_FUN_0048ec60
// Address: 0048ec60
// Address Range: [[0048ec60, 0048ec7f] [0048ec81, 0048eca4]]
// Convention: unknown
// Signature: float core_flamegun_cpp_FUN_0048ec60(int param_1)

#include "nocturne.h"

float core_flamegun_cpp_FUN_0048ec60(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x564) == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(150.0,200.0);
  return fVar1;
}
