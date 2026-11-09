// Name: core_flamegun.cpp_CFlameThrower_ctor_FUN_004a0d10
// Address: 004a0d10
// Address Range: [[004a0d10, 004a0dad]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_004a0d10(CFlameThrower *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_004a0d10(CFlameThrower *this_ptr)

{
  uint uVar1;
  CFlameThrower *pCVar2;
  
  pCVar2 = (CFlameThrower *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CFlameThrowerVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,"flamegun.kfm");
  *(uint *)&pCVar2->field_0x6d8 = 0;
  *(uint *)&pCVar2->field_0x6d4 = 0;
  *(uint *)&pCVar2->field_0x434 = 0;
  *(uint *)&pCVar2->field_0x438 = 0;
  *(uint *)&pCVar2->field_0x43c = 2;
  *(uint *)&pCVar2->field_0x440 = 0;
  *(uint *)&pCVar2->field_0x444 = 0x41700000;
  *(uint *)&pCVar2->field_0x448 = 1;
  uVar1 = _DAT_005f6b4c;
  *(uint *)&pCVar2->field_0x6e0 = 0;
  *(uint *)&pCVar2->field_0x6dc = 0;
  *(uint *)&pCVar2->field_0x6c0 = uVar1;
  return pCVar2;
}
