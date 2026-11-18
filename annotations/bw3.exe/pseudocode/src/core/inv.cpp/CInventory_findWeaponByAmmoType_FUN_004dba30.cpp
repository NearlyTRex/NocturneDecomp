// Name: core_inv.cpp_CInventory_findWeaponByAmmoType_FUN_004dba30
// Address: 004dba30
// Address Range: [[004dba30, 004dba7e]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_inv_cpp_CInventory_findWeaponByAmmoType_FUN_004dba30(CInventory *this_ptr,EAmmoType ammo_type)

#include "nocturne.h"

CWeapon * __cdecl core_inv_cpp_CInventory_findWeaponByAmmoType_FUN_004dba30(CInventory *this_ptr,EAmmoType ammo_type)

{
  CDemonActor *pCVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (pCVar2->items[0],g_CWeaponClassInfo.name_hash);
      if ((pCVar1 != (CDemonActor *)0x0) &&
         (ammo_type == *(EAmmoType *)(pCVar1[4].actor_name + 0xc))) {
        return (CWeapon *)pCVar2->items[0];
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  return (CWeapon *)0x0;
}
