// Name: core_shotgun.cpp_FUN_00516960
// Address: 00516960
// Address Range: [[00516960, 005169ad]]
// Convention: unknown
// Signature: CWeapon * core_shotgun_cpp_FUN_00516960(CWeapon *param_1,byte param_2)

#include "nocturne.h"

CWeapon * core_shotgun_cpp_FUN_00516960(CWeapon *param_1,byte param_2)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CShotgunTypeInfo_005a1bf0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
