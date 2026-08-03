// Name: core_turret.cpp_CTurret_canPickup_FUN_0054b030
// Address: 0054b030
// Address Range: [[0054b030, 0054b055]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_canPickup_FUN_0054b030(CTurret *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_canPickup_FUN_0054b030(CTurret *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (g_CGame_PTR_005b9354->big_hat_cheat == 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_CWeapon_canPickup_FUN_00554260(&this_ptr->base,picker);
  return iVar1;
}
