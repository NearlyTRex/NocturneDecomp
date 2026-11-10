// Name: core_stairs.cpp_CStairs_dtor_FUN_00562380
// Address: 00562380
// Address Range: [[00562380, 005623cd]]
// Convention: unknown
// Signature: CStairs * core_stairs_cpp_CStairs_dtor_FUN_00562380(CStairs *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStairs * core_stairs_cpp_CStairs_dtor_FUN_00562380(CStairs *this_ptr,uint flags)

{
  CStairs *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CStairsTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CStairs *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
