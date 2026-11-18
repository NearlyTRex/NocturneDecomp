// Name: core_inv.cpp_CInventory_getActiveGoggles_FUN_004f9ef0
// Address: 004f9ef0
// Address Range: [[004f9ef0, 004f9f0a]]
// Convention: __cdecl
// Signature: CGoggles * __cdecl core_inv_cpp_CInventory_getActiveGoggles_FUN_004f9ef0(CInventory *this_ptr)

#include "nocturne.h"

CGoggles * __cdecl core_inv_cpp_CInventory_getActiveGoggles_FUN_004f9ef0(CInventory *this_ptr)

{
  CGoggles *pCVar1;
  
  pCVar1 = this_ptr->goggles_ptr;
  if ((pCVar1 != (CGoggles *)0x0) && (pCVar1->carrier != (CDemonActor *)0x0)) {
    return pCVar1;
  }
  return (CGoggles *)0x0;
}
