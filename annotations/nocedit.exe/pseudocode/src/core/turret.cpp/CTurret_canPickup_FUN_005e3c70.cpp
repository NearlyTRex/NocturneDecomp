// Name: core_turret.cpp_CTurret_canPickup_FUN_005e3c70
// Address: 005e3c70
// Address Range: [[005e3c70, 005e3c95]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_canPickup_FUN_005e3c70(CTurret *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_canPickup_FUN_005e3c70(CTurret *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (g_CGamePtr->big_hat_cheat == 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_CWeapon_canPickup_FUN_005ee340(&this_ptr->base,picker);
  return iVar1;
}
