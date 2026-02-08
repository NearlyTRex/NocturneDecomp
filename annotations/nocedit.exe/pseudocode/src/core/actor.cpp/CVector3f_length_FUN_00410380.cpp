// Name: core_actor.cpp_CVector3f_length_FUN_00410380
// Address: 00410380
// Address Range: [[00410380, 004103a4]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CVector3f_length_FUN_00410380(CVector3f *this_ptr)

#include "nocturne.h"

float __cdecl core_actor_cpp_CVector3f_length_FUN_00410380(CVector3f *this_ptr)

{
  return SQRT(this_ptr->z * this_ptr->z + this_ptr->x * this_ptr->x + this_ptr->y * this_ptr->y);
}
