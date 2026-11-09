// Name: core_elephant.cpp_CElephantGun_ctor_FUN_004859a0
// Address: 004859a0
// Address Range: [[004859a0, 00485a29]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004859a0(CElephantGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004859a0(CElephantGun *this_ptr)

{
  uint uVar1;
  CElephantGun *pCVar2;
  
  pCVar2 = (CElephantGun *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CElephantGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,"elephantgun.kfm");
  *(uint *)&pCVar2->field_0x6d4 = 0x41200000;
  *(uint *)&pCVar2->field_0x434 = 1;
  *(uint *)&pCVar2->field_0x438 = 2;
  *(uint *)&pCVar2->field_0x43c = 1;
  *(uint *)&pCVar2->field_0x440 = 1;
  *(uint *)&pCVar2->field_0x444 = 0x41700000;
  uVar1 = _DAT_005f5dec;
  *(uint *)&pCVar2->field_0x448 = 0;
  *(uint *)&pCVar2->field_0x6d8 = 0;
  *(uint *)&pCVar2->field_0x6c0 = uVar1;
  return pCVar2;
}
