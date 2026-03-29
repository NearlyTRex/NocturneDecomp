// Name: core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50
// Address: 005d9f50
// Address Range: [[005d9f50, 005d9fc4]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana *this_ptr,uint flags)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana *this_ptr,uint flags)

{
  CSvetlana_ptr_391756 pCVar1;
  CSvetlana_ptr_130012 pCVar2;
  CSvetlana *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CSvetlanaTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00438c00(&this_ptr->hair_cloth,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00438c00(&ADJ(pCVar1)->cape_cloth,0);
  ptr = (CSvetlana *)core_hero_cpp_CHero_dtor_FUN_004f2470(&ADJ(pCVar2)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
