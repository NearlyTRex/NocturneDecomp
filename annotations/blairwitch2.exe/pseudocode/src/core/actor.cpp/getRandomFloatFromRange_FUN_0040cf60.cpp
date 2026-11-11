// Name: core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
// Address: 0040cf60
// Address Range: [[0040cf60, 0040cfbf]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value,float max_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value,float max_value)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (g_CGamePtr->is_processing == 0) {
    iVar3 = rand();
    fVar1 = (float)iVar3 * _DAT_005caf1a;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cef0();
    fVar1 = (float)(int)uVar2 * _DAT_005caf1e;
  }
  return fVar1 * (max_value - min_value) + min_value;
}
