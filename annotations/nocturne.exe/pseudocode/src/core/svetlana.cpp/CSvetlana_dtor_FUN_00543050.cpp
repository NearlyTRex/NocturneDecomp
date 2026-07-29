// Name: core_svetlana.cpp_CSvetlana_dtor_FUN_00543050
// Address: 00543050
// Address Range: [[00543050, 005430c4]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00543050(CSvetlana *this_ptr,uint flags)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00543050(CSvetlana *this_ptr,uint flags)

{
  CCloth *pCVar1;
  CSvetlana *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CSvetlanaTypeInfo_005a2bc0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)((this_ptr->cape_cloth).vertices[0x300].connected_indices + 9),0);
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)
                      (pCVar1[-1].model.texture_list[0x123].textures[2].texture_name + 0xc),0);
  pCVar2 = (CSvetlana *)
           core_hero_cpp_CHero_dtor_FUN_004b4800((CHero *)(pCVar1[-1].vertices + 0x183),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
