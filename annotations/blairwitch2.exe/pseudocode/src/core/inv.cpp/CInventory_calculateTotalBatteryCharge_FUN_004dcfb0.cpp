// Name: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004dcfb0
// Address: 004dcfb0
// Address Range: [[004dcfb0, 004dd01c]]
// Convention: __cdecl
// Signature: float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004dcfb0(CInventory *this_ptr,float max_charge)

#include "nocturne.h"

float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004dcfb0(CInventory *this_ptr,float max_charge)

{
  CDemonActor *pCVar1;
  int iVar2;
  CInventory *pCVar3;
  float fStack_20;
  
  fStack_20 = 1.0 / max_charge;
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (pCVar3->items[0],g_CBatteryClassInfo.name_hash);
      if (pCVar1 != (CDemonActor *)0x0) {
        fStack_20 = 1.0 / pCVar1[1].particle_systems[0].fade_duration + fStack_20;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
    } while (iVar2 < this_ptr->item_count);
  }
  return 1.0 / fStack_20;
}
