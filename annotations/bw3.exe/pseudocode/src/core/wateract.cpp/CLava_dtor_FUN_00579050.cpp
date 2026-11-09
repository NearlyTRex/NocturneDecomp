// Name: core_wateract.cpp_CLava_dtor_FUN_00579050
// Address: 00579050
// Address Range: [[00579050, 0057909d]]
// Convention: unknown
// Signature: CLava * core_wateract_cpp_CLava_dtor_FUN_00579050(CLava *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLava * core_wateract_cpp_CLava_dtor_FUN_00579050(CLava *this_ptr,uint flags)

{
  CLava *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLavaTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CLava *)core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
