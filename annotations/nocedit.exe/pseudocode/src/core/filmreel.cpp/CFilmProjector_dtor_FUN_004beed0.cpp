// Name: core_filmreel.cpp_CFilmProjector_dtor_FUN_004beed0
// Address: 004beed0
// Address Range: [[004beed0, 004bef1d]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_004beed0(CFilmProjector *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CFilmProjector * __cdecl
core_filmreel_cpp_CFilmProjector_dtor_FUN_004beed0(CFilmProjector *this_ptr,uint d1,uint d2)

{
  CFilmProjector *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFilmProjectorTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CFilmProjector *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)this_ptr,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
