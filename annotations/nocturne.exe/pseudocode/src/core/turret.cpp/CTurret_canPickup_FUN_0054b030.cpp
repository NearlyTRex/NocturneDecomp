// Name: core_turret.cpp_CTurret_canPickup_FUN_0054b030
// Address: 0054b030
// Address Range: [[0054b030, 0054b055]]
// Convention: unknown
// Signature: int core_turret_cpp_CTurret_canPickup_FUN_0054b030(CWeapon *param_1,CDemonActor *param_2)

#include "nocturne.h"

int core_turret_cpp_CTurret_canPickup_FUN_0054b030(CWeapon *param_1,CDemonActor *param_2)

{
  int iVar1;
  
  if (*(int *)(0x01C775EC + 0x204) == 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_CWeapon_canPickup_FUN_00554260(param_1,param_2);
  return iVar1;
}
