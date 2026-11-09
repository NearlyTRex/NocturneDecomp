// Name: core_filmreel.cpp_CFilmReel_dtor_FUN_00493040
// Address: 00493040
// Address Range: [[00493040, 0049308d]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_00493040(CFilmReel *this_ptr,uint flags)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_00493040(CFilmReel *this_ptr,uint flags)

{
  CFilmReel *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFilmReelTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CFilmReel *)core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
