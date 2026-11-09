// Name: core_flashlit.cpp_CFlashlight_ctor_FUN_004a7550
// Address: 004a7550
// Address Range: [[004a7550, 004a75cf]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a7550(CFlashlight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a7550(CFlashlight *this_ptr)

{
  uint uVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CFlashlightVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar2->field_0x158,"flashlit.kfm");
  *(uint *)&pCVar2->field_0x2d8 = 0;
  *(uint *)&pCVar2->field_0x2dc = 0;
  *(uint *)&pCVar2->field_0x2e0 = 5;
  *(uint *)&pCVar2->field_0x2e4 = 0;
  *(uint *)&pCVar2->field_0x2e8 = 0;
  uVar1 = _DAT_005e008c;
  *(uint *)&pCVar2->field_0x2ec = 0;
  *(uint *)&pCVar2->field_0x568 = 0;
  *(uint *)&pCVar2->field_0x564 = uVar1;
  return (CFlashlight *)pCVar2;
}
