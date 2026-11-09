// Name: core_turret.cpp_CTurret_canPickup_FUN_005a3e30
// Address: 005a3e30
// Address Range: [[005a3e30, 005a3e55]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_canPickup_FUN_005a3e30(CTurret *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_canPickup_FUN_005a3e30(CTurret *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x220 == 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_FUN_005ad9a0((CWeapon *)this_ptr,picker);
  return iVar1;
}
