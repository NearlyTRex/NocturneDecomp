// Name: core_inv.cpp_setupItems_FUN_004f9b20
// Address: 004f9b20
// Address Range: [[004f9b20, 004f9bc0]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_setupItems_FUN_004f9b20(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_setupItems_FUN_004f9b20(CInventory *this_ptr)

{
  CDemonActor *this_ptr_00;
  CLightGun *pCVar1;
  CGoggles *pCVar2;
  CInventory *pCVar3;
  int iVar4;
  
  if (this_ptr->preserve_items != 0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\inv.cpp";
    g_INT_01d1d404 = 0x6c0;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CInventory::setupItems - we should own the items at this point!");
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      this_ptr_00 = pCVar3->items[0];
      (*((this_ptr_00->vtable)._ub)->setup)(this_ptr_00);
      if (this_ptr->goggles_ptr == (CGoggles *)0x0) {
        pCVar2 = (CGoggles *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (this_ptr_00,g_CGogglesClassInfo.name_hash);
        this_ptr->goggles_ptr = pCVar2;
      }
      if (this_ptr->light_gun_ptr == (CLightGun *)0x0) {
        pCVar1 = (CLightGun *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (this_ptr_00,g_CGasMaskClassInfo.name_hash);
        this_ptr->light_gun_ptr = pCVar1;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
    } while (iVar4 < this_ptr->item_count);
  }
  return;
}
