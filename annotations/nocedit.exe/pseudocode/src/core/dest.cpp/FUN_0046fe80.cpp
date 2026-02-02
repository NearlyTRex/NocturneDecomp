// Name: core_dest.cpp_FUN_0046fe80
// Address: 0046fe80
// Address Range: [[0046fe80, 0046fef7]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_FUN_0046fe80(void)

#include "nocturne.h"

/* Signature: byte actors_other_dest.cpp_FUN_0046fe80(uint param_1, uint param_2)
    */

void __cdecl core_dest_cpp_FUN_0046fe80(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (in_stack_00000008,"Actor who goes here",in_stack_00000004 + 1,1,
             "CDemonActor",(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (in_stack_00000008,"Event to raise when in place",
             (char *)&in_stack_00000004[1].orient);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (in_stack_00000008,"Actor class to go here",in_stack_00000004[1].actor_name + 4
             ,0x27,(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Persistant event flag",
             (int *)(in_stack_00000004[1].create_event + 0x1c));
  return;
}
