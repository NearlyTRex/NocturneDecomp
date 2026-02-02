// Name: core_backgnd.cpp_CBackgroundActor_getPropertyList_FUN_00412a40
// Address: 00412a40
// Address Range: [[00412a40, 00412aa4]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_CBackgroundActor_getPropertyList_FUN_00412a40 (CBackgroundActor *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_backgnd_cpp_CBackgroundActor_getPropertyList_FUN_00412a40
          (CBackgroundActor *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Collision enabled",&this_ptr->collide_with_me);
  if (this_ptr->collide_with_me == 0) {
    return;
  }
  core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300
            (property_list,"ground type",&this_ptr->ground_type);
  return;
}
