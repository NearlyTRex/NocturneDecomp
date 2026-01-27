// Name: core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
// Address: 004ffab0
// Address Range: [[004ffab0, 004ffacd]]
// Convention: __cdecl
// Signature: CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory * this_ptr)

#include "nocturne.h"

CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory *this_ptr)

{
  CLightGun *pCVar1;
  
  pCVar1 = this_ptr->light_gun_ptr;
  if ((pCVar1 != (CLightGun *)0x0) && ((pCVar1->base).weapon_state != 0)) {
    return pCVar1;
  }
  return (CLightGun *)0x0;
}
