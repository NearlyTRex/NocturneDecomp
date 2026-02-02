// Name: core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360
// Address: 00411360
// Address Range: [[00411360, 004113d5]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_getPropertyList_FUN_00411360(CAmmo *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_ammo_cpp_CAmmo_getPropertyList_FUN_00411360(CAmmo *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Weapon",this_ptr->weapon_class_name,0x40,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Amount of ammo",&this_ptr->ammo_count,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (property_list,"Ammo type",
             core_ammo_cpp_CAmmo_propertyDisplayCallback_FUN_00411200,
             core_ammo_cpp_CAmmo_propertyActionCallback_FUN_004112b0);
  return;
}
