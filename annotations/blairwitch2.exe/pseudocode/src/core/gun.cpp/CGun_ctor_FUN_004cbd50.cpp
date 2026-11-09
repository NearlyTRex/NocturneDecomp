// Name: core_gun.cpp_CGun_ctor_FUN_004cbd50
// Address: 004cbd50
// Address Range: [[004cbd50, 004cbdb9]]
// Convention: unknown
// Signature: CGun * core_gun_cpp_CGun_ctor_FUN_004cbd50(CGun *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGun * core_gun_cpp_CGun_ctor_FUN_004cbd50(CGun *this_ptr)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CGunVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar1->field_0x2b4,"revolver.kfm");
  *(uint *)&pCVar1->field_0x434 = 0;
  *(uint *)&pCVar1->field_0x438 = 1;
  *(uint *)&pCVar1->field_0x440 = 1;
  *(uint *)&pCVar1->field_0x444 = 0x42480000;
  *(uint *)&pCVar1->field_0x448 = 0;
  *(uint *)&pCVar1->field_0x6c4 = 6;
  return (CGun *)pCVar1;
}
