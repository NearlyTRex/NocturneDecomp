// Name: core_svetlana.cpp_CSvetlana_dtor_FUN_00543050
// Address: 00543050
// Address Range: [[00543050, 005430c4]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00543050(CSvetlana *this_ptr,uint flags)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00543050(CSvetlana *this_ptr,uint flags)

{
  CCloth *pCVar1;
  CSvetlana *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSvetlanaTypeInfo_005a2bc0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00435160(&this_ptr->hair_cloth,0);
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00435160(pCVar1 + -1,0);
  ptr = (CSvetlana *)core_hero_cpp_CHero_dtor_FUN_004b4800((CHero *)(pCVar1[-1].vertices + 0x183),1)
  ;
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
