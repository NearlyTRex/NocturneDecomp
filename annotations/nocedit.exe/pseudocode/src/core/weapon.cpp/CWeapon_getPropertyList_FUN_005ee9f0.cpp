// Name: core_weapon.cpp_CWeapon_getPropertyList_FUN_005ee9f0
// Address: 005ee9f0
// Address Range: [[005ee9f0, 005eea5c]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0 (CWeapon *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0
          (CWeapon *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Weapon state",4,(int *)&PTR_s_Lying_Around_006848b4);
  if (this_ptr->weapon_state != 0) {
    return;
  }
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Sim timer",&this_ptr->sim_timer,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
