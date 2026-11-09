// Name: core_inv.cpp_CInventory_removeMatchingKeys_FUN_004fc310
// Address: 004fc310
// Address Range: [[004fc310, 004fc36b]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004fc310(CInventory *this_ptr,uint key_mask)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004fc310(CInventory *this_ptr,uint key_mask)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      while ((iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (*(uint *)(pCVar2 + 0x14),g_CKeyActorClassInfo.name_hash),
             iVar1 == 0 || ((*(uint *)(iVar1 + 0x2d4) & key_mask) == 0))) {
        iVar3 = iVar3 + 1;
        pCVar2 = pCVar2 + 4;
        if (*(int *)(this_ptr + 0x10) <= iVar3) {
          return;
        }
      }
      core_inv_cpp_FUN_004f8d00(this_ptr,*(CDemonActor **)(pCVar2 + 0x14),1);
    } while (iVar3 < *(int *)(this_ptr + 0x10));
  }
  return;
}
