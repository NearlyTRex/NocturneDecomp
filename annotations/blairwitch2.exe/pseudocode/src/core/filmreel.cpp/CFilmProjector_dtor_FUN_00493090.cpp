// Name: core_filmreel.cpp_CFilmProjector_dtor_FUN_00493090
// Address: 00493090
// Address Range: [[00493090, 004930dd]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_00493090(CFilmProjector *this_ptr,uint flags)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_00493090(CFilmProjector *this_ptr,uint flags)

{
  CFilmProjector *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFilmProjectorTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CFilmProjector *)core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)this_ptr,1)
  ;
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
