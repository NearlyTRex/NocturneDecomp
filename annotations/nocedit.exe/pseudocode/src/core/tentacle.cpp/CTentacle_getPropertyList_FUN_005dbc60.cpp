// Name: core_tentacle.cpp_CTentacle_getPropertyList_FUN_005dbc60
// Address: 005dbc60
// Address Range: [[005dbc60, 005dbcbc]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_getPropertyList_FUN_005dbc60 (CTentacle *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_tentacle_cpp_CTentacle_getPropertyList_FUN_005dbc60
          (CTentacle *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Grave actor",&this_ptr->grave_actor,0,"CGrave",
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
