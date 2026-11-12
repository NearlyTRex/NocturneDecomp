// Name: core_trap.cpp_CTrap_dtor_FUN_00576880
// Address: 00576880
// Address Range: [[00576880, 005768cd]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00576880(CTrap *this_ptr,uint flags)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00576880(CTrap *this_ptr,uint flags)

{
  CTrap *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTrapTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CTrap *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
