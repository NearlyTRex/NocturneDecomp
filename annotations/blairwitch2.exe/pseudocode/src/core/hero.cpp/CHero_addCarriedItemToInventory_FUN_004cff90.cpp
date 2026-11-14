// Name: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004cff90
// Address: 004cff90
// Address Range: [[004cff90, 004d006a]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004cff90(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004cff90(CHero *this_ptr,int hand_index)

{
  CDemonActor *str1;
  int iVar1;
  
  str1 = (this_ptr->base).carry_hands[hand_index].carry_actor;
  if (str1 != (CDemonActor *)0x0) {
    iVar1 = _strcmp(str1->actor_name,"?63Ravinammo01" + 1);
    if (iVar1 == 0) {
      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                (0x01C38BC0,"searchedravine",1);
    }
    iVar1 = _strcmp(str1->actor_name,"63Ravinammo02");
    if (iVar1 == 0) {
      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                (0x01C38BC0,"searchedravine",1);
    }
    iVar1 = _strcmp(str1->actor_name,"63Ravinfood01");
    if (iVar1 == 0) {
      core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                (0x01C38BC0,"searchedravine",1);
    }
    core_inv_cpp_FUN_004dadb0(this_ptr->inventories,str1,1,0);
    (this_ptr->base).carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
  }
  return;
}
