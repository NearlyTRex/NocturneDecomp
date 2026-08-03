// Name: core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
// Address: 0040dda0
// Address Range: [[0040dda0, 0040ddff]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value,float max_value)

#include "nocturne.h"

float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value,float max_value)

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
  return fVar1 * (max_value - min_value) + min_value;
}
