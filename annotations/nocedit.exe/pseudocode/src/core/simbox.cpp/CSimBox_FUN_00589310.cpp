// Name: core_simbox.cpp_CSimBox_FUN_00589310
// Address: 00589310
// Address Range: [[00589310, 005893bd]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_CSimBox_FUN_00589310(CSimBox * this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_FUN_00589310(CSimBox *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  uint uStack0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  if (*(int *)(this_ptr->field1_0x158 + 0x17c) != 1) {
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
  uStack0000000c = 0;
  core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
  return;
}
