// Name: core_shotgun.cpp_CShotgun_ctor_FUN_0053efd0
// Address: 0053efd0
// Address Range: [[0053efd0, 0053f059]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_0053efd0(CShotgun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_0053efd0(CShotgun *this_ptr)

{
  uint uVar1;
  CShotgun *pCVar2;
  
  pCVar2 = (CShotgun *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CShotgunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,(char *)0x5e67c6);
  *(uint *)&pCVar2->field_0x6d4 = 0x41200000;
  *(uint *)&pCVar2->field_0x434 = 1;
  *(uint *)&pCVar2->field_0x438 = 2;
  *(uint *)&pCVar2->field_0x43c = 1;
  *(uint *)&pCVar2->field_0x440 = 1;
  *(uint *)&pCVar2->field_0x444 = 0x41700000;
  uVar1 = _DAT_005fb5bc;
  *(uint *)&pCVar2->field_0x448 = 0;
  *(uint *)&pCVar2->field_0x6d8 = 0;
  *(uint *)&pCVar2->field_0x6c0 = uVar1;
  return pCVar2;
}
