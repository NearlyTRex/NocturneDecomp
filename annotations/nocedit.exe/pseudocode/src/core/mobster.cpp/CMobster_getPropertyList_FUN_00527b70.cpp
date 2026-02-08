// Name: core_mobster.cpp_CMobster_getPropertyList_FUN_00527b70
// Address: 00527b70
// Address Range: [[00527b70, 00527c29]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_getPropertyList_FUN_00527b70 (CMobster *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_mobster_cpp_CMobster_getPropertyList_FUN_00527b70
          (CMobster *this_ptr,CActorPropertyList *property_list)

{
  CDeformableModelInstance *data_ptr;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  data_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (property_list,"Model",data_ptr,0);
  core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(property_list,"State",data_ptr);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Our post",&this_ptr->our_post,1,"CWayPoint",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Our car",&this_ptr->vehicle,1,"CVehicle",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Left side of car",&this_ptr->side_of_car);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Hold pos (sniper)",&this_ptr->hold_pos_flag);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Hold pos cond (sniper)",this_ptr->hold_pos_condition);
  return;
}
