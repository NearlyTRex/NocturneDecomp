// Name: core_flashlit.cpp_CFlashlight_ctor_FUN_004b9910
// Address: 004b9910
// Address Range: [[004b9910, 004b998f]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004b9910(CFlashlight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004b9910(CFlashlight *this_ptr)

{
  uint uVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CFlashlightVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"flashlit.kfm");
  *(uint *)&pCVar2->field_0x2d8 = 0;
  *(uint *)&pCVar2->field_0x2dc = 0;
  *(uint *)&pCVar2->field_0x2e0 = 5;
  *(uint *)&pCVar2->field_0x2e4 = 0;
  *(uint *)&pCVar2->field_0x2e8 = 0;
  uVar1 = _DAT_0060070c;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x568 = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return (CFlashlight *)pCVar2;
}
