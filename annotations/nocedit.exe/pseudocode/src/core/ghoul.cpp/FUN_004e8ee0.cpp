// Name: core_ghoul.cpp_FUN_004e8ee0
// Address: 004e8ee0
// Address Range: [[004e8ee0, 004e8f0b]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_FUN_004e8ee0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e8ee0(uint param_1, uint param_2)
    */

void __cdecl core_ghoul_cpp_FUN_004e8ee0(void)

{
  CDemonActor *in_stack_00000004;
  _FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            ((CDeformableModelInstance *)(in_stack_00000004 + 1),in_stack_00000008);
  return;
}
