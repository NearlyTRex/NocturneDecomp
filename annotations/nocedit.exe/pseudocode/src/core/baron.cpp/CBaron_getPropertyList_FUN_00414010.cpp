// Name: core_baron.cpp_CBaron_getPropertyList_FUN_00414010
// Address: 00414010
// Address Range: [[00414010, 00414065]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_getPropertyList_FUN_00414010 (CBaron *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_baron_cpp_CBaron_getPropertyList_FUN_00414010
          (CBaron *this_ptr,CActorPropertyList *property_list)

{
  core_hero_cpp_CHero_getPropertyList_FUN_004f3f20(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  return;
}
