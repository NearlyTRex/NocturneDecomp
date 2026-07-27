// Name: core_shovel.cpp_FUN_00516af0
// Address: 00516af0
// Address Range: [[00516af0, 00516b3d]]
// Convention: unknown
// Signature: undefined4 core_shovel_cpp_FUN_00516af0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint core_shovel_cpp_FUN_00516af0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&g_CShovelTypeInfo_005a1d30);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  uVar1 = core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_00564494(uVar1);
  return uVar1;
}
