// Name: core_ghoul.cpp_CGhoul_getPropertyList_FUN_004e8dc0
// Address: 004e8dc0
// Address Range: [[004e8dc0, 004e8e1c]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_getPropertyList_FUN_004e8dc0 (CGhoul *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_ghoul_cpp_CGhoul_getPropertyList_FUN_004e8dc0
          (CGhoul *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220
            (property_list,"Lives left",&this_ptr->lives_left,0,999999,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
