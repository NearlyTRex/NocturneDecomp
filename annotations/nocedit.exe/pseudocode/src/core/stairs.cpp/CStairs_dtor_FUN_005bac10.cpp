// Name: core_stairs.cpp_CStairs_dtor_FUN_005bac10
// Address: 005bac10
// Address Range: [[005bac10, 005bac74]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_005bac10(CStairs *this_ptr,uint flags)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_005bac10(CStairs *this_ptr,uint flags)

{
  int extraout_EAX;
  CStairs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStairsTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_stairs_cpp_FUN_005bac80();
  ptr = (CStairs *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(extraout_EAX + -0x170),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
