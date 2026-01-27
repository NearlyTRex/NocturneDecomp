// Name: core_backgnd.cpp_CBackgroundActor_FUN_00412a40
// Address: 00412a40
// Address Range: [[00412a40, 00412aa4]]
// Convention: __cdecl
// Signature: void core_backgnd.cpp_CBackgroundActor_FUN_00412a40(CBackgroundActor * this_ptr)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412a40(CBackgroundActor *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  if (this_ptr->collide_with_me == 0) {
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e300(in_stack_00000008);
  return;
}
