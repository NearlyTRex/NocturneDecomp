// Name: core_inv.cpp_CInventory_autoUseHealthItem_FUN_004c3350
// Address: 004c3350
// Address Range: [[004c3350, 004c33fc]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004c3350(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004c3350(CInventory *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CInventory *pCVar3;
  
  if ((this_ptr->selected_item == (CDemonActor *)0x0) ||
     (pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (this_ptr->selected_item,g_CHealthItemActorType_01cae098.name_hash),
     pCVar1 == (CDemonActor *)0x0)) {
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (pCVar3->items[0],g_CHealthItemActorType_01cae098.name_hash);
        if (pCVar1 != (CDemonActor *)0x0) {
          core_inv_cpp_CInventory_select_FUN_004c1580(this_ptr,pCVar1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"Auto use health\n");
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CInventory *)&pCVar3->owner;
      } while (iVar2 < this_ptr->item_count);
    }
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"no more auto health left\n");
  }
  else {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"Auto use selected health\n");
    core_inv_cpp_CInventory_select_FUN_004c1580(this_ptr,pCVar1);
  }
  return;
}
