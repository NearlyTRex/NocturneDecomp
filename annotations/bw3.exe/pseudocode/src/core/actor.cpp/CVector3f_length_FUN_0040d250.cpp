// Name: core_actor.cpp_CVector3f_length_FUN_0040d250
// Address: 0040d250
// Address Range: [[0040d250, 0040d279]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CVector3f_length_FUN_0040d250(CVector3f *this_ptr)

#include "nocturne.h"

float __cdecl core_actor_cpp_CVector3f_length_FUN_0040d250(CVector3f *this_ptr)

{
  return SQRT(this_ptr->z * this_ptr->z + this_ptr->x * this_ptr->x + this_ptr->y * this_ptr->y);
}
