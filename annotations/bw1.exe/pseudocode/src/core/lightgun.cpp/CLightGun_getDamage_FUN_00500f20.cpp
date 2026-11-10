// Name: core_lightgun.cpp_CLightGun_getDamage_FUN_00500f20
// Address: 00500f20
// Address Range: [[00500f20, 00500f88]]
// Convention: __cdecl
// Signature: float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_00500f20(CLightGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_00500f20(CLightGun *this_ptr)

{
  float fStack_8;
  
  if (*(int *)&this_ptr->field_0x56c == 6) {
    return 0.0;
  }
  fStack_8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(20.0,50.0);
  if (*(int *)&g_CGamePtr->field_0xd0 == 3) {
    fStack_8 = fStack_8 * _DAT_005e6ef6;
  }
  return fStack_8;
}
