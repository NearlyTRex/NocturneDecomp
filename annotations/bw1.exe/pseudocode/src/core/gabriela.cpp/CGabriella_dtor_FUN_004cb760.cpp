// Name: core_gabriela.cpp_CGabriella_dtor_FUN_004cb760
// Address: 004cb760
// Address Range: [[004cb760, 004cb7c4]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004cb760(CGabriella *this_ptr,uint flags)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004cb760(CGabriella *this_ptr,uint flags)

{
  CCloth *pCVar1;
  CGabriella *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGabriellaTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_0043e620(&this_ptr->coat_cloth,0);
  ptr = (CGabriella *)
        core_hero_cpp_CHero_dtor_FUN_004ea980
                  ((CHero *)&pCVar1[-1].vertices[0x17d].bone_positions[1].z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
