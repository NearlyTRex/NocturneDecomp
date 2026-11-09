// Name: core_colonel.cpp_CColonel_ctor_FUN_00444330
// Address: 00444330
// Address Range: [[00444330, 00444393]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_00444330(CColonel *this_ptr)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_00444330(CColonel *this_ptr)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)core_hero_cpp_FUN_004ea830((CHero *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CColonelVTable;
  *(uint *)&pCVar1->field_0x1ffac = 0;
  *(uint *)&pCVar1->field_0x1ffb0 = 0;
  core_skeleton_cpp_FUN_00569f50(&pCVar1->field_0x158,"colonel.dfm");
  *(uint *)&pCVar1->field_0x1ffc0 = 0x3f800000;
  *(uint *)&pCVar1->field_0x1ffbc = 0;
  *(uint *)&pCVar1->field_0x1ffb8 = *(uint *)&pCVar1->field_0x1ffbc;
  *(uint *)&pCVar1->field_0x1ffb4 = *(uint *)&pCVar1->field_0x1ffb8;
  return pCVar1;
}
