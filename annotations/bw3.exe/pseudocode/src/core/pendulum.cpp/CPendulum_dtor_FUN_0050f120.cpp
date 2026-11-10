// Name: core_pendulum.cpp_CPendulum_dtor_FUN_0050f120
// Address: 0050f120
// Address Range: [[0050f120, 0050f16d]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_0050f120(CPendulum *this_ptr,uint flags)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_0050f120(CPendulum *this_ptr,uint flags)

{
  CPendulum *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CPendulumTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CPendulum *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
