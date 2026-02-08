// Name: core_actor.cpp_CActorPropertyList_init_FUN_0040e130
// Address: 0040e130
// Address Range: [[0040e130, 0040e147]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorPropertyList_init_FUN_0040e130(CActorPropertyList *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_init_FUN_0040e130(CActorPropertyList *this_ptr)

{
  this_ptr->owner = (CDemonActor *)0x0;
  core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150(this_ptr);
  return;
}
