// Name: core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0
// Address: 004eb3c0
// Address Range: [[004eb3c0, 004eb480]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_getPropertyList_FUN_004eb3c0(CGlass *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_getPropertyList_FUN_004eb3c0(CGlass *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Texture",(this_ptr->glass_texture).texture_name,0x10,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Cause shatter condition",this_ptr->break_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Allow shatter condition",this_ptr->breakable_condition);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Am I a mirror",&this_ptr->mirror_flag);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Opacity",&this_ptr->opacity,(CActorPropertyValidatorFunc *)0x0)
  ;
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"backgroundFlag",&this_ptr->background_flag);
  if (this_ptr->background_flag == 0) {
    return;
  }
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Broken texture",(this_ptr->broken_texture).texture_name,0x10,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
