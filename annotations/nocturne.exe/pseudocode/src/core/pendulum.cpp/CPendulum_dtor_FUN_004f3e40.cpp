// Name: core_pendulum.cpp_CPendulum_dtor_FUN_004f3e40
// Address: 004f3e40
// Address Range: [[004f3e40, 004f3e8d]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_004f3e40(CPendulum *this_ptr,uint flags)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_004f3e40(CPendulum *this_ptr,uint flags)

{
  CPendulum *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPendulumTypeInfo_005a1320);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CPendulum *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
