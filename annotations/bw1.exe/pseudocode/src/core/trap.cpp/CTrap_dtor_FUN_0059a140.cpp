// Name: core_trap.cpp_CTrap_dtor_FUN_0059a140
// Address: 0059a140
// Address Range: [[0059a140, 0059a18d]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_0059a140(CTrap *this_ptr,uint flags)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_0059a140(CTrap *this_ptr,uint flags)

{
  CTrap *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTrapTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CTrap *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
