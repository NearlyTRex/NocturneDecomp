// Name: core_passngr.cpp_CPassenger_getPropertyList_FUN_00546270
// Address: 00546270
// Address Range: [[00546270, 005462e4]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_getPropertyList_FUN_00546270(CPassenger *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_passngr_cpp_CPassenger_getPropertyList_FUN_00546270(CPassenger *this_ptr,CActorPropertyList *property_list)

{
  core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Wolf model name",this_ptr->wolf_model_name,0x1f,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Transform condition",this_ptr->transform_event);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Wolf size scale",&this_ptr->wolf_size,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Name of wolf",this_ptr->name_of_wolf,0x1d,
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
