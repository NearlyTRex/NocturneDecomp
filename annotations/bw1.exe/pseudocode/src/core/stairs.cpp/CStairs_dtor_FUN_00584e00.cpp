// Name: core_stairs.cpp_CStairs_dtor_FUN_00584e00
// Address: 00584e00
// Address Range: [[00584e00, 00584e4d]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_00584e00(CStairs *this_ptr,uint flags)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_00584e00(CStairs *this_ptr,uint flags)

{
  CStairs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStairsTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CStairs *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
