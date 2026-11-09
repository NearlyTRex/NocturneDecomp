// Name: core_baron.cpp_CBaronWeapon_ctor_FUN_004108e0
// Address: 004108e0
// Address Range: [[004108e0, 00410933]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_004108e0(CBaronWeapon *this_ptr)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_004108e0(CBaronWeapon *this_ptr)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CBaronWeaponVTable;
  *(uint *)&pCVar1->field_0x43c = 9;
  *(uint *)&pCVar1->field_0x440 = 0;
  *(uint *)&pCVar1->field_0x444 = 0x43480000;
  *(uint *)&pCVar1->field_0x448 = 0;
  *(uint *)&pCVar1->field_0x44c = 0;
  *(uint *)&pCVar1->field_0x6d4 = 0;
  return pCVar1;
}
