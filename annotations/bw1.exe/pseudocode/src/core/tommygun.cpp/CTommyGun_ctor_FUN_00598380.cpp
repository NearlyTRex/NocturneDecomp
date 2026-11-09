// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_00598380
// Address: 00598380
// Address Range: [[00598380, 00598413]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00598380(CTommyGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00598380(CTommyGun *this_ptr)

{
  uint uVar1;
  CTommyGun *pCVar2;
  
  pCVar2 = (CTommyGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte ***)&pCVar2->field_0x154 = &g_CTommyGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"tommygun.kfm");
  *(uint *)&pCVar2->field_0x2d8 = 0;
  *(uint *)&pCVar2->field_0x2dc = 0;
  *(uint *)&pCVar2->field_0x2e0 = 4;
  *(uint *)&pCVar2->field_0x2e4 = 1;
  *(uint *)&pCVar2->field_0x2e8 = 0x42c80000;
  *(uint *)&pCVar2->field_0x2ec = 1;
  *(uint *)&pCVar2->field_0x57c = 0;
  uVar1 = _DAT_00606cbc;
  *(uint *)&pCVar2->field_0x580 = 0;
  *(uint *)&pCVar2->field_0x578 = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return pCVar2;
}
