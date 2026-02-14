// Name: core_moloch.cpp_CMoloch_getPropertyList_FUN_00529950
// Address: 00529950
// Address Range: [[00529950, 005299a5]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_getPropertyList_FUN_00529950(CMoloch *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_getPropertyList_FUN_00529950(CMoloch *this_ptr,CActorPropertyList *property_list)

{
  core_hero_cpp_CHero_getPropertyList_FUN_004f3f20(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"In human form",&this_ptr->in_human_form);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"humanToDemonCond",this_ptr->human_to_demon_condition);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"demonToHumanCond",this_ptr->demon_to_human_condition);
  return;
}
