// Name: core_ladder.cpp_CLadder_dtor_FUN_004fd8a0
// Address: 004fd8a0
// Address Range: [[004fd8a0, 004fd8ed]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_004fd8a0(CLadder *this_ptr,uint flags)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_004fd8a0(CLadder *this_ptr,uint flags)

{
  CLadder *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLadderTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CLadder *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
