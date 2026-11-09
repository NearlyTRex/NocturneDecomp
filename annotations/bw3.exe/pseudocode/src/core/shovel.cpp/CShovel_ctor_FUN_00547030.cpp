// Name: core_shovel.cpp_CShovel_ctor_FUN_00547030
// Address: 00547030
// Address Range: [[00547030, 005470ad]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00547030(CShovel *this_ptr)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00547030(CShovel *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CShovelVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,(char *)0x5d153e);
  *(uint *)&pCVar1->field_0x2e0 = 7;
  *(uint *)&pCVar1->field_0x56c = 0xffffffff;
  *(uint *)&pCVar1->field_0x568 = 0;
  *(uint *)&pCVar1->field_0x2d8 = 0;
  *(uint *)&pCVar1->field_0x2dc = 0;
  *(uint *)&pCVar1->field_0x2e4 = 0;
  *(uint *)&pCVar1->field_0x2e8 = 0x40a00000;
  *(uint *)&pCVar1->field_0x2ec = 0;
  return (CShovel *)pCVar1;
}
