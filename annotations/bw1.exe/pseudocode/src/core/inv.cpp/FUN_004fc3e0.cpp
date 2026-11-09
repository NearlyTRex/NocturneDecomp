// Name: core_inv.cpp_FUN_004fc3e0
// Address: 004fc3e0
// Address Range: [[004fc3e0, 004fc48c]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004fc3e0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_FUN_004fc3e0(CInventory *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CInventory *pCVar3;
  
  if ((*(int *)(this_ptr + 0x33c) == 0) ||
     (pCVar1 = (CDemonActor *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(int *)(this_ptr + 0x33c),g_CHealthItemClassInfo.name_hash),
     pCVar1 == (CDemonActor *)0x0)) {
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        pCVar1 = (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)(pCVar3 + 0x14),g_CHealthItemClassInfo.name_hash);
        if (pCVar1 != (CDemonActor *)0x0) {
          core_inv_cpp_CInventory_select_FUN_004f9bd0(this_ptr,pCVar1);
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"Auto use health\n");
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = pCVar3 + 4;
      } while (iVar2 < *(int *)(this_ptr + 0x10));
    }
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"no more auto health left\n");
  }
  else {
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"Auto use selected health\n");
    core_inv_cpp_CInventory_select_FUN_004f9bd0(this_ptr,pCVar1);
  }
  return;
}
