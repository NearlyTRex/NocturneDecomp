// Name: core_flashlit.cpp_CFlashlight_ctor_FUN_004a1060
// Address: 004a1060
// Address Range: [[004a1060, 004a10df]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a1060(CFlashlight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_004a1060(CFlashlight *this_ptr)

{
  uint uVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CFlashlightVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,"flashlit.kfm");
  *(uint *)&pCVar2->field_0x434 = 0;
  *(uint *)&pCVar2->field_0x438 = 0;
  *(uint *)&pCVar2->field_0x43c = 5;
  *(uint *)&pCVar2->field_0x440 = 0;
  *(uint *)&pCVar2->field_0x444 = 0;
  uVar1 = _DAT_005f6cac;
  *(uint *)&pCVar2->field_0x448 = 0;
  *(uint *)&pCVar2->field_0x6c4 = 0;
  *(uint *)&pCVar2->field_0x6c0 = uVar1;
  return (CFlashlight *)pCVar2;
}
