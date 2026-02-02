// Name: core_conveyor.cpp_FUN_00442130
// Address: 00442130
// Address Range: [[00442130, 004421b5]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_FUN_00442130(void)

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_00442130(uint param_1, uint
   param_2) */

void __cdecl core_conveyor_cpp_FUN_00442130(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Moving",(int *)&in_stack_00000004[5].vtable);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Start condition",in_stack_00000004[5].create_event + 0x14);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Stop condition",(char *)&in_stack_00000004[5].unk4.y);
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (in_stack_00000008,"Direction",
             (CVector3f *)(in_stack_00000004[5].create_event + 8),
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (in_stack_00000008,"Actor class to effect",in_stack_00000004[6].actor_name,0x4f
             ,(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
