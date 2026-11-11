// Name: core_hero.cpp_FUN_004d3c90
// Address: 004d3c90
// Address Range: [[004d3c90, 004d3e13]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004d3c90(CHero *param_1)

#include "nocturne.h"

int core_hero_cpp_FUN_004d3c90(CHero *param_1)

{
  CDemonActor *actor_ptr;
  int iVar1;
  
  actor_ptr = (param_1->inventory).selected_item;
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"N@CHealthItem" + 2);
  if (iVar1 != 0) {
    iVar1 = core_inv_cpp_CInventory_select_FUN_004dcb40
                      (&param_1->inventory,(param_1->inventory).selected_item);
    return iVar1;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    ((param_1->inventory).selected_item,g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    iVar1 = _stricmp((char *)(iVar1 + 0x1d0),"journal.kfm");
    if (iVar1 == 0) {
      g_CFieldNotesPtr->is_displayed = (uint)(g_CFieldNotesPtr->is_displayed == 0);
      return 0;
    }
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    ((param_1->inventory).selected_item,g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    iVar1 = _stricmp((char *)(iVar1 + 0x1d0),"lantern.kfm");
    if (iVar1 == 0) {
      (param_1->player_input).action_state.light = 1;
      return 0;
    }
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    ((param_1->inventory).selected_item,g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    iVar1 = _stricmp((char *)(iVar1 + 0x1d0),"voodoo_d.kfm");
    if (iVar1 == 0) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS");
      return 0;
    }
  }
  iVar1 = (*(((param_1->base).base.vtable._ue)->_ue).randomize)((CEnemy *)param_1);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = core_hero_cpp_FUN_004d3b20(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004dcb40
                    (&param_1->inventory,(param_1->inventory).selected_item);
  return iVar1;
}
