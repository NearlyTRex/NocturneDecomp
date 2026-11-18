// Name: core_stairs.cpp_CStairs_dtor_FUN_00562380
// Address: 00562380
// Address Range: [[00562380, 005623cd]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_00562380(CStairs *this_ptr,uint flags)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_00562380(CStairs *this_ptr,uint flags)

{
  CStairs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStairsTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CStairs *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
