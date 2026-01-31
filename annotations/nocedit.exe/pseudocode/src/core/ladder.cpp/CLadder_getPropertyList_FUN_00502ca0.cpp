// Name: core_ladder.cpp_CLadder_getPropertyList_FUN_00502ca0
// Address: 00502ca0
// Address Range: [[00502ca0, 00502cfd]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_getPropertyList_FUN_00502ca0 (CLadder *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_ladder_cpp_CLadder_getPropertyList_FUN_00502ca0
          (CLadder *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e300(property_list);
  return;
}
