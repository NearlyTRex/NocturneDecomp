// Name: core_actor.cpp_CVector3f_toFixed8_FUN_004103d0
// Address: 004103d0
// Address Range: [[004103d0, 004103fc]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(CVector3f *this_ptr,CVector3f *other)

#include "nocturne.h"

void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(CVector3f *this_ptr,CVector3f *other)

{
  other->x = (float)(int)ROUND(this_ptr->x * 256.0f);
  other->y = (float)(int)ROUND(this_ptr->y * 256.0f);
  other->z = (float)(int)ROUND(this_ptr->z * 256.0f);
  return;
}
