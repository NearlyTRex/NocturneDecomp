// Name: core_inv.cpp_CInventory_initialize_FUN_004da900
// Address: 004da900
// Address Range: [[004da900, 004da985]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_initialize_FUN_004da900(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_initialize_FUN_004da900(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  CInventory *pCVar3;
  
  core_inv_cpp_CInventory_clear_FUN_004da860(this_ptr);
  pCVar2 = this_ptr;
  do {
    iVar1 = rand();
    pCVar3 = pCVar2 + 4;
    *(float *)(pCVar2 + 0x1a4) = (float)iVar1 * _DAT_005db41e * _DAT_005db422 * (float)_DAT_005db42a
    ;
    pCVar2 = pCVar3;
  } while (pCVar3 != this_ptr + 400);
  if (*(int *)(this_ptr + 0x464) != 0) {
    return;
  }
  iVar1 = core_actor_cpp_createActorByName_FUN_0040c5a0("CAmmo");
  *(int *)(this_ptr + 0x464) = iVar1;
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 8))(iVar1);
  *(uint *)(this_ptr + 0x45c) = 0;
  return;
}
