// Name: core_flies.cpp_FUN_004ccaa0
// Address: 004ccaa0
// Address Range: [[004ccaa0, 004ccae0]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_FUN_004ccaa0(void)

#include "nocturne.h"

/* Signature: byte actors_other_flies.cpp_FUN_004ccaa0(uint param_1, uint param_2)
    */

void __cdecl core_flies_cpp_FUN_004ccaa0(void)

{
  CActorProperty *pCVar1;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  pCVar1 = core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220
                     (in_stack_00000008,"flyCount",
                      (int *)(in_stack_00000004[1].actor_name + 0xc),0,200,
                      (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  pCVar1->auto_update_flag = 1;
  return;
}
