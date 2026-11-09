// Name: core_inv.cpp_FUN_004f8dc0
// Address: 004f8dc0
// Address Range: [[004f8dc0, 004f8eba]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004f8dc0(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_FUN_004f8dc0(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CInventory *pCVar6;
  
  if (*(int *)(this_ptr + 0x10) < 1) {
    *(uint *)(this_ptr + 0x338) = 0;
  }
  else {
    iVar4 = 0;
    core_inv_cpp_FUN_004fa6c0(this_ptr,1);
    pCVar6 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        if (*(int *)(this_ptr + 0x338) == *(int *)(pCVar6 + 0x14)) break;
        iVar4 = iVar4 + 1;
        pCVar6 = pCVar6 + 4;
      } while (iVar4 < *(int *)(this_ptr + 0x10));
    }
    iVar5 = 0;
    while( true ) {
      iVar4 = iVar4 + direction;
      if (iVar4 < *(int *)(this_ptr + 0x10)) {
        if (iVar4 < 0) {
          iVar4 = *(int *)(this_ptr + 0x10) + -1;
        }
      }
      else {
        iVar4 = 0;
      }
      pCVar2 = (CDemonActor *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(uint *)(this_ptr + iVar4 * 4 + 0x14),g_CWeaponClassInfo.name_hash)
      ;
      if (((pCVar2 != (CDemonActor *)0x0) &&
          (iVar3 = core_inv_cpp_FUN_004fa540(this_ptr,pCVar2,weapon_category), iVar3 != 0)) &&
         ((specific_weapon == (CDemonActor *)0x0 || (pCVar2 == specific_weapon)))) break;
      iVar5 = iVar5 + 1;
      if (99 < iVar5) {
        return;
      }
    }
    pCVar1 = *(CDemonActor **)(this_ptr + 0x338);
    if (pCVar1 != pCVar2) {
      if (pCVar1 != (CDemonActor *)0x0) {
        (**(code **)(*(int *)&pCVar1->field_0x154 + 0xc))(pCVar1,0x3dcccccd);
      }
      *(CDemonActor **)(this_ptr + 0x338) = pCVar2;
      core_inv_cpp_FUN_004fa4e0(this_ptr,999);
      return;
    }
  }
  return;
}
