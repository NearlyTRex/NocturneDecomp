// Name: core_actor.cpp_getRandomFloat_FUN_0040cbc0
// Address: 0040cbc0
// Address Range: [[0040cbc0, 0040cc0a]]
// Convention: __cdecl
// Signature: float core_actor.cpp_getRandomFloat_FUN_0040cbc0(void)

#include "nocturne.h"

float __cdecl core_actor_cpp_getRandomFloat_FUN_0040cbc0(void)

{
  uint uVar1;
  int iVar2;
  
  if (g_CGamePtr->is_processing != 0) {
    uVar1 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    return (float)(int)uVar1 * (float)INT_006142ec;
  }
  iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
  return (float)iVar2 * 3.051851e-05f;
}
