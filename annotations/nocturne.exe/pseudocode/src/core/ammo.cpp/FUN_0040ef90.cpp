// Name: core_ammo.cpp_FUN_0040ef90
// Address: 0040ef90
// Address Range: [[0040ef90, 0040efdd]]
// Convention: unknown
// Signature: undefined4 core_ammo_cpp_FUN_0040ef90(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint core_ammo_cpp_FUN_0040ef90(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&g_CAmmoTypeInfo_00599530);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  uVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_00564494(uVar1);
  return uVar1;
}
