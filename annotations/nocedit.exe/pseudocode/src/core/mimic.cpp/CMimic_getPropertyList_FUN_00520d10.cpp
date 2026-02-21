// Name: core_mimic.cpp_CMimic_getPropertyList_FUN_00520d10
// Address: 00520d10
// Address Range: [[00520d10, 00520d9b]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_getPropertyList_FUN_00520d10(CMimic *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_getPropertyList_FUN_00520d10(CMimic *this_ptr,CActorPropertyList *property_list)

{
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"mirrorCondition",this_ptr->mirror_condition);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"attackCondition",this_ptr->attack_condition);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"attackMode",&this_ptr->attack_mode,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"mirrorPlaneActor",&this_ptr->mirror_plane_actor,0,(char *)0x0,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"morphActorType",this_ptr->morph_actor_type,0x28,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
