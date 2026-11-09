// Name: core_gun.cpp_CGun_ctor_FUN_004e85d0
// Address: 004e85d0
// Address Range: [[004e85d0, 004e862f]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004e85d0(CGun *this_ptr)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_ctor_FUN_004e85d0(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"gat.kfm");
  *(uint *)&pCVar1->field_0x2d8 = 0;
  *(uint *)&pCVar1->field_0x2dc = 1;
  *(uint *)&pCVar1->field_0x2e4 = 1;
  *(uint *)&pCVar1->field_0x2e8 = 0x42480000;
  *(uint *)&pCVar1->field_0x2ec = 0;
  return (CGun *)pCVar1;
}
