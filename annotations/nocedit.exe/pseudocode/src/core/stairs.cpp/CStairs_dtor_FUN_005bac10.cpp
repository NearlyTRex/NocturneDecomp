// Name: core_stairs.cpp_CStairs_dtor_FUN_005bac10
// Address: 005bac10
// Address Range: [[005bac10, 005bac74]]
// Convention: __cdecl
// Signature: CStairs * core_stairs.cpp_CStairs_dtor_FUN_005bac10(CStairs * this_ptr, uint d1, uint d2, uint d3)

#include "nocturne.h"

CStairs * __cdecl
core_stairs_cpp_CStairs_dtor_FUN_005bac10(CStairs *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CStairs *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CStairsTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_stairs_cpp_FUN_005bac80();
  ptr = (CStairs *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x170),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
