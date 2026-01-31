// Name: core_marquee.cpp_CMarquee_getPropertyList_FUN_0050c3e0
// Address: 0050c3e0
// Address Range: [[0050c3e0, 0050c47d]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_getPropertyList_FUN_0050c3e0 (CMarquee *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_marquee_cpp_CMarquee_getPropertyList_FUN_0050c3e0
          (CMarquee *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  if (this_ptr->type != 0) {
    (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  return;
}
