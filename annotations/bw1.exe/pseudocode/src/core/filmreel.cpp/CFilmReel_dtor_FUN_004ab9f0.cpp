// Name: core_filmreel.cpp_CFilmReel_dtor_FUN_004ab9f0
// Address: 004ab9f0
// Address Range: [[004ab9f0, 004aba3d]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_004ab9f0(CFilmReel *this_ptr,uint flags)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_004ab9f0(CFilmReel *this_ptr,uint flags)

{
  CFilmReel *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFilmReelTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CFilmReel *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
