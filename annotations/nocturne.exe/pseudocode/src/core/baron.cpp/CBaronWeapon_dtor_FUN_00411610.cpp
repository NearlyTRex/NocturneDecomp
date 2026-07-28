// Name: core_baron.cpp_CBaronWeapon_dtor_FUN_00411610
// Address: 00411610
// Address Range: [[00411610, 0041165d]]
// Convention: unknown
// Signature: CWeapon * core_baron_cpp_CBaronWeapon_dtor_FUN_00411610(CWeapon *param_1,byte param_2)

#include "nocturne.h"

CWeapon * core_baron_cpp_CBaronWeapon_dtor_FUN_00411610(CWeapon *param_1,byte param_2)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CBaronWeaponTypeInfo_00599d10);
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
