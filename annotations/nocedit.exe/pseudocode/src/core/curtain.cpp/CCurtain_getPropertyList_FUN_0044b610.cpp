// Name: core_curtain.cpp_CCurtain_getPropertyList_FUN_0044b610
// Address: 0044b610
// Address Range: [[0044b610, 0044b79d]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_getPropertyList_FUN_0044b610 (CCurtain *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_curtain_cpp_CCurtain_getPropertyList_FUN_0044b610
          (CCurtain *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Texture",this_ptr->curtain_texture,0x10,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Opacity",&this_ptr->opacity,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Weight",&this_ptr->weight,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Dampen",&this_ptr->dampen,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Spring",&this_ptr->spring,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Friction",&this_ptr->friction,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Gravity",&this_ptr->gravity,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Simulated",&this_ptr->simulate_me);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Hit floor",&this_ptr->hit_floor);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"cinchedTop",&this_ptr->cinched_top);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"cinchedBottom",&this_ptr->cinched_bottom);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"cinchedLeft",&this_ptr->cinched_left);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"cinchedRight",&this_ptr->cinched_right);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"falling",&this_ptr->falling);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Let go condition",this_ptr->let_go_event);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Patch size",&this_ptr->patch_size,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Block virtual director",&this_ptr->block_virtual_director_flag)
  ;
  return;
}
