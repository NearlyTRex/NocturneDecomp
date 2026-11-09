// Name: core_inv.cpp_FUN_004dc460
// Address: 004dc460
// Address Range: [[004dc460, 004dc4a7]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004dc460(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_FUN_004dc460(CInventory *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      uVar1 = core_actor_cpp_FUN_00408a50
                        (*(uint *)(pCVar2 + 0x14),*(uint *)(pCVar2 + 0x14));
      iVar3 = iVar3 + 1;
      FUN_005b8010(file_handle,"%s%s \"%s\"\n",&DAT_00609590,uVar1);
      pCVar2 = pCVar2 + 4;
    } while (iVar3 < *(int *)(this_ptr + 0x10));
  }
  return;
}
