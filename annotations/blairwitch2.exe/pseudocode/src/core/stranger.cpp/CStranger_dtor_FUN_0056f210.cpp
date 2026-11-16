// Name: core_stranger.cpp_CStranger_dtor_FUN_0056f210
// Address: 0056f210
// Address Range: [[0056f210, 0056f25d]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_0056f210(CStranger *this_ptr,uint flags)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_0056f210(CStranger *this_ptr,uint flags)

{
  CStranger *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStrangerTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CStranger *)core_hero_cpp_CHero_dtor_FUN_004ce3d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
