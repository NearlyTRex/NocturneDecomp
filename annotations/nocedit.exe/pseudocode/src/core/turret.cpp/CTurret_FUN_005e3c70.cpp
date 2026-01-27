// Name: core_turret.cpp_CTurret_FUN_005e3c70
// Address: 005e3c70
// Address Range: [[005e3c70, 005e3c95]]
// Convention: __cdecl
// Signature: int core_turret.cpp_CTurret_FUN_005e3c70(CTurret * this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e3c70(CTurret *this_ptr)

{
  int iVar1;
  
  if (g_CGamePtr->unk7 == 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_CWeapon_FUN_005ee340(&this_ptr->base);
  return iVar1;
}
