// Name: core_trash.cpp_addRandomJitter_FUN_005decc0
// Address: 005decc0
// Address Range: [[005decc0, 005decd1]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_addRandomJitter_FUN_005decc0(float *value)

#include "nocturne.h"

void __cdecl core_trash_cpp_addRandomJitter_FUN_005decc0(float *value)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  *value = fVar1 + *value;
  return;
}
