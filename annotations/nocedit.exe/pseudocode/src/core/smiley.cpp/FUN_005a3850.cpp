// Name: core_smiley.cpp_FUN_005a3850
// Address: 005a3850
// Address Range: [[005a3850, 005a387b]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_FUN_005a3850(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_smiley.cpp_FUN_005a3850(uint param_1, uint
   param_2) */

void __cdecl core_smiley_cpp_FUN_005a3850(void)

{
  CDemonActor *in_stack_00000004;
  _FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            ((CDeformableModelInstance *)(in_stack_00000004 + 1),in_stack_00000008);
  return;
}
