// Name: core_stairs.cpp_CStairs_dtor_FUN_005bac10
// Address: 005bac10
// Address Range: [[005bac10, 005bac74]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_005bac10(CStairs *this_ptr,uint flags)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_005bac10(CStairs *this_ptr,uint flags)

{
  CStairs_ptr_368 pCVar1;
  CStairs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStairsTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = (CStairs_ptr_368)
           core_stairs_cpp_CDemonTriangle_arrdtor_FUN_005bac80(this_ptr->collision_triangles,0);
  ptr = (CStairs *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pCVar1)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
