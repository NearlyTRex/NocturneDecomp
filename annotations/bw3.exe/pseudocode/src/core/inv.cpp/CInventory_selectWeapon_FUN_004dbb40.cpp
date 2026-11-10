// Name: core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40
// Address: 004dbb40
// Address Range: [[004dbb40, 004dbc3a]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

{
  CDemonActor *this_ptr_00;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CInventory *pCVar5;
  
  if (*(int *)(this_ptr + 0x10) < 1) {
    *(uint *)(this_ptr + 0x338) = 0;
  }
  else {
    iVar3 = 0;
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(this_ptr,1);
    pCVar5 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        if (*(int *)(this_ptr + 0x338) == *(int *)(pCVar5 + 0x14)) break;
        iVar3 = iVar3 + 1;
        pCVar5 = pCVar5 + 4;
      } while (iVar3 < *(int *)(this_ptr + 0x10));
    }
    iVar4 = 0;
    while( true ) {
      iVar3 = iVar3 + direction;
      if (iVar3 < *(int *)(this_ptr + 0x10)) {
        if (iVar3 < 0) {
          iVar3 = *(int *)(this_ptr + 0x10) + -1;
        }
      }
      else {
        iVar3 = 0;
      }
      pCVar1 = (CDemonActor *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)(this_ptr + iVar3 * 4 + 0x14),g_CWeaponClassInfo.name_hash)
      ;
      if (((pCVar1 != (CDemonActor *)0x0) &&
          (iVar2 = core_inv_cpp_FUN_004dd310(this_ptr,pCVar1,weapon_category), iVar2 != 0)) &&
         ((specific_weapon == (CDemonActor *)0x0 || (pCVar1 == specific_weapon)))) break;
      iVar4 = iVar4 + 1;
      if (99 < iVar4) {
        return;
      }
    }
    this_ptr_00 = *(CDemonActor **)(this_ptr + 0x338);
    if (this_ptr_00 != pCVar1) {
      if (this_ptr_00 != (CDemonActor *)0x0) {
        (*((this_ptr_00->vtable)._ub)->process)(this_ptr_00,0.1);
      }
      *(CDemonActor **)(this_ptr + 0x338) = pCVar1;
      core_inv_cpp_FUN_004dd2d0(this_ptr,999);
      return;
    }
  }
  return;
}
