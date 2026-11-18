// Name: core_ammo.cpp_CAmmo_consumeForReload_FUN_0040e450
// Address: 0040e450
// Address Range: [[0040e450, 0040e489]]
// Convention: __cdecl
// Signature: int __cdecl core_ammo_cpp_CAmmo_consumeForReload_FUN_0040e450(CAmmo *this_ptr,CDoc *hero)

#include "nocturne.h"

int __cdecl core_ammo_cpp_CAmmo_consumeForReload_FUN_0040e450(CAmmo *this_ptr,CDoc *hero)

{
  int iVar1;
  
  if (0 < this_ptr->ammo_count) {
    iVar1 = core_inv_cpp_CInventory_hasItemOfClass_FUN_004db880
                      ((hero->base).inventories,"CGun");
    if (iVar1 != 0) {
      this_ptr->ammo_count = this_ptr->ammo_count + -1;
      return 1;
    }
  }
  return 0;
}
