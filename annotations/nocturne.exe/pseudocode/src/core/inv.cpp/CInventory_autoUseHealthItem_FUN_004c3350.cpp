// Name: core_inv.cpp_CInventory_autoUseHealthItem_FUN_004c3350
// Address: 004c3350
// Address Range: [[004c3350, 004c33fc]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004c3350(int param_1)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004c3350(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x334) == 0) ||
     (iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(int *)(param_1 + 0x334),g_CHealthItemActorType_01cae098.name_hash),
     iVar2 == 0)) {
    iVar3 = 0;
    iVar2 = param_1;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar2 + 0xc),g_CHealthItemActorType_01cae098.name_hash);
        if (iVar1 != 0) {
          core_inv_cpp_CInventory_select_FUN_004c1580(param_1,iVar1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"Auto use health\n");
          return;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"no more auto health left\n");
  }
  else {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"Auto use selected health\n");
    core_inv_cpp_CInventory_select_FUN_004c1580(param_1,iVar2);
  }
  return;
}
