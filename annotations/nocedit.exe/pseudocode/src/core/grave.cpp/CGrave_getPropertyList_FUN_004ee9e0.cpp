// Name: core_grave.cpp_CGrave_getPropertyList_FUN_004ee9e0
// Address: 004ee9e0
// Address Range: [[004ee9e0, 004eea6a]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_getPropertyList_FUN_004ee9e0 (CGrave *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_grave_cpp_CGrave_getPropertyList_FUN_004ee9e0
          (CGrave *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Grave model (.KFM)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Animation FPS",&this_ptr->fps,0.0,200.0,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Hide on first frame",&this_ptr->hide_on_first_frame);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Start condition",this_ptr->start_condition);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Start sound",this_ptr->start_sound);
  return;
}
