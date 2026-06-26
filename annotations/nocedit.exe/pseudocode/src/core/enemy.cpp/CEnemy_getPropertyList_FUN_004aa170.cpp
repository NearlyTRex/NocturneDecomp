// Name: core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
// Address: 004aa170
// Address Range: [[004aa170, 004aa24f]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy *this_ptr,CActorPropertyList *property_list)

{
  CActorProperty *pCVar1;
  
  core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Speed",&this_ptr->speed,0.1,20.0,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Randomize me",&this_ptr->randomize_me);
  pCVar1 = core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
                     (property_list,"Size scale",&(this_ptr->base).size_scale,
                      (CActorPropertyValidatorFunc *)0x0);
  pCVar1->auto_update_flag = 1;
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"hitPoints",&(this_ptr->base).hit_points,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"patrolNamePattern",this_ptr->patrol_name_pattern,100,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Guard distance",&this_ptr->guard_distance,1.0,400.0,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Victim height",&this_ptr->victim_height,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
