// Name: core_pendulum.cpp_CPendulum_dtor_FUN_005160f0
// Address: 005160f0
// Address Range: [[005160f0, 0051613d]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_005160f0(CPendulum *this_ptr,uint flags)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_005160f0(CPendulum *this_ptr,uint flags)

{
  CPendulum *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPendulumTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CPendulum *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
