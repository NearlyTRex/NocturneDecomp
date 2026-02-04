// Name: core_dracbrid.cpp_FUN_00486d00
// Address: 00486d00
// Address Range: [[00486d00, 00486d2b]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_00486d00(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_00486d00(uint param_1, uint
   param_2) */

void __cdecl core_dracbrid_cpp_FUN_00486d00(void)

{
  CDemonActor *in_stack_00000004;
  _FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            ((CDeformableModelInstance *)(in_stack_00000004 + 1),in_stack_00000008);
  return;
}
