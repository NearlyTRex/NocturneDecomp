// Name: core_actor.cpp_randomChance_FUN_0040dea0
// Address: 0040dea0
// Address Range: [[0040dea0, 0040def1]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_randomChance_FUN_0040dea0(float probability_threshold)

#include "nocturne.h"

int __cdecl core_actor_cpp_randomChance_FUN_0040dea0(float probability_threshold)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (g_CGame_PTR_005b9354->is_processing == 0) {
    iVar3 = rand();
    fVar1 = (float)iVar3 * 3.051851e-05f;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040dd30();
    fVar1 = (float)(int)uVar2 * 5.960465e-08f;
  }
  return (uint)(fVar1 < probability_threshold);
}
