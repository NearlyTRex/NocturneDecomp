// Name: core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730
// Address: 0042f730
// MANUAL RECONSTRUCTION
// Address Range: [[0042f730, 0042f7f4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730(CCharacter *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730(CCharacter *this_ptr,CActorPropertyList *property_list)

{
  int iVar3;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addClothList_FUN_0040e500
            (property_list,"cloth",&this_ptr->cloth_list,-1);
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    if (0 <= this_ptr->carry_hands[iVar3].bone_index) {
      core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
                (property_list,"Items Carried",
                 core_charactr_cpp_CCharacter_propertyDisplayCallback_FUN_0042f340,
                 core_charactr_cpp_CCharacter_propertyActionCallback_FUN_0042f3e0);
      break;
    }
  }
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (property_list,"talkToMeEvent",this_ptr->talk_to_me_event);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Etheral",&this_ptr->is_ethereal);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Descriptive name",this_ptr->descriptive_name,100,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Health bar",3,g_CharacterHealthBarTypePairs,
             &this_ptr->health_bar_mode);
  return;
}
