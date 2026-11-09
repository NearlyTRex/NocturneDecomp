// Name: core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
// Address: 005593c0
// Address Range: [[005593c0, 005593d8]]
// Convention: __cdecl
// Signature: SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo *this_ptr)

#include "nocturne.h"

SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo *this_ptr)

{
  *(uint *)&this_ptr->field_0x20 = 0;
  *(uint *)&this_ptr->field_0x24 = 0;
  *(uint *)this_ptr = 0;
  return this_ptr;
}
