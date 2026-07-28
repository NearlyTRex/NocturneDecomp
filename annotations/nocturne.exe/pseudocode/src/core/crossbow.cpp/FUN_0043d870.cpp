// Name: core_crossbow.cpp_FUN_0043d870
// Address: 0043d870
// Address Range: [[0043d870, 0043d8d4]]
// Convention: unknown
// Signature: CWeapon * core_crossbow_cpp_FUN_0043d870(CWeapon *param_1,byte param_2)

#include "nocturne.h"

CWeapon * core_crossbow_cpp_FUN_0043d870(CWeapon *param_1,byte param_2)

{
  CDemonActor *pCVar1;
  CWeapon *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CCrossbowTypeInfo_0059bc50);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(param_1[1].base.actor_name + 4),1);
  pCVar2 = core_weapon_cpp_CWeapon_dtor_FUN_00553ea0((CWeapon *)pCVar1[-5].footstep_sound_code,1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
