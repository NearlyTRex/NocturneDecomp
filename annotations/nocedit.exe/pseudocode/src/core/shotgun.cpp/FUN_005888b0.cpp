// Name: core_shotgun.cpp_FUN_005888b0
// Address: 005888b0
// Address Range: [[005888b0, 005888da]]
// Convention: __cdecl
// Signature: float __cdecl core_shotgun_cpp_FUN_005888b0(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_shotgun.cpp_FUN_005888b0(uint param_1) */

float __cdecl core_shotgun_cpp_FUN_005888b0(void)

{
  float fVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x56c) == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(150.0,200.0);
  return fVar1;
}
