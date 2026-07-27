// Name: core_crossbow.cpp_FUN_0043d870
// Address: 0043d870
// Address Range: [[0043d870, 0043d8d4]]
// Convention: unknown
// Signature: int core_crossbow_cpp_FUN_0043d870(int param_1,byte param_2)

#include "nocturne.h"

int core_crossbow_cpp_FUN_0043d870(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CCrossbowTypeInfo_0059bc50);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(param_1 + 0x574,1);
  iVar1 = core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(iVar1 + -0x574,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
