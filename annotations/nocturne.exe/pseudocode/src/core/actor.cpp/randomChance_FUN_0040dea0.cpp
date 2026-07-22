// Name: core_actor.cpp_randomChance_FUN_0040dea0
// Address: 0040dea0
// Address Range: [[0040dea0, 0040def1]]
// Convention: __cdecl
// Signature: bool __cdecl core_actor_cpp_randomChance_FUN_0040dea0(float param_1)

#include "nocturne.h"

bool __cdecl core_actor_cpp_randomChance_FUN_0040dea0(float param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(0x01C775EC + 0x23c) == 0) {
    iVar2 = rand();
    fVar1 = (float)iVar2 * 3.051851e-05f;
  }
  else {
    iVar2 = core_actor_cpp_generateRandomValue_FUN_0040dd30();
    fVar1 = (float)iVar2 * 5.960465e-08f;
  }
  return fVar1 < param_1;
}
