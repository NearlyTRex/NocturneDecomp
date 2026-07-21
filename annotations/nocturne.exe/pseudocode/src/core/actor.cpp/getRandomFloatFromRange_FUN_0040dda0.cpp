// Name: core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
// Address: 0040dda0
// Address Range: [[0040dda0, 0040ddff]]
// Convention: unknown
// Signature: float core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(0x01C775EC + 0x23c) == 0) {
    iVar2 = rand();
    fVar1 = (float)iVar2 * _DAT_00578049;
  }
  else {
    iVar2 = core_actor_cpp_generateRandomValue_FUN_0040dd30();
    fVar1 = (float)iVar2 * _DAT_0057804d;
  }
  return fVar1 * (param_2 - param_1) + param_1;
}
