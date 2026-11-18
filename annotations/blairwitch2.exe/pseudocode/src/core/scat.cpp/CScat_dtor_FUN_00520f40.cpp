// Name: core_scat.cpp_CScat_dtor_FUN_00520f40
// Address: 00520f40
// Address Range: [[00520f40, 00520f8d]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00520f40(CScat *this_ptr,uint flags)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00520f40(CScat *this_ptr,uint flags)

{
  CScat *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CScatTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CScat *)core_hero_cpp_CHero_dtor_FUN_004ce3d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
