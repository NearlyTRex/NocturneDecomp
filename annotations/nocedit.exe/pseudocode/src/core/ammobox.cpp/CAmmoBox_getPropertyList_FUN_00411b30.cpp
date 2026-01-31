// Name: core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30
// Address: 00411b30
// Address Range: [[00411b30, 00411bfb]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_getPropertyList_FUN_00411b30 (CAmmoBox *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_ammobox_cpp_CAmmoBox_getPropertyList_FUN_00411b30
          (CAmmoBox *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
  if (this_ptr->item == (char *)0x0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
    core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
    core_actor_cpp_CActorPropertyList_FUN_0040e670(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e350(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  return;
}
