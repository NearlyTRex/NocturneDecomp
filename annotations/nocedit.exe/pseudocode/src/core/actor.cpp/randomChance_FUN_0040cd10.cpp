// Name: core_actor.cpp_randomChance_FUN_0040cd10
// Address: 0040cd10
// Address Range: [[0040cd10, 0040cd61]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_randomChance_FUN_0040cd10(float probability_threshold)

#include "nocturne.h"

int __cdecl core_actor_cpp_randomChance_FUN_0040cd10(float probability_threshold)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (g_CGamePtr->is_processing == 0) {
    iVar3 = rand();
    fVar1 = (float)iVar3 * (float)INT_00614308;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    fVar1 = (float)(int)uVar2 * (float)INT_0061430c;
  }
  return (uint)(fVar1 < probability_threshold);
}
