// Name: core_tvbat.cpp_CTVBat_getPropertyList_FUN_005e51a0
// Address: 005e51a0
// Address Range: [[005e51a0, 005e5253]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_getPropertyList_FUN_005e51a0(CTVBat *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_getPropertyList_FUN_005e51a0(CTVBat *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Rotation speed",&this_ptr->rot_speed,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Movement speed",&this_ptr->move_speed,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Follow orders",&this_ptr->follow_orders);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Periodic sound",this_ptr->periodic_sound);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Sound period min",&this_ptr->periodic_sound_timer_min,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Sound period max",&this_ptr->periodic_sound_timer_max,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
