// Name: core_hero.cpp_CHero_tryUseSelectedItem_FUN_004d3c90
// Address: 004d3c90
// Address Range: [[004d3c90, 004d3e13]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryUseSelectedItem_FUN_004d3c90(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryUseSelectedItem_FUN_004d3c90(CHero *this_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  
  pCVar2 = (this_ptr->inventory).selected_item;
  if (pCVar2 == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar2,"CHealthItem");
  if (iVar1 != 0) {
    iVar1 = core_inv_cpp_CInventory_select_FUN_004dcb40
                      (&this_ptr->inventory,(this_ptr->inventory).selected_item);
    return iVar1;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((this_ptr->inventory).selected_item,g_CBoxActorClassInfo.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    iVar1 = _stricmp(pCVar2[1].create_event,"journal.kfm");
    if (iVar1 == 0) {
      g_CFieldNotesPtr->is_displayed = (uint)(g_CFieldNotesPtr->is_displayed == 0);
      return 0;
    }
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((this_ptr->inventory).selected_item,g_CBoxActorClassInfo.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    iVar1 = _stricmp(pCVar2[1].create_event,"lantern.kfm");
    if (iVar1 == 0) {
      (this_ptr->player_input).action_state.light = 1;
      return 0;
    }
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((this_ptr->inventory).selected_item,g_CBoxActorClassInfo.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    iVar1 = _stricmp(pCVar2[1].create_event,"voodoo_d.kfm");
    if (iVar1 == 0) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150
                (g_CEventList_PTR_005fba60,"UseSPS");
      return 0;
    }
  }
  iVar1 = (*(((this_ptr->base).base.vtable._ue)->_ue).randomize)((CEnemy *)this_ptr);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = core_hero_cpp_CHero_findItemUseTarget_FUN_004d3b20(this_ptr);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004dcb40
                    (&this_ptr->inventory,(this_ptr->inventory).selected_item);
  return iVar1;
}
