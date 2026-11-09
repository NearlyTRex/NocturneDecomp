// Name: core_gun.cpp_CGun_ctor_FUN_004d0f60
// Address: 004d0f60
// Address Range: [[004d0f60, 004d0fbf]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004d0f60(CGun *this_ptr)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004d0f60(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_0057ad70((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,(char *)0x5c49cc);
  *(uint *)&pCVar1->field_0x2d8 = 0;
  *(uint *)&pCVar1->field_0x2dc = 1;
  *(uint *)&pCVar1->field_0x2e4 = 1;
  *(uint *)&pCVar1->field_0x2e8 = 0x42480000;
  *(uint *)&pCVar1->field_0x2ec = 0;
  return (CGun *)pCVar1;
}
