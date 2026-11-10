// Name: core_inv.cpp_CInventory_initialize_FUN_004da4e0
// Address: 004da4e0
// Address Range: [[004da4e0, 004da56e]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_initialize_FUN_004da4e0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_initialize_FUN_004da4e0(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  CInventory *pCVar3;
  
  core_inv_cpp_CInventory_clear_FUN_004da440(this_ptr);
  pCVar2 = this_ptr;
  do {
    iVar1 = rand();
    pCVar3 = pCVar2 + 4;
    *(float *)(pCVar2 + 0x1a4) = (float)iVar1 * _DAT_005c5f2b * _DAT_005c5f2f * (float)_DAT_005c5f37
    ;
    pCVar2 = pCVar3;
  } while (pCVar3 != this_ptr + 400);
  if (*(int *)(this_ptr + 0x464) != 0) {
    return;
  }
  iVar1 = core_actor_cpp_createActorByName_FUN_0040c4f0("CAmmo");
  *(int *)(this_ptr + 0x464) = iVar1;
  (*(code *)**(uint **)(iVar1 + 0x154))(iVar1);
  *(uint *)(this_ptr + 0x468) = 0;
  *(uint *)(this_ptr + 0x46c) = 0;
  return;
}
