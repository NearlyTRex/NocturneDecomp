// Name: core_gabriela.cpp_CGabriella_dtor_FUN_004cb760
// Address: 004cb760
// Address Range: [[004cb760, 004cb7c4]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004cb760(CGabriella *this_ptr,uint flags)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004cb760(CGabriella *this_ptr,uint flags)

{
  CCloth *pCVar1;
  CGabriella *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGabriellaTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_0043e620(&this_ptr->coat_cloth,0);
  pCVar2 = (CGabriella *)
           core_hero_cpp_CHero_dtor_FUN_004ea980
                     ((CHero *)&pCVar1[-1].vertices[0x17d].bone_positions[1].z,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
