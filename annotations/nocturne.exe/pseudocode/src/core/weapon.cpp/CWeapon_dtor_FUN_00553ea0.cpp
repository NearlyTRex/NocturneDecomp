// Name: core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
// Address: 00553ea0
// Address Range: [[00553ea0, 00553f0e]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(int param_1,byte param_2)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&DAT_005a4250);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14c) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_005a4154;
  iVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0(param_1 + 0x300,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x300,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
