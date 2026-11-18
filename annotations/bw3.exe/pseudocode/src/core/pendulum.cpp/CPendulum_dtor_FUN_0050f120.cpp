// Name: core_pendulum.cpp_CPendulum_dtor_FUN_0050f120
// Address: 0050f120
// Address Range: [[0050f120, 0050f16d]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_0050f120(CPendulum *this_ptr,uint flags)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_0050f120(CPendulum *this_ptr,uint flags)

{
  CPendulum *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPendulumTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CPendulum *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
