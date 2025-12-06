// Name: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
// Address: 004ffda0
// Address Range: [[004ffda0, 004ffe0c]]
// Convention: __cdecl
// Signature: float core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0(CInventory * inventory_ptr, float max_charge)

#include "nocturne.h"

float __cdecl
core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
          (CInventory *inventory_ptr,float max_charge)

{
  CDemonActor *pCVar1;
  int iVar2;
  CInventory *pCVar3;
  float local_20;
  
  local_20 = 1.0 / max_charge;
  iVar2 = 0;
  pCVar3 = inventory_ptr;
  if (0 < inventory_ptr->item_count) {
    do {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (pCVar3->items[0],g_CBatteryClassInfo.name_hash);
      if (pCVar1 != (CDemonActor *)0x0) {
        local_20 = 1.0 / pCVar1[2].location.position.z + local_20;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
    } while (iVar2 < inventory_ptr->item_count);
  }
  return 1.0 / local_20;
}
