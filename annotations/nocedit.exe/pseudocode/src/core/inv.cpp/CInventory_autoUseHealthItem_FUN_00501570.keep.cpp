// Name: core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570
// Address: 00501570
// MANUAL RECONSTRUCTION
// Address Range: [[00501570, 0050161c]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(CInventory *this_ptr)

{
  CHealthItem *pCVar1;
  CHealthItem *actor_ptr;
  int iVar1;

  if ((this_ptr->selected_item == (CDemonActor *)0x0) ||
     (actor_ptr = (CHealthItem *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash),
     actor_ptr == (CHealthItem *)0x0)) {
    iVar1 = 0;
    if (0 < this_ptr->item_count) {
      do {
        pCVar1 = (CHealthItem *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (this_ptr->items[iVar1],g_CHealthItemClassInfo.name_hash);
        if (pCVar1 != (CHealthItem *)0x0) {
          core_inv_cpp_CInventory_select_FUN_004ff800(this_ptr,(CDemonActor *)pCVar1);
          engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Auto use health\n");
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->item_count);
    }
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"no more auto health left\n");
  }
  else {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"Auto use selected health\n");
    core_inv_cpp_CInventory_select_FUN_004ff800(this_ptr,(CDemonActor *)actor_ptr);
  }
  return;
}
