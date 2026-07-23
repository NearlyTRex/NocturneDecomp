// Name: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
// Address: 004c1bf0
// Address Range: [[004c1bf0, 004c1d19]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 5) {
    return 1;
  }
  if ((param_3 == 0) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CGun"), iVar1 != 0)) {
    return 1;
  }
  if (param_3 == 1) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CShotgun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CCrossbow");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CTommyGun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CElephantGun");
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    if (param_3 == 2) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CFlameThrower");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CLightGun");
      if (iVar1 != 0) {
        return 1;
      }
    }
    if ((param_3 == 3) &&
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CMelee"), iVar1 != 0)) {
      return 1;
    }
    if ((param_3 == 4) &&
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CDynamite"), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}
