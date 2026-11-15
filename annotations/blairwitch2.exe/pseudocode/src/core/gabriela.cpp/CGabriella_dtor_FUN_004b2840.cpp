// Name: core_gabriela.cpp_CGabriella_dtor_FUN_004b2840
// Address: 004b2840
// Address Range: [[004b2840, 004b28a4]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004b2840(CGabriella *this_ptr,uint flags)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004b2840(CGabriella *this_ptr,uint flags)

{
  CCloth *pCVar1;
  CGabriella *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGabriellaTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_cloth_cpp_CCloth_dtor_FUN_005ade00(&this_ptr->coat_cloth,0);
  pCVar2 = (CGabriella *)
           core_hero_cpp_CHero_dtor_FUN_004ce3d0
                     ((CHero *)&pCVar1[-1].vertices[0x12f].bone_positions[0].z,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
