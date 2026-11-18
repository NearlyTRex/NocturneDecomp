// Name: core_filmreel.cpp_CFilmReel_dtor_FUN_004ab9f0
// Address: 004ab9f0
// Address Range: [[004ab9f0, 004aba3d]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_004ab9f0(CFilmReel *this_ptr,uint flags)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_004ab9f0(CFilmReel *this_ptr,uint flags)

{
  CFilmReel *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFilmReelTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CFilmReel *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
