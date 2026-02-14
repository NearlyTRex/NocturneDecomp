// Name: core_crate.cpp_CCrate_getPropertyList_FUN_00448b20
// Address: 00448b20
// Address Range: [[00448b20, 00448b52]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_getPropertyList_FUN_00448b20(CCrate *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_getPropertyList_FUN_00448b20(CCrate *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  return;
}
