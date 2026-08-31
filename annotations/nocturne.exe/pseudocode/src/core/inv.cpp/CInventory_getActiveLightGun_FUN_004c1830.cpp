// Name: core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830
// Address: 004c1830
// Address Range: [[004c1830, 004c184d]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(CInventory *this_ptr)

#include "nocturne.h"

CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(CInventory *this_ptr)

{
  CLightGun *pCVar1;
  
  pCVar1 = this_ptr->light_gun_ptr;
  if ((pCVar1 != (CLightGun *)0x0) && ((pCVar1->base).weapon_state != WEAPON_STATE_LYING_AROUND)) {
    return pCVar1;
  }
  return (CLightGun *)0x0;
}
