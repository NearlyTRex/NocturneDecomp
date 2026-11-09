// Name: core_ammobox.cpp_CAmmoBox_canPickup_FUN_0040e9e0
// Address: 0040e9e0
// Address Range: [[0040e9e0, 0040ea0b]]
// Convention: __cdecl
// Signature: int __cdecl core_ammobox_cpp_CAmmoBox_canPickup_FUN_0040e9e0(CAmmoBox *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

int __cdecl core_ammobox_cpp_CAmmoBox_canPickup_FUN_0040e9e0(CAmmoBox *this_ptr,CDemonActor *carrier)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x314 != 0) {
    iVar1 = core_actor_cpp_FUN_0040c790(carrier,"CHero");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
