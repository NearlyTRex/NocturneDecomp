// Name: core_weapon.cpp_CWeapon_canPickup_FUN_00554260
// Address: 00554260
// Address Range: [[00554260, 005542fd]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_weapon_cpp_CWeapon_canPickup_FUN_00554260(int param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl core_weapon_cpp_CWeapon_canPickup_FUN_00554260(int param_1,uint param_2)

{
  int iVar1;
  
  if (((((*(int *)(param_1 + 0x2fc) == 0) && (*(int *)(param_1 + 0x2cc) == 0)) &&
       (*(int *)(param_1 + 0x554) != 0)) &&
      ((float)0.5 <
       SQRT(*(float *)(param_1 + 0x354) * *(float *)(param_1 + 0x354) +
            *(float *)(param_1 + 0x34c) * *(float *)(param_1 + 0x34c) +
            *(float *)(param_1 + 0x350) * *(float *)(param_1 + 0x350)))) ||
     (*(int *)(param_1 + 0x2fc) != 0)) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CIcePick");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
    if ((*(int *)(param_1 + 0x2cc) != 0) && (*(int *)(param_1 + 0x2cc) != 3)) {
      return 0;
    }
  }
  return 3;
}
