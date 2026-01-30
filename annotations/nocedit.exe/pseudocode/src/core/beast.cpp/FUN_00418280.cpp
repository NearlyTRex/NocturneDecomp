// Name: core_beast.cpp_FUN_00418280
// Address: 00418280
// Address Range: [[00418280, 0041829f]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_FUN_00418280(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_beast.cpp_FUN_00418280(uint param_1) */

void __cdecl core_beast_cpp_FUN_00418280(void)

{
  CEnemy *in_stack_00000004;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&(in_stack_00000004->base).model)
  ;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  return;
}
