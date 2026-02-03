// Name: core_scat.cpp_CScat_dtor_FUN_00559160
// Address: 00559160
// Address Range: [[00559160, 005591ad]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00559160(CScat *this_ptr,uint flags)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00559160(CScat *this_ptr,uint flags)

{
  CScat *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CScatTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_hero_cpp_CHero_dtor_FUN_004f2470(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
