// Name: core_baron.cpp_CBaronWeapon_ctor_FUN_00410460
// Address: 00410460
// Address Range: [[00410460, 004104b3]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00410460(CBaronWeapon *this_ptr)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00410460(CBaronWeapon *this_ptr)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CBaronWeaponVTable;
  *(uint *)&pCVar1->field_0x2e0 = 8;
  *(uint *)&pCVar1->field_0x2e4 = 0;
  *(uint *)&pCVar1->field_0x2e8 = 0x43480000;
  *(uint *)&pCVar1->field_0x2ec = 0;
  *(uint *)&pCVar1->field_0x2f0 = 0;
  *(uint *)&pCVar1->field_0x578 = 0;
  return pCVar1;
}
