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
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"courseName",this_ptr->course_name,0x1f,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"totalTime",&this_ptr->total_time,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Display type",2,g_MarqueeDisplayTypePairs,&this_ptr->type);
  if (this_ptr->type != 0) {
    (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
    return;
  }
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"phase",&this_ptr->phase,(CActorPropertyValidatorFunc *)0x0);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  return;
}
