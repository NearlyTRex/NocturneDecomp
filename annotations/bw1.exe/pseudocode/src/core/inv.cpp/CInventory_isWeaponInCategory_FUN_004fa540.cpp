// Name: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004fa540
// Address: 004fa540
// Address Range: [[004fa540, 004fa6b8]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004fa540(CInventory *this_ptr,CDemonActor *weapon_actor,int weapon_category)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004fa540(CInventory *this_ptr,CDemonActor *weapon_actor,int weapon_category)

{
  int iVar1;
  
  if (weapon_category == 5) {
    return 1;
  }
  if ((weapon_category == 0) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,&DAT_005e6818), iVar1 != 0)) {
    return 1;
  }
  if (weapon_category == 1) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CShotgun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CCrossbow");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CTommyGun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CElephantGun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CRifle");
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    if (weapon_category == 2) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CFlameThrower");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CLightGun");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CLightpis");
      if (iVar1 != 0) {
        return 1;
      }
    }
    if ((weapon_category == 3) &&
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CMelee"), iVar1 != 0))
    {
      return 1;
    }
    if (weapon_category == 4) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CDynamite");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(weapon_actor,"CFlashlight");
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
