// Name: core_litecone.cpp_CLightCone_getPropertyList_FUN_00506da0
// Address: 00506da0
// Address Range: [[00506da0, 00506e23]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_getPropertyList_FUN_00506da0 (CLightCone *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_litecone_cpp_CLightCone_getPropertyList_FUN_00506da0
          (CLightCone *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"fov",&this_ptr->fov,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"falloff",&this_ptr->falloff,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"state",&this_ptr->state);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"On condition",this_ptr->on_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Off condition",this_ptr->off_event);
  return;
}
