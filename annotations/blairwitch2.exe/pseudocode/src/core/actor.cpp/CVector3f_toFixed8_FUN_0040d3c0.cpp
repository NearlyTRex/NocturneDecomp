// Name: core_actor.cpp_CVector3f_toFixed8_FUN_0040d3c0
// Address: 0040d3c0
// Address Range: [[0040d3c0, 0040d3ec]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_0040d3c0(CVector3f *this_ptr,CVector3i *other)

#include "nocturne.h"

void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_0040d3c0(CVector3f *this_ptr,CVector3i *other)

{
  other->x = (int)ROUND(this_ptr->x * 256.0f);
  other->y = (int)ROUND(this_ptr->y * 256.0f);
  other->z = (int)ROUND(this_ptr->z * 256.0f);
  return;
}
