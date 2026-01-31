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
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  return;
}
