// Name: core_elephant.cpp_CElephantGun_ctor_FUN_0049e000
// Address: 0049e000
// Address Range: [[0049e000, 0049e089]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_0049e000(CElephantGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_0049e000(CElephantGun *this_ptr)

{
  uint uVar1;
  CElephantGun *pCVar2;
  
  pCVar2 = (CElephantGun *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CElephantGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"elephantgun.kfm");
  *(uint *)&pCVar2->field_0x578 = 0x41200000;
  *(uint *)&pCVar2->field_0x2d8 = 1;
  *(uint *)&pCVar2->field_0x2dc = 2;
  *(uint *)&pCVar2->field_0x2e0 = 1;
  *(uint *)&pCVar2->field_0x2e4 = 1;
  *(uint *)&pCVar2->field_0x2e8 = 0x41700000;
  uVar1 = _DAT_005ff8ec;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x57c = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return pCVar2;
}
