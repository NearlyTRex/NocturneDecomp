// Name: core_shotgun.cpp_CShotgun_ctor_FUN_005615c0
// Address: 005615c0
// Address Range: [[005615c0, 00561649]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_005615c0(CShotgun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_005615c0(CShotgun *this_ptr)

{
  uint uVar1;
  CShotgun *pCVar2;
  
  pCVar2 = (CShotgun *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CShotgunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,(char *)0x5f1998);
  *(uint *)&pCVar2->field_0x578 = 0x41200000;
  *(uint *)&pCVar2->field_0x2d8 = 1;
  *(uint *)&pCVar2->field_0x2dc = 2;
  *(uint *)&pCVar2->field_0x2e0 = 1;
  *(uint *)&pCVar2->field_0x2e4 = 1;
  *(uint *)&pCVar2->field_0x2e8 = 0x41700000;
  uVar1 = _DAT_006054dc;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x57c = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return pCVar2;
}
