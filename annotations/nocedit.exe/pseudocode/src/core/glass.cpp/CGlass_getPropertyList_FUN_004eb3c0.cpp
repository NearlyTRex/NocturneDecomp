// Name: core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0
// Address: 004eb3c0
// Address Range: [[004eb3c0, 004eb480]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0(CGlass * this_ptr, CActorPropertyList * property_list)

#include "nocturne.h"

void __cdecl
core_glass_cpp_CGlass_getPropertyList_FUN_004eb3c0
          (CGlass *this_ptr,CActorPropertyList *property_list)

{
  int *piStack0000000c;
  uint uStack00000010;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  piStack0000000c = &this_ptr->background_flag;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  if (this_ptr->background_flag == 0) {
    return;
  }
  uStack00000010 = 0;
  piStack0000000c = (int *)0x10;
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  return;
}
