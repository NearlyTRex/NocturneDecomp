// Name: core_svetlana.cpp_CSvetlana_dtor_FUN_00571a30
// Address: 00571a30
// Address Range: [[00571a30, 00571aa4]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00571a30(CSvetlana *this_ptr,uint flags)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00571a30(CSvetlana *this_ptr,uint flags)

{
  int iVar1;
  CSvetlana *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CSvetlanaTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  iVar1 = core_necklace_cpp_FUN_005ade00(&this_ptr->field_0x60178,0);
  iVar1 = core_necklace_cpp_FUN_005ade00(iVar1 + -0x3ab30,0);
  pCVar2 = (CSvetlana *)core_hero_cpp_CHero_dtor_FUN_004ce3d0((CHero *)(iVar1 + -0x25648),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
