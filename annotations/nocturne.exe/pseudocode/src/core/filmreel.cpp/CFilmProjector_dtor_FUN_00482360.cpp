// Name: core_filmreel.cpp_CFilmProjector_dtor_FUN_00482360
// Address: 00482360
// Address Range: [[00482360, 004823ad]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_00482360(CFilmProjector *this_ptr,uint flags)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_00482360(CFilmProjector *this_ptr,uint flags)

{
  CFilmProjector *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFilmProjectorTypeInfo_0059d160);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CFilmProjector *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
