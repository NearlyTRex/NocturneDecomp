// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_0056b370
// Address: 0056b370
// Address Range: [[0056b370, 0056b403]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_0056b370(CTommyGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_0056b370(CTommyGun *this_ptr)

{
  uint uVar1;
  CTommyGun *pCVar2;
  
  pCVar2 = (CTommyGun *)core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CTommyGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,(char *)0x5d6449);
  *(uint *)&pCVar2->field_0x2d8 = 0;
  *(uint *)&pCVar2->field_0x2dc = 0;
  *(uint *)&pCVar2->field_0x2e0 = 4;
  *(uint *)&pCVar2->field_0x2e4 = 1;
  *(uint *)&pCVar2->field_0x2e8 = 0x42c80000;
  *(uint *)&pCVar2->field_0x2ec = 1;
  *(uint *)&pCVar2->field_0x598 = 0;
  uVar1 = _DAT_005e53bc;
  *(uint *)&pCVar2->field_0x59c = 0;
  *(uint *)&pCVar2->field_0x594 = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return pCVar2;
}
