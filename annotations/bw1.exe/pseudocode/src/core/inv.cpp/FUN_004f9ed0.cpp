// Name: core_inv.cpp_FUN_004f9ed0
// Address: 004f9ed0
// Address Range: [[004f9ed0, 004f9eed]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_inv_cpp_FUN_004f9ed0(CInventory *this_ptr)

#include "nocturne.h"

CLightGun * __cdecl core_inv_cpp_FUN_004f9ed0(CInventory *this_ptr)

{
  CLightGun *pCVar1;
  
  pCVar1 = *(CLightGun **)(this_ptr + 0x45c);
  if ((pCVar1 != (CLightGun *)0x0) && (*(int *)&pCVar1->field_0x2d4 != 0)) {
    return pCVar1;
  }
  return (CLightGun *)0x0;
}
