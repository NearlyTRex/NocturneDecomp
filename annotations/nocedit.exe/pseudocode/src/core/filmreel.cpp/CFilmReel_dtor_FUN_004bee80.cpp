// Name: core_filmreel.cpp_CFilmReel_dtor_FUN_004bee80
// Address: 004bee80
// Address Range: [[004bee80, 004beecd]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_004bee80(CFilmReel *this_ptr,uint flags)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_004bee80(CFilmReel *this_ptr,uint flags)

{
  CFilmReel *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFilmReelTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CFilmReel *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
