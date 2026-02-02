// Name: core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0
// Address: 004e5af0
// Address Range: [[004e5af0, 004e5b91]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_getPropertyList_FUN_004e5af0 (CGargoyle *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_gargoyle_cpp_CGargoyle_getPropertyList_FUN_004e5af0
          (CGargoyle *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Stone red",&this_ptr->stone_red,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Stone green",&this_ptr->stone_green,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Stone blue",&this_ptr->stone_blue,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Home waypoint",this_ptr->unk2,1,"CWayPoint",
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
