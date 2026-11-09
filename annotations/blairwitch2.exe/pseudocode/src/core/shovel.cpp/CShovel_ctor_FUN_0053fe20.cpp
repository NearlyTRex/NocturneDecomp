// Name: core_shovel.cpp_CShovel_ctor_FUN_0053fe20
// Address: 0053fe20
// Address Range: [[0053fe20, 0053fe9d]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_0053fe20(CShovel *this_ptr)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_0053fe20(CShovel *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CShovelVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar1->field_0x2b4,(char *)0x5e6841);
  *(uint *)&pCVar1->field_0x43c = 7;
  *(uint *)&pCVar1->field_0x6c8 = 0xffffffff;
  *(uint *)&pCVar1->field_0x6c4 = 0;
  *(uint *)&pCVar1->field_0x434 = 0;
  *(uint *)&pCVar1->field_0x438 = 0;
  *(uint *)&pCVar1->field_0x440 = 0;
  *(uint *)&pCVar1->field_0x444 = 0x40a00000;
  *(uint *)&pCVar1->field_0x448 = 0;
  return (CShovel *)pCVar1;
}
