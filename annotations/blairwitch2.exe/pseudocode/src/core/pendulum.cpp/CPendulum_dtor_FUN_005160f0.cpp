// Name: core_pendulum.cpp_CPendulum_dtor_FUN_005160f0
// Address: 005160f0
// Address Range: [[005160f0, 0051613d]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_005160f0(CPendulum *this_ptr,uint flags)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_005160f0(CPendulum *this_ptr,uint flags)

{
  CPendulum *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CPendulumTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CPendulum *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
