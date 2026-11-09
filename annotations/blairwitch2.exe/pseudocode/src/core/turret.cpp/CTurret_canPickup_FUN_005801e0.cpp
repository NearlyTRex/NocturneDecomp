// Name: core_turret.cpp_CTurret_canPickup_FUN_005801e0
// Address: 005801e0
// Address Range: [[005801e0, 00580205]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_canPickup_FUN_005801e0(CTurret *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_canPickup_FUN_005801e0(CTurret *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x220 == 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_FUN_00589e50((CWeapon *)this_ptr,picker);
  return iVar1;
}
