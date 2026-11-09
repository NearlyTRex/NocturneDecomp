// Name: core_icepick.cpp_CIcePick_ctor_FUN_004f0b90
// Address: 004f0b90
// Address Range: [[004f0b90, 004f0c11]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f0b90(CIcePick *this_ptr)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f0b90(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)core_hero_cpp_FUN_004ea830((CHero *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CIcePickVTable;
  *(uint *)&pCVar1->field_0x1ffac = 0;
  *(uint *)&pCVar1->field_0x1ffb0 = 0;
  core_skeleton_cpp_FUN_00569f50(&pCVar1->field_0x158,"icepick.dfm");
  *(uint *)&pCVar1->field_0x1ffc8 = 0x3f800000;
  *(uint *)&pCVar1->field_0x1ffc4 = 0;
  *(uint *)&pCVar1->field_0x1ffc0 = *(uint *)&pCVar1->field_0x1ffc4;
  *(uint *)&pCVar1->field_0x1ffbc = *(uint *)&pCVar1->field_0x1ffc0;
  *(uint *)&pCVar1->field_0x1ffcc = 0;
  *(uint *)&pCVar1->field_0x1ffd0 = 0;
  *(uint *)&pCVar1->field_0x2538 = 0x43960000;
  return pCVar1;
}
