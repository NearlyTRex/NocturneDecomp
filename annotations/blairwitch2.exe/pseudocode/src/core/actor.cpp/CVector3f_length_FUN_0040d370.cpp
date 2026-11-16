// Name: core_actor.cpp_CVector3f_length_FUN_0040d370
// Address: 0040d370
// Address Range: [[0040d370, 0040d399]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CVector3f_length_FUN_0040d370(CVector3f *this_ptr)

#include "nocturne.h"

float __cdecl core_actor_cpp_CVector3f_length_FUN_0040d370(CVector3f *this_ptr)

{
  return SQRT(this_ptr->z * this_ptr->z + this_ptr->x * this_ptr->x + this_ptr->y * this_ptr->y);
}
