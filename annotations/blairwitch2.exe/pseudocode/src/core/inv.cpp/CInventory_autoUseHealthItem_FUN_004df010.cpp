// Name: core_inv.cpp_CInventory_autoUseHealthItem_FUN_004df010
// Address: 004df010
// Address Range: [[004df010, 004df0d7]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004df010(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004df010(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  if ((*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x5fc) == 0) ||
     (iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x5fc),
                         g_CHealthItemClassInfo.name_hash), iVar3 == 0)) {
    iVar3 = 0;
    pCVar2 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(pCVar2 + 0x14),g_CHealthItemClassInfo.name_hash);
        if ((*(int *)(pCVar2 + 0x46c) == *(int *)(this_ptr + 0x468)) && (iVar1 != 0)) {
          core_inv_cpp_FUN_004dc8c0(this_ptr,iVar1);
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"Auto use health\n");
          return;
        }
        iVar3 = iVar3 + 1;
        pCVar2 = pCVar2 + 4;
      } while (iVar3 < *(int *)(this_ptr + 0x10));
    }
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"no more auto health left\n");
  }
  else {
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"Auto use selected health\n");
    core_inv_cpp_FUN_004dc8c0(this_ptr,iVar3);
  }
  return;
}
