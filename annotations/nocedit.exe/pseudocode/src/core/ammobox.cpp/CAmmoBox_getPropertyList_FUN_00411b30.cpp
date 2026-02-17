// Name: core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30
// Address: 00411b30
// Address Range: [[00411b30, 00411bfb]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_getPropertyList_FUN_00411b30(CAmmoBox *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_getPropertyList_FUN_00411b30(CAmmoBox *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  if (this_ptr->item == (CDemonActor *)0x0) {
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (property_list,"Weapon",this_ptr->weapon_class_name,0x40,
               (CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (property_list,"Amount of ammo",&this_ptr->ammo_count,
               (CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
              (property_list,"Ammo type",
               core_ammobox_cpp_CAmmoBox_propertyDisplayCallback_FUN_00411a30,
               core_ammobox_cpp_CAmmoBox_propertyActionFunc_FUN_00411ab0);
  }
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Inventory item",&this_ptr->item,1,"CDemonActor",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Has collision",&this_ptr->has_collision);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Open sound",this_ptr->open_sound);
  return;
}
