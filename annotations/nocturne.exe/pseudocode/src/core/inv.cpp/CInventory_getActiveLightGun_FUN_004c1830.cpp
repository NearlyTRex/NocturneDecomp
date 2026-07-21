// Name: core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830
// Address: 004c1830
// Address Range: [[004c1830, 004c184d]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(int param_1)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x454);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2cc) != 0)) {
    return iVar1;
  }
  return 0;
}
