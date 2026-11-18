// Name: core_svetlana.cpp_CSvetlana_dtor_FUN_00571a30
// Address: 00571a30
// Address Range: [[00571a30, 00571aa4]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00571a30(CSvetlana *this_ptr,uint flags)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00571a30(CSvetlana *this_ptr,uint flags)

{
  CCloth *pCVar1;
  CSvetlana *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSvetlanaTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_005ade00(&this_ptr->hair_cloth,0);
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_005ade00(pCVar1 + -1,0);
  ptr = (CSvetlana *)
        core_hero_cpp_CHero_dtor_FUN_004ce3d0((CHero *)&pCVar1[-1].vertices[0x130].force.y,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
