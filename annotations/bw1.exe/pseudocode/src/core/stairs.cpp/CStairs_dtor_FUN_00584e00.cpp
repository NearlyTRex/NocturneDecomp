// Name: core_stairs.cpp_CStairs_dtor_FUN_00584e00
// Address: 00584e00
// Address Range: [[00584e00, 00584e4d]]
// Convention: unknown
// Signature: CStairs * core_stairs_cpp_CStairs_dtor_FUN_00584e00(CStairs *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStairs * core_stairs_cpp_CStairs_dtor_FUN_00584e00(CStairs *this_ptr,uint flags)

{
  CStairs *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CStairsTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CStairs *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
