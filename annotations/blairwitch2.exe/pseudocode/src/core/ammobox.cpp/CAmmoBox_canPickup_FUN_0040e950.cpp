// Name: core_ammobox.cpp_CAmmoBox_canPickup_FUN_0040e950
// Address: 0040e950
// Address Range: [[0040e950, 0040e97b]]
// Convention: __cdecl
// Signature: int __cdecl core_ammobox_cpp_CAmmoBox_canPickup_FUN_0040e950(CAmmoBox *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

int __cdecl core_ammobox_cpp_CAmmoBox_canPickup_FUN_0040e950(CAmmoBox *this_ptr,CDemonActor *carrier)

{
  int iVar1;
  
  if (this_ptr->ammo_count != 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(carrier,"CHero");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
