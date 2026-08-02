// Name: core_filmreel.cpp_CFilmReel_dtor_FUN_00482310
// Address: 00482310
// Address Range: [[00482310, 0048235d]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_00482310(CFilmReel *this_ptr,uint flags)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_00482310(CFilmReel *this_ptr,uint flags)

{
  CFilmReel *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFilmReelTypeInfo_0059d140);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CFilmReel *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
