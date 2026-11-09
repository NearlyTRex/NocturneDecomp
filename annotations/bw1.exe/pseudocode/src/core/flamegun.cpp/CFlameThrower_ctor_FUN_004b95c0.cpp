// Name: core_flamegun.cpp_CFlameThrower_ctor_FUN_004b95c0
// Address: 004b95c0
// Address Range: [[004b95c0, 004b965d]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_004b95c0(CFlameThrower *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_004b95c0(CFlameThrower *this_ptr)

{
  uint uVar1;
  CFlameThrower *pCVar2;
  
  pCVar2 = (CFlameThrower *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CFlameThrowerVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"flamegun.kfm");
  *(uint *)&pCVar2->field_0x57c = 0;
  *(uint *)&pCVar2->field_0x578 = 0;
  *(uint *)&pCVar2->field_0x2d8 = 0;
  *(uint *)&pCVar2->field_0x2dc = 0;
  *(uint *)&pCVar2->field_0x2e0 = 2;
  *(uint *)&pCVar2->field_0x2e4 = 0;
  *(uint *)&pCVar2->field_0x2e8 = 0x41700000;
  *(uint *)&pCVar2->field_0x2ec = 1;
  uVar1 = _DAT_006005bc;
  *(uint *)&pCVar2->field_0x584 = 0;
  *(uint *)&pCVar2->field_0x580 = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return pCVar2;
}
