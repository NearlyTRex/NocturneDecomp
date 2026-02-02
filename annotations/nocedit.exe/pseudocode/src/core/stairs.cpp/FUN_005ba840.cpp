// Name: core_stairs.cpp_FUN_005ba840
// Address: 005ba840
// Address Range: [[005ba840, 005ba8f5]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_FUN_005ba840(void)

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005ba840(uint param_1, uint
   param_2) */

void __cdecl core_stairs_cpp_FUN_005ba840(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (in_stack_00000008,"stair count",
             (int *)(in_stack_00000004[1].actor_name + 0x14),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"rise",(float *)(in_stack_00000004 + 1),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"run",(float *)(in_stack_00000004[1].actor_name + 4),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"width",(float *)(in_stack_00000004[1].actor_name + 8),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"bevelY",(float *)(in_stack_00000004[1].actor_name + 0xc),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"bevelZ",(float *)(in_stack_00000004[1].actor_name + 0x10),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300
            (in_stack_00000008,"ground type",
             (int *)(in_stack_00000004[7].create_event + 0x50));
  return;
}
