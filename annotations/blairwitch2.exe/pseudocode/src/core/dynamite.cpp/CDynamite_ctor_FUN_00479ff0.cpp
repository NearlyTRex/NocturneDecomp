// Name: core_dynamite.cpp_CDynamite_ctor_FUN_00479ff0
// Address: 00479ff0
// Address Range: [[00479ff0, 0047a099]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_00479ff0(CDynamite *this_ptr)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_00479ff0(CDynamite *this_ptr)

{
  CDynamite *pCVar1;
  
  pCVar1 = (CDynamite *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CDynamiteVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar1->field_0x2b4,"dynamitestick.kfm");
  *(uint *)&pCVar1->field_0x6c0 = 0x3f800000;
  *(uint *)&pCVar1->field_0x6e0 = 0;
  *(uint *)&pCVar1->field_0x6dc = *(uint *)&pCVar1->field_0x6e0;
  *(uint *)&pCVar1->field_0x6d8 = *(uint *)&pCVar1->field_0x6dc;
  *(uint *)&pCVar1->field_0x6d4 = 0xbf800000;
  *(uint *)&pCVar1->field_0x434 = 0;
  *(uint *)&pCVar1->field_0x438 = 0;
  *(uint *)&pCVar1->field_0x43c = 3;
  *(uint *)&pCVar1->field_0x440 = 0;
  *(uint *)&pCVar1->field_0x444 = 0x43480000;
  *(uint *)&pCVar1->field_0x448 = 0;
  *(uint *)&pCVar1->field_0x44c = 0;
  *(uint *)&pCVar1->field_0x6e4 = 0;
  return pCVar1;
}
