// Name: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004b5fc0
// Address: 004b5fc0
// Address Range: [[004b5fc0, 004b6017]]
// Convention: unknown
// Signature: int core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0(int param_1,byte param_2)

#include "nocturne.h"

int core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&DAT_0059ed60);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14c) = &PTR_core_actor_cpp_CDemonActor_setup_FUN_00409fc0_0059ec84;
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
