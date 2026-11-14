// Name: core_filmreel.cpp_CFilmProjector_dtor_FUN_004aba40
// Address: 004aba40
// Address Range: [[004aba40, 004aba8d]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_004aba40(CFilmProjector *this_ptr,uint flags)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_004aba40(CFilmProjector *this_ptr,uint flags)

{
  CFilmProjector *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFilmProjectorTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CFilmProjector *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1)
  ;
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
