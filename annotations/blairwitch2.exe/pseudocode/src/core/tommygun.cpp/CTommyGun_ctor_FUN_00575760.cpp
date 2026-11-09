// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_00575760
// Address: 00575760
// Address Range: [[00575760, 005757f3]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00575760(CTommyGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00575760(CTommyGun *this_ptr)

{
  uint uVar1;
  CTommyGun *pCVar2;
  
  pCVar2 = (CTommyGun *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CTommyGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,"tommygun.kfm");
  *(uint *)&pCVar2->field_0x434 = 0;
  *(uint *)&pCVar2->field_0x438 = 0;
  *(uint *)&pCVar2->field_0x43c = 4;
  *(uint *)&pCVar2->field_0x440 = 1;
  *(uint *)&pCVar2->field_0x444 = 0x42c80000;
  *(uint *)&pCVar2->field_0x448 = 1;
  *(uint *)&pCVar2->field_0x6d8 = 0;
  uVar1 = _DAT_005fce6c;
  *(uint *)&pCVar2->field_0x6dc = 0;
  *(uint *)&pCVar2->field_0x6d4 = 0;
  *(uint *)&pCVar2->field_0x6c0 = uVar1;
  return pCVar2;
}
