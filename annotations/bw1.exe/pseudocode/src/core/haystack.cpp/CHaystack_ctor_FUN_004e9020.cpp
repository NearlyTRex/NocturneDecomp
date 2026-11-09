// Name: core_haystack.cpp_CHaystack_ctor_FUN_004e9020
// Address: 004e9020
// Address Range: [[004e9020, 004e9083]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004e9020(CHaystack *this_ptr)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004e9020(CHaystack *this_ptr)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)core_hero_cpp_FUN_004ea830((CHero *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CHaystackVTable;
  *(uint *)&pCVar1->field_0x1ffac = 0;
  *(uint *)&pCVar1->field_0x1ffb0 = 0;
  core_skeleton_cpp_FUN_00569f50(&pCVar1->field_0x158,"haystack.dfm");
  *(uint *)&pCVar1->field_0x1ffc0 = 0x3f800000;
  *(uint *)&pCVar1->field_0x1ffbc = 0;
  *(uint *)&pCVar1->field_0x1ffb8 = *(uint *)&pCVar1->field_0x1ffbc;
  *(uint *)&pCVar1->field_0x1ffb4 = *(uint *)&pCVar1->field_0x1ffb8;
  return pCVar1;
}
