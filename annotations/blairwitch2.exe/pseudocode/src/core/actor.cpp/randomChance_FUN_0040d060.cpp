// Name: core_actor.cpp_randomChance_FUN_0040d060
// Address: 0040d060
// Address Range: [[0040d060, 0040d0b1]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_randomChance_FUN_0040d060(float probability_threshold)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_randomChance_FUN_0040d060(float probability_threshold)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (g_CGamePtr->is_processing == 0) {
    iVar3 = rand();
    fVar1 = (float)iVar3 * _DAT_005caf36;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cef0();
    fVar1 = (float)(int)uVar2 * _DAT_005caf3a;
  }
  return (uint)(fVar1 < probability_threshold);
}
