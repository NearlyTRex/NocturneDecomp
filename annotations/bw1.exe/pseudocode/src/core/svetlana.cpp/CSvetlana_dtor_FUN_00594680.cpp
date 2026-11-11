// Name: core_svetlana.cpp_CSvetlana_dtor_FUN_00594680
// Address: 00594680
// Address Range: [[00594680, 005946f4]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00594680(CSvetlana *this_ptr,uint flags)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00594680(CSvetlana *this_ptr,uint flags)

{
  int iVar1;
  CSvetlana *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CSvetlanaTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  iVar1 = core_cloth_cpp_FUN_0043e620(&this_ptr->hair_cloth,0);
  iVar1 = core_cloth_cpp_FUN_0043e620(iVar1 + -0x3ab30,0);
  pCVar2 = (CSvetlana *)core_hero_cpp_FUN_004ea980(iVar1 + -0x1ffb4,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
