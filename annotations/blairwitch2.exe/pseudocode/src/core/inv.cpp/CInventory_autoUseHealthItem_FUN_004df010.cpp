// Name: core_inv.cpp_CInventory_autoUseHealthItem_FUN_004df010
// Address: 004df010
// Address Range: [[004df010, 004df0d7]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004df010(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004df010(CInventory *this_ptr)

{
  CDemonActor *pCVar1;
  CInventory *pCVar2;
  int iVar3;
  
  if ((this_ptr->selected_items[this_ptr->current_group] == (CDemonActor *)0x0) ||
     (pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (this_ptr->selected_items[this_ptr->current_group],
                          g_CHealthItemClassInfo.name_hash), pCVar1 == (CDemonActor *)0x0)) {
    iVar3 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCVar2->items[0],g_CHealthItemClassInfo.name_hash);
        if ((pCVar2->item_groups[0] == this_ptr->current_group) && (pCVar1 != (CDemonActor *)0x0)) {
          core_inv_cpp_CInventory_select_FUN_004dc8c0(this_ptr,pCVar1);
          engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Auto use health\n");
          return;
        }
        iVar3 = iVar3 + 1;
        pCVar2 = (CInventory *)&pCVar2->owner;
      } while (iVar3 < this_ptr->item_count);
    }
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"no more auto health left\n");
  }
  else {
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"Auto use selected health\n");
    core_inv_cpp_CInventory_select_FUN_004dc8c0(this_ptr,pCVar1);
  }
  return;
}
