// Name: core_bodypart.cpp_FUN_0041b1b0
// Address: 0041b1b0
// Address Range: [[0041b1b0, 0041b1e5]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b1b0()

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041b1b0(void)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.08);
  if (iVar1 == 0) {
    return;
  }
  core_gore_cpp_FUN_004edaa0();
  return;
}
