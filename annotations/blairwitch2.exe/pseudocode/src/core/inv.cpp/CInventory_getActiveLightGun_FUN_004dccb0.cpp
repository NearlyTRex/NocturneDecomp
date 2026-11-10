// Name: core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0
// Address: 004dccb0
// Address Range: [[004dccb0, 004dcccd]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory *this_ptr)

#include "nocturne.h"

CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory *this_ptr)

{
  CLightGun *pCVar1;
  
  pCVar1 = *(CLightGun **)(this_ptr + 0x458);
  if ((pCVar1 != (CLightGun *)0x0) && ((pCVar1->base).weapon_state != WEAPON_STATE_LYING_AROUND)) {
    return pCVar1;
  }
  return (CLightGun *)0x0;
}
