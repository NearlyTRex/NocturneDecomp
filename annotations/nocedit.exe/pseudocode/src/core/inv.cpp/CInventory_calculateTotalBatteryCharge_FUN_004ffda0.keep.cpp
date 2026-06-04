// Name: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
// Address: 004ffda0
// MANUAL RECONSTRUCTION
// Address Range: [[004ffda0, 004ffe0c]]
// Convention: __cdecl
// Signature: float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0(CInventory *inventory_ptr,float max_charge)

#include "nocturne.h"

float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0(CInventory *inventory_ptr,float max_charge)

{
  CBattery *pCVar1;
  int iVar2;
  float local_20;

  local_20 = 1.0 / max_charge;
  iVar2 = 0;
  if (0 < inventory_ptr->item_count) {
    do {
      pCVar1 = (CBattery *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (inventory_ptr->items[iVar2],g_CBatteryClassInfo.name_hash);
      if (pCVar1 != (CBattery *)0x0) {
        local_20 = 1.0 / pCVar1->recharge_time + local_20;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < inventory_ptr->item_count);
  }
  return 1.0 / local_20;
}
