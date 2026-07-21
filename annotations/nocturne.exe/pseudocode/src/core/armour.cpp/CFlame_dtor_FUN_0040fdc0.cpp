// Name: core_armour.cpp_CFlame_dtor_FUN_0040fdc0
// Address: 0040fdc0
// Address Range: [[0040fdc0, 0040fe0d]]
// Convention: unknown
// Signature: undefined4 core_armour_cpp_CFlame_dtor_FUN_0040fdc0(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint core_armour_cpp_CFlame_dtor_FUN_0040fdc0(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&DAT_00599940);
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
