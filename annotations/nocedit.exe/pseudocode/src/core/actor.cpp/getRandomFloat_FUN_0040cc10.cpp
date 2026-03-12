// Name: core_actor.cpp_getRandomFloat_FUN_0040cc10
// Address: 0040cc10
// Address Range: [[0040cc10, 0040cc6f]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_getRandomFloat_FUN_0040cc10(float min_value,float max_value)

#include "nocturne.h"

float __cdecl core_actor_cpp_getRandomFloat_FUN_0040cc10(float min_value,float max_value)

{
  uint uVar2;
  int iVar3;
  float fVar1;
  
  if (g_CGamePtr->is_processing == 0) {
    iVar3 = rand();
    fVar1 = (float)iVar3 * 3.051851e-05f;
  }
  else {
    uVar2 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    fVar1 = (float)(int)uVar2 * (float)g_RandToFloatFixedMultiplier;
  }
  return fVar1 * (max_value - min_value) + min_value;
}
