// Name: core_stranger.cpp_CStranger_dtor_FUN_00591e60
// Address: 00591e60
// Address Range: [[00591e60, 00591ead]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_00591e60(CStranger *this_ptr,uint flags)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_00591e60(CStranger *this_ptr,uint flags)

{
  CStranger *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStrangerTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CStranger *)core_hero_cpp_CHero_dtor_FUN_004ea980(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
