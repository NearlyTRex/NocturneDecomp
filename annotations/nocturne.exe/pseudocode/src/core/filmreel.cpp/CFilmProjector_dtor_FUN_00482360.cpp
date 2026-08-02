// Name: core_filmreel.cpp_CFilmProjector_dtor_FUN_00482360
// Address: 00482360
// Address Range: [[00482360, 004823ad]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_00482360(CFilmProjector *this_ptr,uint flags)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_00482360(CFilmProjector *this_ptr,uint flags)

{
  CFilmProjector *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFilmProjectorTypeInfo_0059d160);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CFilmProjector *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)this_ptr,1)
  ;
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
