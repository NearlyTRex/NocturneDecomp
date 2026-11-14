// Name: core_actor.cpp_CVector3f_toFixed8_FUN_0040d060
// Address: 0040d060
// Address Range: [[0040d060, 0040d08c]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_0040d060(CVector3f *this_ptr,CVector3i *other)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_0040d060(CVector3f *this_ptr,CVector3i *other)

{
  other->x = (int)ROUND(this_ptr->x * _DAT_005fb310);
  other->y = (int)ROUND(this_ptr->y * _DAT_005fb310);
  other->z = (int)ROUND(this_ptr->z * _DAT_005fb310);
  return;
}
