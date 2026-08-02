// Name: core_trap.cpp_CTrap_dtor_FUN_00546be0
// Address: 00546be0
// Address Range: [[00546be0, 00546c2d]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00546be0(CTrap *this_ptr,uint flags)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00546be0(CTrap *this_ptr,uint flags)

{
  CTrap *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTrapTypeInfo_005a3500);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CTrap *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
