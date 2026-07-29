// Name: core_gabriela.cpp_CGabriella_dtor_FUN_0049a170
// Address: 0049a170
// Address Range: [[0049a170, 0049a1d4]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_0049a170(CGabriella *this_ptr,uint flags)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_0049a170(CGabriella *this_ptr,uint flags)

{
  CCloth *pCVar1;
  CGabriella *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGabriellaTypeInfo_0059de40);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_00435160(&this_ptr->coat_cloth,0);
  pCVar2 = (CGabriella *)
           core_hero_cpp_CHero_dtor_FUN_004b4800
                     ((CHero *)(pCVar1[-1].vertices[0x182].bone_index + 1),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
