// Name: core_dynamite.cpp_CDynamite_ctor_FUN_004924e0
// Address: 004924e0
// Address Range: [[004924e0, 00492589]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_004924e0(CDynamite *this_ptr)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_004924e0(CDynamite *this_ptr)

{
  CDynamite *pCVar1;
  
  pCVar1 = (CDynamite *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CDynamiteVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"dynamitestick.kfm");
  *(uint *)&pCVar1->field_0x564 = 0x3f800000;
  *(uint *)&pCVar1->field_0x584 = 0;
  *(uint *)&pCVar1->field_0x580 = *(uint *)&pCVar1->field_0x584;
  *(uint *)&pCVar1->field_0x57c = *(uint *)&pCVar1->field_0x580;
  *(uint *)&pCVar1->field_0x578 = 0xbf800000;
  *(uint *)&pCVar1->field_0x2d8 = 0;
  *(uint *)&pCVar1->field_0x2dc = 0;
  *(uint *)&pCVar1->field_0x2e0 = 3;
  *(uint *)&pCVar1->field_0x2e4 = 0;
  *(uint *)&pCVar1->field_0x2e8 = 0x43480000;
  *(uint *)&pCVar1->field_0x2ec = 0;
  *(uint *)&pCVar1->field_0x2f0 = 0;
  *(uint *)&pCVar1->field_0x588 = 0;
  return pCVar1;
}
